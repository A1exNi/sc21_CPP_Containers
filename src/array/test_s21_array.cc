#include <gtest/gtest.h>

#include "s21_array.h"

TEST(s21_array_test, DefaultConstructor) {
  s21::array<int, 96> s21_arr;
  std::array<int, 96> check_arr;
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  EXPECT_EQ(s21_arr.max_size(), check_arr.max_size());
  EXPECT_EQ(s21_arr.empty(), check_arr.empty());
}

TEST(s21_array_test, Initializer_1) {
  s21::array<char, 3> s21_arr{'k', 'e', 'k'};
  std::array<char, 3> check_arr{'k', 'e', 'k'};
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 3; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
}

TEST(s21_array_test, Initializer_2) {
  s21::array<std::string, 3> s21_arr{"kek", "lal", "heh"};
  std::array<std::string, 3> check_arr{"kek", "lal", "heh"};
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 3; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
}

TEST(s21_array_test, Initializer_3) {
  s21::array<double, 2> s21_arr{1.0000045, 12.839};
  std::array<double, 2> check_arr{1.0000045, 12.839};
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 2; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
}

TEST(s21_array_test, Initializer_4) {
  s21::array<int, 5> s21_arr{1, 2, 3, 4, 5};
  std::array<int, 5> check_arr{1, 2, 3, 4, 5};
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 5; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
}

TEST(s21_array_test, Initializer_5) {
  s21::array<int, 2> s21_arr;
  std::initializer_list<int> out = {1, 9, 9, 6};
  EXPECT_THROW(s21_arr = out, std::out_of_range);
}

TEST(s21_array_test, Copy_1) {
  s21::array<int, 6> s21_check{0, 1, 0, 3, 9, 6};
  std::array<int, 6> check{0, 1, 0, 3, 9, 6};
  s21::array<int, 6> s21_arr(s21_check);
  std::array<int, 6> check_arr(check);
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 6; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
  for (int i = 0; i < 6; ++i) EXPECT_EQ(s21_arr.at(i), s21_check.at(i));
}

TEST(s21_array_test, Copy_2) {
  s21::array<char, 2> s21_check{'h', 'a'};
  std::array<char, 2> check{'h', 'a'};
  s21::array<char, 2> s21_arr = s21_check;
  std::array<char, 2> check_arr = check;
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 2; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
  for (int i = 0; i < 2; ++i) EXPECT_EQ(s21_arr.at(i), s21_check.at(i));
}

TEST(s21_array_test, Move) {
  s21::array<int, 6> s21_check{0, 1, 0, 3, 9, 6};
  std::array<int, 6> check{0, 1, 0, 3, 9, 6};
  s21::array<int, 6> s21_arr(std::move(s21_check));
  std::array<int, 6> check_arr(std::move(check));
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 6; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
}

TEST(s21_array_test, At_1) {
  s21::array<char, 2> s21_arr{'h', 'a'};
  EXPECT_EQ(s21_arr.at(0), 'h');
  s21_arr.at(0) = 'k';
  EXPECT_EQ(s21_arr.at(0), 'k');
}

TEST(s21_array_test, At_2) {
  s21::array<int, 2> s21_arr{5, 8};
  EXPECT_EQ(s21_arr[1], 8);
  s21_arr[1] = 9;
  EXPECT_EQ(s21_arr[1], 9);
}

TEST(s21_array_test, At_3) {
  s21::array<int, 2> s21_arr;
  EXPECT_THROW(s21_arr.at(2) = 5, std::out_of_range);
}

TEST(s21_array_test, FrontBack) {
  s21::array<int, 3> s21_arr{2, 1, 3};
  std::array<int, 3> check_arr{2, 1, 3};
  ASSERT_EQ(s21_arr.front(), check_arr.front());
  ASSERT_EQ(s21_arr.back(), check_arr.back());
}

TEST(s21_array_test, Data) {
  s21::array<int, 3> s21_arr{2, 1, 3};
  std::array<int, 3> check_arr{2, 1, 3};
  for (size_t i = 0; i < 2; ++i) {
    EXPECT_EQ(s21_arr.data()[i], check_arr.data()[i]);
  }
}

TEST(s21_array_test, Begin) {
  s21::array<int, 3> s21_arr{2, 1, 3};
  std::array<int, 3> check_arr{2, 1, 3};
  EXPECT_EQ(*s21_arr.begin(), *check_arr.begin());
}

TEST(s21_array_test, End) {
  s21::array<int, 3> s21_arr{2, 1, 3};
  std::array<int, 3> check_arr{2, 1, 3};
  EXPECT_EQ(*(s21_arr.end() - 1), *(check_arr.end() - 1));
}

TEST(s21_array_test, Empty_1) {
  s21::array<int, 2> s21_arr;
  std::array<int, 2> check_arr;
  EXPECT_EQ(s21_arr.empty(), check_arr.empty());
}

TEST(s21_array_test, Empty_2) {
  s21::array<int, 2> s21_arr{'f', 'u'};
  std::array<int, 2> check_arr{'k', 'l'};
  EXPECT_EQ(s21_arr.empty(), check_arr.empty());
}

TEST(s21_array_test, Size) {
  s21::array<int, 2> s21_arr{'f', 'u'};
  std::array<int, 2> check_arr{'k', 'l'};
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  EXPECT_EQ(s21_arr.max_size(), check_arr.max_size());
}

TEST(s21_array_test, Swap) {
  s21::array<int, 5> s21_arr{1, 2, 3, 4, 5};
  s21::array<int, 5> s21_arr_check{5, 4, 3, 2, 1};
  std::array<int, 5> check_arr{1, 2, 3, 4, 5};
  EXPECT_EQ(s21_arr.front(), check_arr.front());
  EXPECT_EQ(s21_arr.back(), check_arr.back());
  s21_arr.swap(s21_arr_check);
  EXPECT_EQ(s21_arr.back(), check_arr.front());
  EXPECT_EQ(s21_arr.front(), check_arr.back());
}

TEST(s21_array_test, Fill) {
  s21::array<int, 5> s21_arr{1, 2, 3, 4, 5};
  std::array<int, 5> check_arr{6, 7, 8, 9, 10};
  s21_arr.fill(12);
  check_arr.fill(12);
  EXPECT_EQ(s21_arr.size(), check_arr.size());
  for (int i = 0; i < 5; ++i) EXPECT_EQ(s21_arr.at(i), check_arr.at(i));
}
