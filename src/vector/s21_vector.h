#ifndef CPP2_S21_CONTAINERS_2_SRC_VECTOR_S21_VECTOR_H_
#define CPP2_S21_CONTAINERS_2_SRC_VECTOR_S21_VECTOR_H_
#include <cstddef>
#include <iostream>
#include <stdexcept>

namespace s21 {
template <typename T, typename Allocator = std::allocator<T>>
class vector {
 public:
  // member type definition
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using size_type = size_t;
  using iterator = T *;
  using const_iterator = const T *;
  using traits = std::allocator_traits<Allocator>;

  // default constructor
  vector() : arr_(nullptr), capacity_(0), size_(0) {}

  // parameterized constructor
  explicit vector(size_type n)
      : arr_(traits::allocate(allocator_, n)), capacity_(n), size_(n) {
    for (size_type i = 0; i < size_; ++i) {
      traits::construct(allocator_, arr_ + i);
    }
  }

  // initializer list constructor
  explicit vector(std::initializer_list<value_type> const &items)
      : capacity_(items.size()), size_(items.size()) {
    arr_ = traits::allocate(allocator_, size_);
    size_type i = 0;
    for (auto iter = items.begin(); iter != items.end(); ++iter, ++i) {
      traits::construct(allocator_, arr_ + i, *iter);
    }
  }

  // copy constructor
  vector(const vector &v)
      : capacity_(v.capacity_), size_(v.size_), allocator_(v.allocator_) {
    arr_ = traits::allocate(allocator_, size_);
    for (size_type i = 0; i < size_; ++i) {
      traits::construct(allocator_, arr_ + i, v.arr_[i]);
    }
  }

  // copy assignment
  vector &operator=(const vector &v) {
    if (this != &v) {
      clear();
      traits::deallocate(allocator_, arr_, capacity_);
      arr_ = traits::allocate(allocator_, v.size_);
      for (size_type i = 0; i < size_; ++i) {
        traits::construct(allocator_, arr_ + i, v.arr_[i]);
      }
      capacity_ = v.size_;
      size_ = v.size_;
    }
    return *this;
  }

  // move constructor
  vector(vector &&other)
      : arr_(other.arr_), capacity_(other.capacity_), size_(other.size_) {
    other.arr_ = nullptr;
    other.capacity_ = 0;
    other.size_ = 0;
  }

  // move assignment
  vector &operator=(vector &&v) noexcept {
    if (this != &v) {
      clear();
      traits::deallocate(allocator_, arr_, capacity_);
      arr_ = v.arr_;
      capacity_ = v.capacity_;
      size_ = v.size_;
      v.arr_ = nullptr;
    }
    return *this;
  }

  // destructor
  ~vector() {
    clear();
    traits::deallocate(allocator_, arr_, capacity_);
  }

  bool empty() { return begin() == end(); }

  size_type size() { return std::distance(begin(), end()); }

  size_type max_size() { return SIZE_MAX / sizeof(value_type); }

  void reserve(size_type size) {
    if (size <= capacity_) return;
    T *new_arr = traits::allocate(allocator_, size);
    for (size_type i = 0; i < size_; ++i) {
      traits::construct(allocator_, new_arr + i, std::move(arr_[i]));
      traits::destroy(allocator_, arr_ + i);
    }
    traits::deallocate(allocator_, arr_, capacity_);
    capacity_ = size;
    arr_ = new_arr;
  }

  size_type capacity() { return capacity_; }

  reference operator[](size_type pos) { return arr_[pos]; }

  reference at(size_type pos) {
    if (pos >= size_) {
      throw std::out_of_range("Input index is out of range");
    }
    return arr_[pos];
  }

  void push_back(const_reference value) {
    if (size_ >= capacity_) {
      reserve(size_ == 0 ? 1 : size_ * 2);
    }
    traits::construct(allocator_, arr_ + size_, value);
    ++size_;
  }

  void pop_back() {
    if (size_ > 0) {
      --size_;
      traits::destroy(allocator_, arr_ + size_);
    }
  }

  void clear() {
    for (size_type i = 0; i < size_; ++i) {
      traits::destroy(allocator_, arr_ + i);
    }
    size_ = 0;
  }

  void swap(vector &other) {
    std::swap(arr_, other.arr_);
    std::swap(capacity_, other.capacity_);
    std::swap(size_, other.size_);
  }

  iterator insert(const_iterator pos, const_reference value) {
    size_type index = pos - arr_;
    if (size_ >= capacity_) {
      reserve(size_ == 0 ? 1 : size_ * 2);
    }
    traits::construct(allocator_, arr_ + size_, std::move(arr_[size_ - 1]));
    for (size_type i = size_; i > index; --i) {
      traits::construct(allocator_, arr_ + i, std::move(arr_[i - 1]));
      traits::destroy(allocator_, arr_ + i - 1);
    }
    traits::construct(allocator_, arr_ + index, value);
    ++size_;
    return arr_ + index;
  }

  void erase(const_iterator pos) {
    size_type index = pos - arr_;
    traits::destroy(allocator_, arr_ + index);
    for (size_type i = index; i < size_ - 1; ++i) {
      traits::construct(allocator_, arr_ + i, std::move(arr_[i + 1]));
    }
    --size_;
  }

  void shrink_to_fit() {
    if (size_ < capacity_) {
      value_type *new_arr = traits::allocate(allocator_, size_);
      for (size_type i = 0; i < size_; ++i) {
        traits::construct(allocator_, new_arr + i, std::move(arr_[i]));
        traits::destroy(allocator_, arr_ + i);
      }
      traits::deallocate(allocator_, arr_, capacity_);
      arr_ = new_arr;
      capacity_ = size_;
    }
  }

  const_reference front() { return arr_[0]; }

  const_reference back() { return arr_[size_ - 1]; }

  iterator begin() { return arr_; }

  iterator end() { return arr_ + size_; }

  const_iterator cbegin() const { return arr_; }

  const_iterator cend() const { return arr_ + size_; }

  template <typename... Args>
  iterator insert_many(const_iterator pos, Args &&...args) {
    size_type index = pos - arr_;
    size_type args_size = sizeof...(args);
    if (size_ + args_size > capacity_) {
      reserve(size_ + args_size);
    }

    for (int i = size_ - 1; i >= (int)index; --i) {
      traits::construct(allocator_, arr_ + i + args_size, std::move(arr_[i]));
    }

    size_type i = 0;
    ((traits::construct(allocator_, arr_ + index + i++,
                        std::forward<Args>(args))),
     ...);
    size_ += args_size;
    return arr_ + index;
  }

  template <typename... Args>
  void insert_many_back(Args &&...args) {
    insert_many(end(), std::forward<Args>(args)...);
  }

  T *data() { return arr_; }

 private:
  value_type *arr_;
  size_type capacity_;
  size_type size_;
  Allocator allocator_;
};
}  // namespace s21

#endif  // CPP2_S21_CONTAINERS_2_SRC_VECTOR_S21_VECTOR_H_