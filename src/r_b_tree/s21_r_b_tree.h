#ifndef CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_H_
#define CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_H_

#include <limits>

#include "s21_r_b_tree_iterator.h"
#include "s21_r_b_tree_node.h"

namespace s21 {

template <typename Key, typename T>
class RbTree {
 public:
  using key_type = Key;
  using mapped_type = T;
  using value_type = std::pair<const key_type, mapped_type>;
  using reference = std::pair<const key_type&, mapped_type&>;
  using const_reference = std::pair<const key_type&, const mapped_type&>;
  using iterator = RBTreeIterator<key_type, mapped_type, false>;
  using const_iterator = RBTreeIterator<key_type, mapped_type, true>;
  using size_type = std::size_t;
  using node_type = Node<key_type, mapped_type>*;

  RbTree() : max_(nullptr), nil_(new Node<key_type, mapped_type>()), size_(0) {
    root_ = nil_;
    begin_ = nil_;
  }
  explicit RbTree(std::initializer_list<value_type> const& items) : RbTree() {
    for (auto&& pair : items) Insert(pair.first, pair.second);
  }
  RbTree(const RbTree& tree) : RbTree() {
    for (const_iterator it = tree.cbegin(); it != tree.cend(); ++it)
      Insert(it->first, it->second);
  }
  RbTree(RbTree&& tree) : RbTree() { swap(tree); }
  ~RbTree() {
    clear();
    delete nil_;
  }
  RbTree& operator=(const RbTree& tree) {
    if (this != &tree) {
      clear();
      for (const_iterator it = tree.cbegin(); it != tree.cend(); ++it)
        Insert(it->first, it->second);
    }
    return *this;
  }
  RbTree& operator=(RbTree&& tree) noexcept {
    if (this != &tree) swap(tree);
    return *this;
  }

