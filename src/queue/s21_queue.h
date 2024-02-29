#ifndef CPP2_S21_CONTAINERS_2_SRC_QUEUE_S21_QUEUE_H_
#define CPP2_S21_CONTAINERS_2_SRC_QUEUE_S21_QUEUE_H_

#include "../list/s21_list.h"

namespace s21 {

template <typename T, typename Container = list<T>>
class queue {
 public:
  using value_type = T;
  using reference = value_type&;
  using const_reference = const value_type&;
  using size_type = std::size_t;

  queue() : queue_(Container()) {}
  explicit queue(std::initializer_list<value_type> const& items)
      : queue_(Container(items)) {}
  queue(const queue& q) : queue_(Container(q.queue_)) {}
  queue(queue&& q) : queue_(Container()) { swap(q); }
  ~queue() { queue_.clear(); }
  queue& operator=(const queue& q) {
    queue_ = q.queue_;
    return *this;
  }
  queue& operator=(queue&& q) {
    queue_ = std::move(q.queue_);
    return *this;
  }
  reference front() { return queue_.front(); }
  reference back() { return queue_.back(); }
  const_reference front() const { return queue_.front(); }
  const_reference back() const { return queue_.back(); }
  bool empty() { return queue_.empty(); }
  size_type size() { return queue_.size(); }
  void push(const_reference value) { queue_.push_back(value); }
  void pop() { queue_.pop_front(); }
  void swap(queue& other) { queue_.swap(other.queue_); }
  template <typename... Args>
  void insert_many_back(Args&&... args) {
    queue_.insert_many_back(args...);
  }

 private:
  Container queue_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_QUEUE_S21_QUEUE_H_