#ifndef CPP2_S21_CONTAINERS_2_SRC_MAP_S21_MAP_ITERATOR_H_
#define CPP2_S21_CONTAINERS_2_SRC_MAP_S21_MAP_ITERATOR_H_

#include "../r_b_tree/s21_r_b_tree_node.h"

namespace s21 {

template <typename Key, typename T, bool IsConst>
class MapIterator {
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

  MapIterator() : node_(nullptr) {}
  explicit MapIterator(node_type other) : node_(other) {}
  reference operator*() { return {node_->key_, node_->value_}; }
  pointer operator->() { return pointer{{node_->key_, node_->value_}}; }
  MapIterator& operator++() {
    if (node_->right_->right_) {
      node_ = node_->right_;
      while (node_->left_->right_) node_ = node_->left_;
    } else {
      node_type nil = node_->right_;
      if (node_->parent_) {
        if (node_->parent_->left_ == node_) {
          node_ = node_->parent_;
        } else {
          bool exit = true;
          if (node_->parent_->right_ == node_) exit = false;
          while (!exit) {
            node_ = node_->parent_;
            if (node_->parent_) {
              if (node_->parent_->right_ != node_) exit = true;
            } else {
              exit = true;
            }
          }
          if (node_->parent_)
            node_ = node_->parent_;
          else
            node_ = nil;
        }
      } else {
        node_ = nil;
      }
    }
    return *this;
  }
  MapIterator& operator--() {
    if (node_->right_) {
      if (node_->left_->right_) {
        node_ = node_->left_;
        while (node_->right_->right_) node_ = node_->right_;
      } else {
        while (node_->parent_->left_ == node_) node_ = node_->parent_;
        node_ = node_->parent_;
      }
    } else {
      node_ = node_->parent_;
    }
    return *this;
  }
  MapIterator& operator++(int) {
    MapIterator& tmp(*this);
    operator++();
    return tmp;
  }
  MapIterator& operator--(int) {
    MapIterator& tmp(*this);
    operator--();
    return tmp;
  }
  bool operator==(const MapIterator& other) { return node_ == other.node_; }
  bool operator!=(const MapIterator& other) { return node_ != other.node_; }
  node_type get_node() { return node_; }

 private:
  node_type node_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_MAP_S21_MAP_ITERATOR_H_