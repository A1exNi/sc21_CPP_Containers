#ifndef CPP2_S21_CONTAINERS_2_SRC_MULTISET_S21_MULTISET_H_
#define CPP2_S21_CONTAINERS_2_SRC_MULTISET_S21_MULTISET_H_

#include <vector>

#include "../r_b_tree/s21_r_b_tree.h"
#include "s21_multiset_iterator.h"

namespace s21 {

template <typename Key, typename Container = RbTree<Key, Key>>
class multiset {
 public:
  using key_type = Key;
  using value_type = Key;
  using reference = value_type&;
  using const_reference = const value_type&;
  using iterator = MultisetIterator<key_type>;
  using const_iterator = MultisetIterator<key_type>;
  using node_type = Node<key_type, value_type>*;
  using size_type = std::size_t;

  multiset() : multiset_(Container()) {}
  explicit multiset(std::initializer_list<value_type> const& items)
      : multiset_() {
    for (auto&& value : items) insert(value);
  }
  multiset(const multiset& ms) : multiset_(Container(ms.multiset_)) {}
  multiset(multiset&& ms) : multiset_(Container()) { swap(ms); }
  ~multiset() { multiset_.clear(); }
  multiset& operator=(const multiset& ms) {
    multiset_ = ms.multiset_;
    return *this;
  }
  multiset& operator=(multiset&& ms) {
    multiset_ = std::move(ms.multiset_);
    return *this;
  }
  bool empty() { return multiset_.empty(); }
  size_type size() { return multiset_.size(); }
  size_type max_size() { return multiset_.max_size(); }
  iterator begin() noexcept { return iterator(multiset_.get_begin()); }
  iterator end() noexcept { return iterator(multiset_.get_nil()); }
  void clear() { multiset_.clear(); }
  iterator insert(const value_type& value) {
    node_type node = multiset_.Insert(value, value);
    return iterator(node);
  }
  void erase(iterator pos) { multiset_.RemoveNode(pos.get_node()); }
  void swap(multiset& other) {
    if (this != &other) {
      multiset_.swap(other.multiset_);
    }
  }
  void merge(multiset& other) {
    auto it_other = other.begin();
    while (it_other != other.end()) {
      auto pair = multiset_.FindNode(*it_other);
      node_type untie_node = it_other.get_node();
      ++it_other;
      node_type tie_node = other.multiset_.UntieOneNode(untie_node);
      if (multiset_.IsLeaf(pair.first)) {
        multiset_.TieOneNode(pair.second, tie_node);
      } else {
        multiset_.TieOneNode(pair.first, tie_node);
      }
    }
  }
  size_type count(const Key& key) {
    size_type count = 0;
    auto it = find(key);
    if (!multiset_.IsLeaf(it.get_node())) {
      while (*it == key) {
        ++count;
        ++it;
      }
    }
    return count;
  }
  iterator find(const Key& key) {
    auto pair = multiset_.FindNode(key);
    return iterator(pair.first);
  }
  bool contains(const Key& key) {
    auto pair = multiset_.FindNode(key);
    return !(multiset_.IsLeaf(pair.first));
  }
  std::pair<iterator, iterator> equal_range(const Key& key) {
    return {lower_bound(key), upper_bound(key)};
  }
  iterator lower_bound(const Key& key) {
    auto pair_node = multiset_.FindNode(key);
    iterator it;
    if (multiset_.IsLeaf(pair_node.first)) {
      it = GetIteratorOnKey(key, pair_node.second);
    } else {
      it = iterator(pair_node.first);
    }
    return it;
  }
  iterator upper_bound(const Key& key) {
    auto pair_node = multiset_.FindNode(key);
    iterator it;
    if (multiset_.IsLeaf(pair_node.first)) {
      it = GetIteratorOnKey(key, pair_node.second);
    } else {
      it = iterator(pair_node.first);
      while (*it == key && !multiset_.IsLeaf(it.get_node())) {
        ++it;
      }
    }
    return it;
  }
  template <typename... Args>
  std::vector<std::pair<iterator, bool>> insert_many(Args&&... args) {
    std::vector<std::pair<iterator, bool>> result;
    ((result.insert(result.end(), {insert(args), true})), ...);
    return result;
  }

 private:
  Container multiset_;
  iterator GetIteratorOnKey(const Key& key, node_type parent) {
    iterator it;
    if (key < *begin()) {
      it = begin();
    } else if (key > *(--end())) {
      it = end();
    } else if (key > parent->key) {
      it = iterator(parent);
      ++it;
    } else if (key < parent->key) {
      it = iterator(parent);
    }
    return it;
  }
};

}  // namespace s21

#endif  //  CPP2_S21_CONTAINERS_2_SRC_MULTISET_S21_MULTISET_H_