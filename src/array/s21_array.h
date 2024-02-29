#ifndef CPP2_S21_CONTAINERS_2_SRC_ARRAY_S21_ARRAY_H_
#define CPP2_S21_CONTAINERS_2_SRC_ARRAY_S21_ARRAY_H_

namespace s21 {

template <typename T, size_t A>
class array {
 public:
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using iterator = T *;
  using const_iterator = const T *;
  using size_type = std::size_t;

  array() {}

  array(std::initializer_list<value_type> const &items) {
    if (items.size() > A) {
      throw std::out_of_range("Too many initializer values");
    }
    std::copy(items.begin(), items.end(), arr_);
  }

  array(const array &a) { std::copy(a.cbegin(), a.cend(), begin()); }

  array(array &&a) { std::move(a.begin(), a.end(), begin()); }

  ~array() {}

  array &operator=(const array &a) {
    if (this != &a) {
      std::copy(a.cbegin(), a.cend(), begin());
    }
    return *this;
  }

  array &operator=(array &&a) {
    if (this != &a) {
      std::move(a.begin(), a.end(), begin());
    }
    return *this;
  }

  reference at(size_t pos) {
    if (!(pos < size())) {
      throw std::out_of_range("Index is not within the range of the array");
    }
    return arr_[pos];
  }

  reference operator[](size_t pos) {
    if (!(pos < size())) {
      throw std::out_of_range("Index is not within the range of the array");
    }
    return arr_[pos];
  }

  const_reference front() { return arr_[0]; }

  const_reference back() { return arr_[A - 1]; }

  iterator data() { return begin(); }

  iterator begin() { return arr_; }

  const_iterator cbegin() const { return arr_; }

  iterator end() { return &arr_[A]; }

  const_iterator cend() const { return &arr_[A]; }

  bool empty() { return A == 0; }

  size_type size() const { return A; }

  size_type max_size() { return size(); }

  void swap(array &other) { std::swap(*this, other); }

  void fill(const_reference value) { std::fill(begin(), end(), value); }

 private:
  value_type arr_[A];
};

}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_ARRAY_S21_ARRAY_H_