#ifndef CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_ITERATOR_H_
#define CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_ITERATOR_H_

#include "s21_r_b_tree_node.h"

namespace s21 {

template <typename Key, typename T, bool IsConst>
class RBTreeIterator {
 public:
  using iterator_category = std::bidirectional_iterator_tag;
  using difference_type = std::ptrdiff_t;
  using value_type = std::conditional_t<IsConst, std::pair<const Key, const T>,
                                        std::pair<const Key, T>>;
  using reference = std::conditional_t<IsConst, std::pair<const Key&, const T&>,
                                       std::pair<const Key&, T&>>;
  using node_type = Node<Key, T>*;
  template <typename Reference>
  struct arrow_proxy {
    Reference R;
    Reference* operator->() { return &R; }
  };
  using pointer = arrow_proxy<reference>;

  RBTreeIterator() : node_(nullptr) {}
  explicit RBTreeIterator(node_type other) : node_(other) {}

  reference operator*() { return {node_->key, node_->value}; }
  pointer operator->() { return pointer{{node_->key, node_->value}}; }
  RBTreeIterator& operator++() {
    if (node_->right->right) {
      node_ = node_->right;
      while (node_->left->right) node_ = node_->left;
    } else {
      node_type nil = node_->right;
      if (node_->parent) {
        if (node_->parent->left == node_) {
          node_ = node_->parent;
        } else {
          node_ = NextNodeToRightUp(node_);
        }
      } else {
        node_ = nil;
      }
    }
    return *this;
  }
  RBTreeIterator& operator--() {
    if (node_->right) {
      if (node_->left->right) {
        node_ = node_->left;
        while (node_->right->right) node_ = node_->right;
      } else {
        while (node_->parent->left == node_) node_ = node_->parent;
        node_ = node_->parent;
      }
    } else {
      node_ = node_->parent;
    }
    return *this;
  }
  RBTreeIterator& operator++(int) {
    RBTreeIterator& tmp(*this);
    operator++();
    return tmp;
  }
  RBTreeIterator& operator--(int) {
    RBTreeIterator& tmp(*this);
    operator--();
    return tmp;
  }
  bool operator==(const RBTreeIterator& other) { return node_ == other.node_; }
  bool operator!=(const RBTreeIterator& other) { return node_ != other.node_; }
  node_type get_node() { return node_; }

 private:
  node_type node_;
  node_type NextNodeToRightUp(node_type node) {
    node_type nil = node->right;
    bool exit = false;
    while (!exit) {
      node = node->parent;
      if (node->parent) {
        if (node->parent->right != node) {
          exit = true;
          node = node->parent;
        }
      } else {
        exit = true;
        node = nil;
      }
    }
    return node;
  }
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_ITERATOR_H_