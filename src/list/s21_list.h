#ifndef CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_H_
#define CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_H_

#include "s21_list_iterator.h"
#include "s21_list_node.h"

namespace s21 {

template <typename T>
class list {
 public:
  using value_type = T;
  using reference = value_type&;
  using const_reference = const value_type&;
  using iterator = ListIterator<value_type, false>;
  using const_iterator = ListIterator<value_type, true>;
  using size_type = std::size_t;

  list()
      : front_(nullptr),
        back_(nullptr),
        end_(new NodeList<value_type>()),
        size_(0) {
    end_->next_ = end_;
    end_->prev_ = end_;
  }

  explicit list(size_type n) : list() {
    for (size_type i = 0; i < n; ++i) push_back(value_type{});
  }

  explicit list(std::initializer_list<value_type> const& items) : list() {
    for (auto&& value : items) push_back(value);
  }
  list(const list& l) : list() {
    for (auto&& value = l.cbegin(); value != l.cend(); ++value)
      push_back(*value);
  }

  list(list&& l) : list() { swap(l); }

  ~list() {
    clear();
    delete end_;
  }

  list& operator=(const list& l) {
    if (this != &l) {
      clear();
      for (auto&& value = l.cbegin(); value != l.cend(); ++value)
        push_back(*value);
    }
    return *this;
  }

  list& operator=(list&& l) noexcept {
    if (this != &l) swap(l);
    return *this;
  }

  reference front() { return front_ ? front_->value_ : end_->value_; }
  reference back() { return back_ ? back_->value_ : end_->value_; }
  const_reference front() const {
    return front_ ? front_->value_ : end_->value_;
  }
  const_reference back() const { return back_ ? back_->value_ : end_->value_; }
  iterator begin() noexcept {
    return front_ ? iterator(front_) : iterator(end_);
  }
  iterator end() noexcept { return iterator(end_); }
  const_iterator cbegin() const noexcept {
    return front_ ? const_iterator(front_) : const_iterator(end_);
  }
  const_iterator cend() const noexcept { return const_iterator(end_); }

  bool empty() const noexcept { return front_ == nullptr; }
  size_type size() const noexcept { return size_; }
  size_type max_size() const noexcept {
    return SIZE_MAX / (sizeof(NodeList<value_type>) * 2);
  }

  void clear() noexcept {
    while (!empty()) pop_back();
  }

  iterator insert(const_iterator pos, value_type value) {
    NodeList<value_type>* ptr = new NodeList<value_type>(value);
    if (empty()) {
      AddFirstNode(ptr);
    } else if (front_ == pos.get_node()) {
      AddFrontNode(ptr);
      end_->next_ = ptr;
    } else if (end_ == pos.get_node()) {
      AddBackNode(ptr);
      end_->prev_ = ptr;
    } else {
      AddMidleNode(ptr, pos);
    }
    ++size_;
    return iterator(ptr);
  }

  void erase(iterator pos) {
    NodeList<value_type>* ptr = pos.get_node();
    UntieOne(ptr);
    delete ptr;
  }