  bool empty() { return IsLeaf(root_); }
  size_type size() const noexcept { return size_; }
  size_type max_size() const noexcept {
    return (SIZE_MAX - sizeof(size_type) -
            sizeof(Node<key_type, mapped_type>) * 4) /
           sizeof(Node<key_type, mapped_type>);
  }
  iterator begin() noexcept { return iterator(begin_); }
  iterator end() noexcept { return iterator(nil_); }
  const_iterator cbegin() const noexcept { return const_iterator(begin_); }
  const_iterator cend() const noexcept { return const_iterator(nil_); }
  void clear() {
    iterator it = begin();
    while (!empty()) {
      RemoveNode(it.get_node());
      it = begin();
    }
  }
  void swap(RbTree& other) {
    if (this != &other) {
      std::swap(root_, other.root_);
      std::swap(begin_, other.begin_);
      std::swap(max_, other.max_);
      std::swap(nil_, other.nil_);
      std::swap(size_, other.size_);
    }
  }
  node_type Grandparent(node_type n) { return n->parent->parent; }
  node_type Uncle(node_type n) {
    node_type answer;
    node_type g = Grandparent(n);
    if (n->parent == g->left)
      answer = g->right;
    else
      answer = g->left;
    return answer;
  }
  node_type Sibling(node_type n) {
    node_type answer;
    if (n == n->parent->left)
      answer = n->parent->right;
    else
      answer = n->parent->left;
    return answer;
  }
  void RotateLeft(node_type n) {
    node_type pivot = n->right;
    pivot->parent = n->parent;
    if (n->parent) {
      if (n->parent->left == n)
        n->parent->left = pivot;
      else
        n->parent->right = pivot;
    } else {
      root_ = pivot;
    }
    n->right = pivot->left;
    if (pivot->left != nil_) pivot->left->parent = n;
    n->parent = pivot;
    pivot->left = n;
  }
  void RotateRight(node_type n) {
    node_type pivot = n->left;
    pivot->parent = n->parent;
    if (n->parent) {
      if (n->parent->left == n)
        n->parent->left = pivot;
      else
        n->parent->right = pivot;
    } else {
      root_ = pivot;
    }
    n->left = pivot->right;
    if (pivot->right != nil_) pivot->right->parent = n;
    n->parent = pivot;
    pivot->right = n;
  }
  void TieOneNode(node_type node_parent, node_type other_node) {
    other_node->parent = node_parent;
    other_node->left = nil_;
    other_node->right = nil_;
    other_node->black = false;
    if (!other_node->parent) {
      root_ = other_node;
      begin_ = other_node;
      max_ = other_node;
    } else if (other_node->key < node_parent->key) {
      node_parent->left = other_node;
    } else if (other_node->key > node_parent->key) {
      node_parent->right = other_node;
    } else {
      other_node->right = node_parent->right;
      node_parent->right->parent = other_node;
      node_parent->right = other_node;
      if (max_->key == other_node->key) max_ = other_node;
      if (!IsLeaf(other_node->right)) InsertCase1(other_node->right);
    }
    InsertCase1(other_node);
    ++size_;
    if (begin_->key > other_node->key) begin_ = other_node;
    if (max_->key < other_node->key) max_ = other_node;
    nil_->parent = max_;
  }
  node_type InsertToNode(std::pair<node_type, node_type> pair, key_type key,
                         mapped_type value) {
    node_type new_ptr;
    if (IsLeaf(pair.first)) {
      new_ptr = new Node<key_type, mapped_type>(key, value, false);
      TieOneNode(pair.second, new_ptr);
    } else {
      new_ptr = pair.first;
    }
    return new_ptr;
  }
  node_type Insert(key_type key, mapped_type value) {
    node_type ptr = root_;
    node_type parent_ptr = nullptr;
    while (!IsLeaf(ptr)) {
      parent_ptr = ptr;
      if (key < ptr->key)
        ptr = ptr->left;
      else
        ptr = ptr->right;
    }
    node_type new_ptr = new Node<key_type, mapped_type>(key, value, false);
    TieOneNode(parent_ptr, new_ptr);
    return new_ptr;
  }
  void InsertCase1(node_type n) {
    if (!n->parent)
      n->black = true;
    else
      InsertCase2(n);
  }
  void InsertCase2(node_type n) {
    if (!n->parent->black) InsertCase3(n);
  }
  void InsertCase3(node_type n) {
    node_type u = Uncle(n);
    if (!u->black) {
      n->parent->black = true;
      u->black = true;
      node_type g = Grandparent(n);
      g->black = false;
      InsertCase1(g);
    } else {
      InsertCase4(n);
    }
  }
  void InsertCase4(node_type n) {
    node_type g = Grandparent(n);
    if (n == n->parent->right && n->parent == g->left) {
      RotateLeft(n->parent);
      n = n->left;
    } else if (n == n->parent->left && n->parent == g->right) {
      RotateRight(n->parent);
      n = n->right;
    }
    InsertCase5(n);
  }
  void InsertCase5(node_type n) {
    node_type g = Grandparent(n);
    n->parent->black = true;
    g->black = false;
    if (n == n->parent->left && n->parent == g->left) {
      RotateRight(g);
    } else {
      RotateLeft(g);
    }
  }
  node_type UntieOneNode(node_type node) {
    if (!IsLeaf(node)) {
      if (begin_->key == node->key) {
        if (size_ == 1)
          begin_ = nil_;
        else
          begin_ = IsLeaf(node->right) ? node->parent : node->right;
      }
      if (max_->key == node->key) {
        max_ = IsLeaf(node->right) ? node->parent : node->right;
      }
      if (node->left != nil_ && node->right != nil_) {
        node_type min = FindMin(node->right);
        std::swap(node->key, min->key);
        std::swap(node->value, min->value);
        node = min;
      }
      DeleteOneChild(node);
      --size_;
    }
    return node;
  }
  void RemoveNode(node_type node) {
    node = UntieOneNode(node);
    delete (node);
  }
  void RemoveNode(key_type key) {
    auto pair = FindNode(key);
    node_type ptr = UntieOneNode(pair.first);
    if (!IsLeaf(ptr)) delete (ptr);
  }
  void ReplaceNode(node_type n, node_type child) {
    child->parent = n->parent;
    if (n == root_) {
      root_ = child;
    } else if (n == n->parent->left) {
      n->parent->left = child;
    } else {
      n->parent->right = child;
    }
  }
  void DeleteOneChild(node_type n) {
    node_type child = IsLeaf(n->right) ? n->left : n->right;
    ReplaceNode(n, child);
    if (n->black) {
      if (!child->black)
        child->black = true;
      else
        DeleteCase1(child);
    }
  }
  void DeleteCase1(node_type n) {
    if (n->parent) DeleteCase2(n);
  }
  void DeleteCase2(node_type n) {
    node_type s = Sibling(n);
    if (!s->black) {
      n->parent->black = false;
      s->black = true;
      if (n == n->parent->left) {
        RotateLeft(n->parent);
      } else {
        RotateRight(n->parent);
      }
    }
    DeleteCase3(n);
  }
  void DeleteCase3(node_type n) {
    node_type s = Sibling(n);
    if (n->parent->black && s->black && s->left->black && s->right->black) {
      s->black = false;
      DeleteCase1(n->parent);
    } else {
      DeleteCase4(n);
    }
  }
  void DeleteCase4(node_type n) {
    node_type s = Sibling(n);
    if (!n->parent->black && s->black && s->left->black && s->right->black) {
      s->black = false;
      n->parent->black = true;
    } else {
      DeleteCase5(n);
    }
  }
  void DeleteCase5(node_type n) {
    node_type s = Sibling(n);
    if (s->black) {
      if (n == n->parent->left && s->right->black && !s->left->black) {
        s->black = false;
        s->left->black = true;
        RotateRight(s);
      } else if (n == n->parent->right && s->left->black && !s->right->black) {
        s->black = false;
        s->right->black = true;
        RotateLeft(s);
      }
    }
    DeleteCase6(n);
  }
  void DeleteCase6(node_type n) {
    node_type s = Sibling(n);
    s->black = n->parent->black;
    n->parent->black = true;
    if (n == n->parent->left) {
      s->right->black = true;
      RotateLeft(n->parent);
    } else {
      s->left->black = true;
      RotateRight(n->parent);
    }
  }
  bool CompareKey(double key1, double key2) {
    bool answer = false;
    double diff = std::abs(key1 - key2);
    double epsilon = std::numeric_limits<key_type>::epsilon();
    key1 = std::abs(key1);
    key2 = std::abs(key2);
    double largest = (key1 > key2) ? key1 : key2;
    if (diff <= largest * epsilon) answer = true;
    return answer;
  }
  template <typename N>
  bool CompareKey(const N& key1, const N& key2) {
    return key1 == key2;
  }
  std::pair<node_type, node_type> FindNode(const key_type& key) {
    node_type ptr = root_;
    node_type parent_ptr = nullptr;
    while (!CompareKey(ptr->key, key) && !IsLeaf(ptr)) {
      parent_ptr = ptr;
      if (key < ptr->key)
        ptr = ptr->left;
      else
        ptr = ptr->right;
    }
    return {ptr, parent_ptr};
  }
  node_type FindMin(node_type ptr) {
    node_type min = ptr;
    while (min->left != nil_) {
      min = min->left;
    }
    return min;
  }
  bool IsLeaf(node_type n) { return n == nil_; }
  node_type get_begin() { return begin_; }
  node_type get_nil() { return nil_; }

 private:
  node_type root_;
  node_type begin_;
  node_type max_;
  node_type nil_;
  size_type size_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_H_