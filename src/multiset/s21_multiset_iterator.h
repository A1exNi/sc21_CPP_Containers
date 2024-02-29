#ifndef CPP2_S21_CONTAINERS_2_SRC_MULTISET_S21_MULTISET_ITERATOR_H_
#define CPP2_S21_CONTAINERS_2_SRC_MULTISET_S21_MULTISET_ITERATOR_H_

#include "../r_b_tree/s21_r_b_tree_node.h"

namespace s21 {

template <typename Key>
class MultisetIterator {
 public:
  using iterator_category = std::bidirectional_iterator_tag;
  using difference_type = std::ptrdiff_t;
  using value_type = const Key;
  using reference = value_type&;
  using node_type = Node<Key, Key>*;

  MultisetIterator() : node_(nullptr) {}
  explicit MultisetIterator(node_type other) : node_(other) {}
  reference operator*() { return node_->key; }
  MultisetIterator& operator++() {
    if (node_->right->right) {
      node_ = node_->right;
      while (node_->left->right) node_ = node_->left;
    } else {
      node_type nil = node_->right;
      if (node_->parent) {
        if (node_->parent->left == node_) {
          node_ = node_->parent;
        } else {
          bool exit = true;
          if (node_->parent->right == node_) exit = false;
          while (!exit) {
            node_ = node_->parent;
            if (node_->parent) {
              if (node_->parent->right != node_) exit = true;
            } else {
              exit = true;
            }
          }
          if (node_->parent)
            node_ = node_->parent;
          else {
            node_ = nil;
          }
        }
      } else {
        node_ = nil;
      }
    }
    return *this;
  }
  MultisetIterator& operator--() {
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
  MultisetIterator& operator++(int) {
    MultisetIterator& tmp(*this);
    operator++();
    return tmp;
  }
  MultisetIterator& operator--(int) {
    MultisetIterator& tmp(*this);
    operator--();
    return tmp;
  }
  bool operator==(const MultisetIterator& other) {
    return node_ == other.node_;
  }
  bool operator!=(const MultisetIterator& other) {
    return node_ != other.node_;
  }
  node_type get_node() { return node_; }

 private:
  node_type node_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_MULTISET_S21_MULTISET_ITERATOR_H_