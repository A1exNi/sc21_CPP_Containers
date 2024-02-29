#include <gtest/gtest.h>

#include <stack>

#include "../s21_containers.h"

namespace s21 {

template <typename T>
void CompareStacks(const s21::stack<T> &s21_stack,
                   const std::stack<T> &std_stack) {
  ASSERT_EQ(s21_stack.size(), std_stack.size());
  ASSERT_EQ(s21_stack.empty(), std_stack.empty());
  int std_stack_size = std_stack.size();
  s21::stack<T> temp_s21_stack = s21_stack;
  std::stack<T> temp_std_stack = std_stack;
  if (std_stack_size > 0) {
    while (std_stack_size > 0) {
      ASSERT_EQ(temp_s21_stack.top(), temp_std_stack.top());
      temp_s21_stack.pop();
      temp_std_stack.pop();
      std_stack_size--;
    }
  }
}

TEST(s21_stack_test, Default) {
  stack<int> s21_int_stack;
  std::stack<int> std_int_stack;
  CompareStacks(s21_int_stack, std_int_stack);

  s21::stack<double> s21_double_stack;
  std::stack<double> std_double_stack;
  CompareStacks(s21_double_stack, std_double_stack);

  s21::stack<std::string> s21_string_stack;
  std::stack<std::string> std_str_stack;
  CompareStacks(s21_string_stack, std_str_stack);
}

TEST(s21_stack_test, InitializerList) {
  stack<int> s21_int_stack({-81, 2, 0, 4335});
  std::stack<int> std_int_stack({-81, 2, 0, 4335});
  CompareStacks(s21_int_stack, std_int_stack);

  stack<double> s21_double_stack({-0.81, 20, 0, 4.0235});
  std::stack<double> std_double_stack({-0.81, 20, 0, 4.0235});
  CompareStacks(s21_double_stack, std_double_stack);

  stack<std::string> s21_str_stack(
      {"Hello, World", "Your name", "Your nickname"});
  std::stack<std::string> std_str_stack(
      {"Hello, World", "Your name", "Your nickname"});
  CompareStacks(s21_str_stack, std_str_stack);

  stack<char> s21_char_stack({'H', 'e', 'l', 'l', 'o'});
  std::stack<char> std_char_stack({'H', 'e', 'l', 'l', 'o'});
  CompareStacks(s21_char_stack, std_char_stack);
}

TEST(s21_stack_test, CopyAndMoveInt) {
  stack<int> s21_int_stack({-81, 2, 0, 4335});
  std::stack<int> std_int_stack({-81, 2, 0, 4335});

  stack<int> s21_copy_int = s21_int_stack;
  std::stack<int> std_copy_int = std_int_stack;
  CompareStacks(s21_copy_int, std_copy_int);

  stack<int> s21_copy2_int;
  s21_copy2_int = s21_int_stack;
  std::stack<int> std_copy2_int;
  std_copy2_int = std_int_stack;
  CompareStacks(s21_copy2_int, std_copy2_int);

  stack<int> s21_move_int = std::move(s21_int_stack);
  std::stack<int> std_move_int = std::move(std_int_stack);
  CompareStacks(s21_move_int, std_move_int);
}

TEST(s21_stack_test, CopyAndMoveDouble) {
  stack<double> s21_double_stack({-0.81, 20, 0, 4.0235});
  std::stack<double> std_double_stack({-0.81, 20, 0, 4.0235});

  stack<double> s21_copy_double = s21_double_stack;
  std::stack<double> std_copy_double = std_double_stack;
  CompareStacks(s21_copy_double, std_copy_double);

  stack<double> s21_copy2_double;
  s21_copy2_double = s21_double_stack;
  std::stack<double> std_copy2_double;
  std_copy2_double = std_double_stack;
  CompareStacks(s21_copy2_double, std_copy2_double);

  stack<double> s21_move_double = std::move(s21_double_stack);
  std::stack<double> std_move_double = std::move(std_double_stack);
  CompareStacks(s21_move_double, std_move_double);
}

TEST(s21_stack_test, CopyAndMoveString) {
  stack<std::string> s21_str_stack(
      {"Hello, World", "Your name", "Your nickname"});
  std::stack<std::string> std_str_stack(
      {"Hello, World", "Your name", "Your nickname"});

  stack<std::string> s21_copy_str = s21_str_stack;
  std::stack<std::string> std_copy_str = std_str_stack;
  CompareStacks(s21_copy_str, std_copy_str);

  stack<std::string> s21_copy2_str;
  s21_copy2_str = s21_str_stack;
  std::stack<std::string> std_copy2_str;
  std_copy2_str = std_str_stack;
  CompareStacks(s21_copy2_str, std_copy2_str);

  stack<std::string> s21_move_str = std::move(s21_str_stack);
  std::stack<std::string> std_move_str = std::move(std_str_stack);
  CompareStacks(s21_move_str, std_move_str);
}

TEST(s21_stack_test, CopyAndMoveChar) {
  stack<char> s21_char_stack({'H', 'e', 'l', 'l', 'o'});
  std::stack<char> std_char_stack({'H', 'e', 'l', 'l', 'o'});

  stack<char> s21_copy_char = s21_char_stack;
  std::stack<char> std_copy_char = std_char_stack;
  CompareStacks(s21_copy_char, std_copy_char);

  stack<char> s21_copy2_char;
  s21_copy2_char = s21_char_stack;
  std::stack<char> std_copy2_char;
  std_copy2_char = std_char_stack;
  CompareStacks(s21_copy2_char, std_copy2_char);

  stack<char> s21_move_char = std::move(s21_char_stack);
  std::stack<char> std_move_char = std::move(std_char_stack);
  CompareStacks(s21_move_char, std_move_char);
}

TEST(s21_stack_test, ValueTypes) {
  using s21_int_stack = s21::stack<int>;
  using double_stack = s21::stack<double>;
  using string_stack = s21::stack<std::string>;

  static_assert(std::is_same<s21_int_stack::value_type, int>::value,
                "Incorrect value_type for s21_int_stack");
  static_assert(std::is_same<double_stack::value_type, double>::value,
                "Incorrect value_type for double_stack");
  static_assert(std::is_same<string_stack::value_type, std::string>::value,
                "Incorrect value_type for string_stack");
}

TEST(s21_stack_test, ReferenceTypes) {
  using s21_int_stack = s21::stack<int>;
  using double_stack = s21::stack<double>;
  using string_stack = s21::stack<std::string>;

  static_assert(std::is_same<s21_int_stack::reference, int &>::value,
                "Incorrect reference for s21_int_stack");
  static_assert(
      std::is_same<s21_int_stack::const_reference, const int &>::value,
      "Incorrect const_reference for s21_int_stack");

  static_assert(std::is_same<double_stack::reference, double &>::value,
                "Incorrect reference for double_stack");
  static_assert(
      std::is_same<double_stack::const_reference, const double &>::value,
      "Incorrect const_reference for double_stack");

  static_assert(std::is_same<string_stack::reference, std::string &>::value,
                "Incorrect reference for string_stack");
  static_assert(
      std::is_same<string_stack::const_reference, const std::string &>::value,
      "Incorrect const_reference for string_stack");
}

TEST(s21_stack_test, SizeType) {
  using s21_int_stack = s21::stack<int>;
  using double_stack = s21::stack<double>;
  using string_stack = s21::stack<std::string>;

  static_assert(std::is_same<s21_int_stack::size_type, size_t>::value,
                "Incorrect size_type for s21_int_stack");
  static_assert(std::is_same<double_stack::size_type, size_t>::value,
                "Incorrect size_type for double_stack");
  static_assert(std::is_same<string_stack::size_type, size_t>::value,
                "Incorrect size_type for string_stack");
}

TEST(s21_stack_test, ModifyTopElementThroughReference) {
  stack<int> s21_int_stack({-81, 2, 0, 4335});
  stack<double> s21_double_stack({-0.81, 20, 0, 4.0235});
  stack<std::string> s21_str_stack(
      {"Hello, World", "Your name", "Your nickname"});
  stack<char> s21_char_stack({'H', 'e', 'l', 'l', 'o'});

  stack<int>::reference top_element_int = s21_int_stack.top();
  top_element_int = 30;
  ASSERT_EQ(s21_int_stack.top(), 30);

  stack<double>::reference top_element_double = s21_double_stack.top();
  top_element_double = -0.003;
  EXPECT_DOUBLE_EQ(s21_double_stack.top(), -0.003);

  stack<char>::reference top_element_char = s21_char_stack.top();
  top_element_char = 'W';
  EXPECT_EQ(s21_char_stack.top(), 'W');

  stack<std::string>::reference top_element_str = s21_str_stack.top();
  top_element_str = "New Value";
  EXPECT_EQ(s21_str_stack.top(), "New Value");
}

TEST(s21_stack_test, ConstTopElement) {
  stack<int> s21_int_stack({-81, 2, 0, 4335});
  std::stack<int> std_int_stack({-81, 2, 0, 4335});

  stack<double> s21_double_stack({-0.81, 20, 0, 4.0235});
  std::stack<double> std_double_stack({-0.81, 20, 0, 4.0235});

  stack<std::string> s21_str_stack(
      {"Hello, World", "Your name", "Your nickname"});
  std::stack<std::string> std_str_stack(
      {"Hello, World", "Your name", "Your nickname"});

  stack<char> s21_char_stack({'H', 'e', 'l', 'l', 'o'});
  std::stack<char> std_char_stack({'H', 'e', 'l', 'l', 'o'});

  const stack<int>::const_reference s21_int_top_element = s21_int_stack.top();
  const std::stack<int>::const_reference std_int_top_element =
      std_int_stack.top();

  const stack<double>::const_reference s21_double_top_element =
      s21_double_stack.top();
  const std::stack<double>::const_reference std_double_top_element =
      std_double_stack.top();

  const stack<std::string>::const_reference s21_str_top_element =
      s21_str_stack.top();
  const std::stack<std::string>::const_reference std_str_top_element =
      std_str_stack.top();

  const stack<char>::const_reference s21_char_top_element =
      s21_char_stack.top();
  const std::stack<char>::const_reference std_char_top_element =
      std_char_stack.top();

  ASSERT_EQ(s21_int_top_element, std_int_top_element);
  ASSERT_EQ(s21_double_top_element, std_double_top_element);
  ASSERT_EQ(s21_str_top_element, std_str_top_element);
  ASSERT_EQ(s21_char_top_element, std_char_top_element);
}

TEST(s21_stack_test, Top) {
  s21::stack<int> stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  int value = stack.top();
  EXPECT_EQ(value, 3);
}

TEST(s21_stack_test, SizeIntValue) {
  stack<int> s21_int_stack;
  ASSERT_EQ(s21_int_stack.size(), 0);

  s21_int_stack.push(1);
  ASSERT_EQ(s21_int_stack.size(), 1);

  s21_int_stack.push(2);
  s21_int_stack.push(3);
  ASSERT_EQ(s21_int_stack.size(), 3);

  s21_int_stack.pop();
  ASSERT_EQ(s21_int_stack.size(), 2);

  s21_int_stack.pop();
  s21_int_stack.pop();
  ASSERT_EQ(s21_int_stack.size(), 0);
}

TEST(s21_stack_test, SizeStringValue) {
  stack<std::string> str_stack;
  ASSERT_EQ(str_stack.size(), 0);

  str_stack.push("Hello");
  ASSERT_EQ(str_stack.size(), 1);

  str_stack.push("World");
  str_stack.push("!");

  ASSERT_EQ(str_stack.size(), 3);

  str_stack.pop();
  ASSERT_EQ(str_stack.size(), 2);

  str_stack.pop();
  str_stack.pop();
  ASSERT_EQ(str_stack.size(), 0);
}

TEST(s21_stack_test, SwapIntValue) {
  stack<int> s21_int_stack1({1, 2, 3, 4, 5});
  stack<int> s21_int_stack2({6, 7, 8, 9, 10});

  std::stack<int> control_stack1({1, 2, 3, 4, 5});
  std::stack<int> control_stack2({6, 7, 8, 9, 10});

  s21_int_stack1.swap(s21_int_stack2);

  CompareStacks(s21_int_stack1, control_stack2);
  CompareStacks(s21_int_stack2, control_stack1);
}

TEST(s21_stack_test, SwapStringValue) {
  stack<std::string> s21_string_stack1({"one", "two", "three", "four", "five"});
  stack<std::string> s21_string_stack2(
      {"six", "seven", "eight", "nine", "ten"});

  std::stack<std::string> control_stack1(
      {"one", "two", "three", "four", "five"});
  std::stack<std::string> control_stack2(
      {"six", "seven", "eight", "nine", "ten"});

  s21_string_stack1.swap(s21_string_stack2);

  CompareStacks(s21_string_stack1, control_stack2);
  CompareStacks(s21_string_stack2, control_stack1);
}

TEST(s21_stack_test, InsertManyNumbers) {
  stack<int> s21_int_stack({1});
  std::stack<int> std_int({6, 8, 1, 2, -3, 4, -5, 1});
  s21_int_stack.insert_many_front(6, 8, 1, 2, -3, 4, -5);

  stack<float> s21_float_stack({1});
  std::stack<float> std_float({6.7, 8.46, 1.6, 2.7, 3.8, 4.9, -5.91, 1});
  s21_float_stack.insert_many_front(6.7, 8.46, 1.6, 2.7, 3.8, 4.9, -5.91);

  stack<double> s21_double_stack({1});
  std::stack<double> std_double({6.7, -8.46, 1.6, 2.7, 3.8, 4.9, 5.91, 1});
  s21_double_stack.insert_many_front(6.7, -8.46, 1.6, 2.7, 3.8, 4.9, 5.91);

  CompareStacks(s21_int_stack, std_int);
  CompareStacks(s21_float_stack, std_float);
  CompareStacks(s21_double_stack, std_double);
}

TEST(s21_stack_test, InsertManySymbols) {
  stack<char> s21_char_stack({'o'});
  std::stack<char> std_char({'H', 'e', 'l', 'l', 'o'});
  s21_char_stack.insert_many_front('H', 'e', 'l', 'l');

  stack<std::string> s21_string_stack({"ten"});
  std::stack<std::string> std_string({"six", "seven", "eight", "nine", "ten"});
  s21_string_stack.insert_many_front("six", "seven", "eight", "nine");

  CompareStacks(s21_char_stack, std_char);
  CompareStacks(s21_string_stack, std_string);
}

}  // namespace s21
