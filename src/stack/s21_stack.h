#ifndef CPP2_S21_CONTAINERS_2_SRC_STACK_S21_STACK_H_
#define CPP2_S21_CONTAINERS_2_SRC_STACK_S21_STACK_H_

namespace s21 {

template <typename T, typename Container = list<T>>
class stack {
 public:
  using value_type = T;
  using reference = value_type &;
  using const_reference = const value_type &;
  using size_type = std::size_t;

  stack() : stack_(Container()) {}
  explicit stack(std::initializer_list<value_type> const &items)
      : stack_(Container(items)) {}
  stack(const stack &s) : stack_(Container(s.stack_)) {}
  stack(stack &&s) : stack_(Container()) { swap(s); }
  ~stack() { stack_.clear(); }

  stack &operator=(const stack &s) {
    stack_ = s.stack_;
    return *this;
  }
  stack &operator=(stack &&s) {
    if (this != &s) {
      stack_ = (std::move(s.stack_));
    }
    return *this;
  }

  void push(const_reference value) { stack_.push_back(value); }
  void pop() { stack_.pop_back(); }
  void swap(stack &other) { stack_.swap(other.stack_); }
  const_reference top() const { return stack_.back(); }
  reference top() { return stack_.back(); }
  bool empty() const { return stack_.empty(); }
  size_type size() const { return stack_.size(); };
  template <typename... Args>
  void insert_many_front(Args &&...args) {
    stack_.insert_many_front(args...);
  }

 private:
  Container stack_;
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_STACK_S21_STACK_H_
