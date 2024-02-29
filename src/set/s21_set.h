#ifndef CPP2_S21_CONTAINERS_2_SRC_SET_S21_SET_H_
#define CPP2_S21_CONTAINERS_2_SRC_SET_S21_SET_H_

#include <vector>

#include "../r_b_tree/s21_r_b_tree.h"
#include "s21_set_iterator.h"

namespace s21 {

template <typename Key, typename Container = RbTree<Key, Key>>
class set {
 public:
  using key_type = Key;
  using value_type = Key;
  using reference = value_type&;
  using const_reference = const value_type&;
  using iterator = SetIterator<key_type>;
  using const_iterator = SetIterator<key_type>;
  using node_type = Node<key_type, value_type>*;
  using size_type = std::size_t;

  set() : set_(Container()) {}
  explicit set(std::initializer_list<value_type> const& items) : set_() {
    for (auto&& value : items) insert(value);
  }
  set(const set& s) : set_(Container(s.set_)) {}
  set(set&& s) : set_(Container()) { swap(s); }
  ~set() { set_.clear(); }
  set& operator=(const set& s) {
    set_ = s.set_;
    return *this;
  }
  set& operator=(set&& s) {
    set_ = std::move(s.set_);
    return *this;
  }
  bool empty() { return set_.empty(); }
  size_type size() { return set_.size(); }
  size_type max_size() { return set_.max_size(); }
  iterator begin() noexcept { return iterator(set_.get_begin()); }
  iterator end() noexcept { return iterator(set_.get_nil()); }
  void clear() { set_.clear(); }
  std::pair<iterator, bool> insert(const value_type& value) {
    auto pair = set_.FindNode(value);
    bool is_insert = false;
    if (set_.IsLeaf(pair.first)) is_insert = true;
    node_type node = set_.InsertToNode(pair, value, value);
    return {iterator(node), is_insert};
  }
  void erase(iterator pos) { set_.RemoveNode(pos.get_node()); }
  void swap(set& other) {
    if (this != &other) {
      set_.swap(other.set_);
    }
  }
  void merge(set& other) {
    auto it_other = other.begin();
    while (it_other != other.end()) {
      auto pair = set_.FindNode(*it_other);
      if (set_.IsLeaf(pair.first)) {
        node_type untie_node = it_other.get_node();
        ++it_other;
        node_type tie_node = other.set_.UntieOneNode(untie_node);
        if (tie_node != untie_node) {
          --it_other;
        }
        set_.TieOneNode(pair.second, tie_node);
      } else {
        ++it_other;
      }
    }
  }
  iterator find(const Key& key) {
    auto pair = set_.FindNode(key);
    return iterator(pair.first);
  }
  bool contains(const Key& key) {
    auto pair = set_.FindNode(key);
    return !(set_.IsLeaf(pair.first));
  }
  template <typename... Args>
  std::vector<std::pair<iterator, bool>> insert_many(Args&&... args) {
    std::vector<std::pair<iterator, bool>> result;
    ((result.insert(result.end(), insert(args))), ...);
    return result;
  }

 private:
  Container set_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_SET_S21_SET_H_