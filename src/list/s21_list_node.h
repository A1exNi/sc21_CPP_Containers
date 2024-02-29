#ifndef CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_NODE_H_
#define CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_NODE_H_

namespace s21 {

template <typename T>
struct NodeList {
  NodeList* next_;
  NodeList* prev_;
  T value_;
  NodeList(const T& value = T{})
      : next_(nullptr), prev_(nullptr), value_(value){};
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_NODE_H_