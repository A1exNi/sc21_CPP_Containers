#ifndef CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_NODE_H_
#define CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_NODE_H_

namespace s21 {

template <typename Key, typename T>
struct Node {
  Node* parent;
  Node* left;
  Node* right;
  Key key;
  T value;
  bool black;
  Node(const Key& key = Key{}, const T& value = T{}, bool black = true)
      : parent(nullptr),
        left(nullptr),
        right(nullptr),
        key(key),
        value(value),
        black(black) {}
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_R_B_TREE_S21_RBTREE_NODE_H_