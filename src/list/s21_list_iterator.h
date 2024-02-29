#ifndef CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_ITERATOR_H_
#define CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_ITERATOR_H_

#include "s21_list_node.h"

namespace s21 {

template <typename T, bool IsConst>
class ListIterator {
 public:
  using iterator_category = std::bidirectional_iterator_tag;
  using difference_type = std::ptrdiff_t;
  using value_type = std::conditional_t<IsConst, const T, T>;
  using node_type = NodeList<T>*;
  using reference = value_type&;

  ListIterator() : node_(nullptr) {}
  explicit ListIterator(node_type other) : node_(other) {}

  reference operator*() { return node_->value_; }
  node_type get_node() { return node_; }
  ListIterator& operator++() {
    node_ = node_->next_;
    return *this;
  }
  ListIterator& operator--() {
    node_ = node_->prev_;
    return *this;
  }
  ListIterator& operator++(int) {
    ListIterator& tmp(*this);
    node_ = node_->next_;
    return tmp;
  }
  ListIterator& operator--(int) {
    ListIterator& tmp(*this);
    node_ = node_->prev_;
    return tmp;
  }
  bool operator==(const ListIterator& other) { return node_ == other.node_; }
  bool operator!=(const ListIterator& other) { return node_ != other.node_; }

 private:
  node_type node_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_ITERATOR_H_