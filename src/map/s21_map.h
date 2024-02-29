#ifndef CPP2_S21_CONTAINERS_2_SRC_MAP_S21_MAP_H_
#define CPP2_S21_CONTAINERS_2_SRC_MAP_S21_MAP_H_

#include <vector>

#include "../r_b_tree/s21_r_b_tree.h"
#include "../r_b_tree/s21_r_b_tree_iterator.h"

namespace s21 {

template <typename Key, typename T, typename Container = RbTree<Key, T>>
class map {
 public:
  using key_type = Key;
  using mapped_type = T;
  using value_type = std::pair<const key_type, mapped_type>;
  using reference = value_type&;
  using const_reference = const value_type&;
  using iterator = RBTreeIterator<key_type, mapped_type, false>;
  using const_iterator = RBTreeIterator<key_type, mapped_type, true>;
  using node_type = Node<key_type, mapped_type>*;
  using size_type = std::size_t;

  map() : map_(Container()) {}
  explicit map(std::initializer_list<value_type> const& items)
      : map_(Container(items)) {}
  map(const map& m) : map_(Container(m.map_)) {}
  map(map&& m) : map_(Container()) { swap(m); }
  ~map() { map_.clear(); }
  map& operator=(const map& m) {
    map_ = m.map_;
    return *this;
  }
  map& operator=(map&& m) {
    map_ = std::move(m.map_);
    return *this;
  }
  mapped_type& at(const key_type& key) {
    auto pair = map_.FindNode(key);
    if (map_.IsLeaf(pair.first)) {
      throw std::out_of_range("map::at");
    }
    return pair.first->value;
  }
  mapped_type& operator[](const Key& key) {
    auto pair = insert({key, mapped_type{}});
    return pair.first->second;
  }
  bool empty() { return map_.empty(); }
  size_type size() { return map_.size(); }
  size_type max_size() { return map_.max_size(); }
  iterator begin() noexcept { return map_.begin(); }
  const_iterator cbegin() const noexcept { return map_.cbegin(); }
  iterator end() noexcept { return map_.end(); }
  const_iterator cend() const noexcept { return map_.cend(); }
  void clear() { map_.clear(); }
  std::pair<iterator, bool> insert(const value_type& value) {
    auto pair = map_.FindNode(value.first);
    bool is_insert = false;
    if (map_.IsLeaf(pair.first)) is_insert = true;
    node_type node = map_.InsertToNode(pair, value.first, value.second);
    return {iterator(node), is_insert};
  }
  std::pair<iterator, bool> insert(const Key& key, const T& value) {
    return insert({key, value});
  }
  std::pair<iterator, bool> insert_or_assign(const Key& key, const T& value) {
    auto pair = map_.FindNode(key);
    bool is_insert = false;
    if (map_.IsLeaf(pair.first)) is_insert = true;
    node_type node = pair.first;
    if (is_insert)
      node = map_.InsertToNode(pair, key, value);
    else {
      node->value = value;
    }
    return {iterator(node), is_insert};
  }
  void erase(iterator pos) { map_.RemoveNode(pos.get_node()); }
  void swap(map& other) {
    if (this != &other) {
      map_.swap(other.map_);
    }
  }
  void merge(map& other) {
    auto it_other = other.begin();
    while (it_other != other.end()) {
      auto pair = map_.FindNode(it_other->first);
      if (map_.IsLeaf(pair.first)) {
        node_type untie_node = it_other.get_node();
        ++it_other;
        node_type tie_node = other.map_.UntieOneNode(untie_node);
        if (tie_node != untie_node) {
          --it_other;
        }
        map_.TieOneNode(pair.second, tie_node);
      } else {
        ++it_other;
      }
    }
  }

  bool contains(const Key& key) {
    auto pair = map_.FindNode(key);
    return !(map_.IsLeaf(pair.first));
  }

 private:
  Container map_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_MAP_S21_MAP_H_