  void push_back(const_reference value) { insert(cend(), value); }
  void pop_back() { erase(iterator(back_)); }
  void push_front(const_reference value) { insert(cbegin(), value); }
  void pop_front() { erase(iterator(front_)); }
  void swap(list& other) noexcept {
    if (this != &other) {
      std::swap(front_, other.front_);
      std::swap(back_, other.back_);
      std::swap(end_, other.end_);
      std::swap(size_, other.size_);
    }
  }
  void merge(list& other) {
    if (this != &other) {
      const_iterator it_other = other.cbegin();
      for (const_iterator it_this = cbegin(); it_this != cend(); ++it_this) {
        while (other.front() < *it_this && it_other != other.cend()) {
          splice(it_this, other, it_other);
          it_other = other.cbegin();
        }
      }
      while (it_other != other.cend()) {
        splice(cend(), other, it_other);
        it_other = other.cbegin();
      }
    }
  }
  void splice(const_iterator pos, list& other) {
    if (empty()) {
      swap(other);
    } else if (front_ == pos.get_node()) {
      other.back_->next_ = front_;
      front_->prev_ = other.back_;
      front_ = other.front_;
      front_->prev_ = end_;
      end_->next_ = front_;
    } else if (end_ == pos.get_node()) {
      back_->next_ = other.front_;
      other.front_->prev_ = back_;
      end_->prev_ = other.back_;
      back_ = other.back_;
      back_->next_ = end_;
    } else {
      NodeList<value_type>* ptr = pos.get_node();
      ptr->prev_->next_ = other.front_;
      other.front_->prev_ = ptr->prev_;
      ptr->prev_ = other.back_;
      other.back_->next_ = ptr;
    }
    size_ += other.size_;
    other.NullingList();
  }
  void splice(const_iterator pos, list& other, const_iterator pos_other) {
    NodeList<value_type>* ptr_unt = pos_other.get_node();
    other.UntieOne(ptr_unt);
    if (empty()) {
      NodeList<value_type>* ptr = pos_other.get_node();
      AddFirstNode(ptr);
    } else if (front_ == pos.get_node()) {
      NodeList<value_type>* ptr = pos_other.get_node();
      AddFrontNode(ptr);
    } else if (end_ == pos.get_node()) {
      NodeList<value_type>* ptr = pos_other.get_node();
      AddBackNode(ptr);
    } else {
      NodeList<value_type>* ptr = pos_other.get_node();
      AddMidleNode(ptr, pos);
    }
    ++size_;
  }
  void reverse() {
    NodeList<value_type>* ptr = front_;
    while (ptr != end_) {
      std::swap(ptr->next_, ptr->prev_);
      ptr = ptr->prev_;
    }
    std::swap(end_->next_, end_->prev_);
    std::swap(front_, back_);
  }
  void unique() {
    if (!empty()) {
      value_type tmp_value = front_->value_;
      NodeList<value_type>* ptr = front_->next_;
      while (ptr != end_) {
        if (tmp_value != ptr->value_) {
          tmp_value = ptr->value_;
          ptr = ptr->next_;
        } else {
          ptr = ptr->next_;
          erase(iterator(ptr->prev_));
        }
      }
    }
  }
  void sort() {
    if (size_ > 1) {
      size_type half_size = size_ / 2;
      iterator half_it = begin();
      for (size_type i = 0; i < half_size - 1; ++i) ++half_it;
      list<value_type> half_list_l;
      NodeList<value_type>* half_node = half_it.get_node();
      half_list_l.front_ = front_;
      front_ = half_node->next_;
      half_list_l.front_->prev_ = half_list_l.end_;
      half_list_l.back_ = half_node;
      half_list_l.back_->next_ = half_list_l.end_;
      half_list_l.end_->next_ = front_;
      half_list_l.end_->prev_ = half_node;
      half_list_l.size_ = half_size;
      front_->prev_ = end_;
      end_->next_ = front_;
      size_ -= half_size;
      sort();
      half_list_l.sort();
      merge(half_list_l);
    }
  }
  template <typename... Args>
  iterator insert_many(const_iterator pos, Args&&... args) {
    return ((insert(pos, args)), ...);
  }
  template <typename... Args>
  void insert_many_back(Args&&... args) {
    insert_many(cend(), args...);
  }
  template <typename... Args>
  void insert_many_front(Args&&... args) {
    insert_many(cbegin(), args...);
  }

 private:
  void NullingList() {
    front_ = nullptr;
    back_ = nullptr;
    end_->prev_ = end_;
    end_->next_ = end_;
    size_ = 0;
  }
  void AddFirstNode(NodeList<value_type>* ptr) {
    ptr->next_ = end_;
    ptr->prev_ = end_;
    front_ = ptr;
    back_ = ptr;
    end_->next_ = ptr;
    end_->prev_ = ptr;
  }
  void AddFrontNode(NodeList<value_type>* ptr) {
    front_->prev_ = ptr;
    ptr->next_ = front_;
    ptr->prev_ = end_;
    front_ = ptr;
  }
  void AddBackNode(NodeList<value_type>* ptr) {
    back_->next_ = ptr;
    ptr->prev_ = back_;
    ptr->next_ = end_;
    back_ = ptr;
  }
  void AddMidleNode(NodeList<value_type>* ptr, const_iterator pos) {
    ptr->next_ = pos.get_node();
    ptr->prev_ = ptr->next_->prev_;
    ptr->prev_->next_ = ptr;
    ptr->next_->prev_ = ptr;
  }
  void UntieOne(NodeList<value_type>* ptr) {
    if (size() == 1) {
      NullingList();
    } else if (front_ == ptr) {
      front_ = front_->next_;
      front_->prev_ = end_;
      end_->next_ = front_;
      --size_;
    } else if (back_ == ptr) {
      back_ = back_->prev_;
      back_->next_ = end_;
      end_->prev_ = back_;
      --size_;
    } else {
      ptr->prev_->next_ = ptr->next_;
      ptr->next_->prev_ = ptr->prev_;
      --size_;
    }
  }
  NodeList<value_type>* front_;
  NodeList<value_type>* back_;
  NodeList<value_type>* end_;
  size_type size_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_LIST_S21_LIST_H_
