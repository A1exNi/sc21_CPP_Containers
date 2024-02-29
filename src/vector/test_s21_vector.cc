#include <gtest/gtest.h>

#include <vector>

#include "s21_vector.h"

TEST(s21_vector_test, default_const_1) {
  s21::vector<int> vector1;
  std::vector<int> vector2;
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, default_const_2) {
  s21::vector<char> vector1;
  std::vector<char> vector2;
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, default_const_3) {
  s21::vector<std::string> vector1{"aboba"};
  std::vector<std::string> vector2{"aboba"};
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, copy_const) {
  std::vector<std::string> vector2{"aboba"};
  std::vector<std::string> vector22 = vector2;
  s21::vector<std::string> vector1{"aboba"};
  s21::vector<std::string> vector11 = vector1;

  ASSERT_EQ(vector11.size(), vector22.size());
  ASSERT_EQ(vector11.capacity(), vector22.capacity());
}

TEST(s21_vector_test, move_const) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  s21::vector<int> vector2 = std::move(vector1);

  ASSERT_EQ(vector2.size(), 5);
  for (size_t i = 0; i < 5; ++i) {
    ASSERT_EQ(vector2[i], i + 1);
  }
}

TEST(s21_vector_test, move_assignment) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  s21::vector<int> vector2;
  vector2 = std::move(vector1);

  ASSERT_EQ(vector2.size(), 5);
  for (size_t i = 0; i < 5; ++i) {
    ASSERT_EQ(vector2[i], i + 1);
  }
}

TEST(s21_vector_test, empty_1) {
  s21::vector<int> vector1;
  std::vector<int> vector2;
  ASSERT_EQ(vector1.empty(), vector2.empty());
}

TEST(s21_vector_test, empty_2) {
  s21::vector<char> vector1('a');
  std::vector<char> vector2('a');
  ASSERT_EQ(vector1.empty(), vector2.empty());
}

TEST(s21_vector_test, param_const_1) {
  s21::vector<int> vector1(5);
  std::vector<int> vector2(5);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, param_const_2) {
  s21::vector<char> vector1(5);
  std::vector<char> vector2(5);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, initializer_list_1) {
  s21::vector<int> vector1{192, 168, 0, 1};
  std::vector<int> vector2{192, 168, 0, 1};
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (int i = 0; i < 3; ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, initializer_list_2) {
  s21::vector<char> vector1{'l', 'v', 's', 'd'};
  std::vector<char> vector2{'l', 'v', 's', 'd'};
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (int i = 0; i < 3; ++i) {
    EXPECT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, initializer_list_3) {
  s21::vector<std::string> vector1{"Hello", "that", "cruel", "world"};
  std::vector<std::string> vector2{"Hello", "that", "cruel", "world"};
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (int i = 0; i < 4; ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, reserve) {
  s21::vector<char> vector1(5);
  std::vector<char> vector2(5);
  vector1.reserve(10);
  vector2.reserve(10);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, push_back_1) {
  s21::vector<char> vector1;
  std::vector<char> vector2;
  vector1.push_back('s');
  vector2.push_back('s');
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  ASSERT_EQ(vector1[0], vector2[0]);
}

TEST(s21_vector_test, push_back_2) {
  s21::vector<int> vector1;
  std::vector<int> vector2;
  for (size_t i = 0; i < 20; ++i) {
    vector1.push_back(i);
    vector2.push_back(i);
    ASSERT_EQ(vector1.size(), vector2.size());
    ASSERT_EQ(vector1.capacity(), vector2.capacity());
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, pop_back) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5};
  vector1.pop_back();
  vector2.pop_back();
  vector1.pop_back();
  vector2.pop_back();
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < 3; ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, swap) {
  s21::vector<int> vector11{1, 2, 3, 4, 5};
  s21::vector<int> vector1;
  vector1.swap(vector11);
  std::vector<int> vector22{1, 2, 3, 4, 5};
  std::vector<int> vector2;
  vector2.swap(vector22);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < 5; ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, insert) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5};
  vector1.clear();
  vector2.clear();
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
}

TEST(s21_vector_test, clear) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5};
  auto it1 = vector1.begin();
  ++it1;
  auto it2 = vector2.begin();
  ++it2;
  vector1.insert(it1, 99);
  vector2.insert(it2, 99);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector2.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, erase) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5};
  auto it1 = vector1.begin();
  ++it1;
  auto it2 = vector2.begin();
  ++it2;
  vector1.erase(it1);
  vector2.erase(it2);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector2.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, shrink) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5};
  vector1.reserve(20);
  vector2.reserve(20);
  vector1.shrink_to_fit();
  vector2.shrink_to_fit();
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector2.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, front_back_1) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5};
  ASSERT_EQ(vector1.front(), vector2.front());
  ASSERT_EQ(vector1.back(), vector2.back());
}

TEST(s21_vector_test, insert_many) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 6, 7, 8, 2, 3, 4, 5};
  auto it1 = vector1.begin();
  ++it1;
  vector1.insert_many(it1, 6, 7, 8);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector1.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, insert_many_2) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{6, 7, 8, 1, 2, 3, 4, 5};
  auto it1 = vector1.begin();
  vector1.insert_many(it1, 6, 7, 8);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector1.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, insert_many_3) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5, 6, 7, 8};
  auto it1 = vector1.end();
  vector1.insert_many(it1, 6, 7, 8);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector1.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}

TEST(s21_vector_test, insert_many_back) {
  s21::vector<int> vector1{1, 2, 3, 4, 5};
  std::vector<int> vector2{1, 2, 3, 4, 5, 6, 7, 8};
  vector1.insert_many_back(6, 7, 8);
  ASSERT_EQ(vector1.size(), vector2.size());
  ASSERT_EQ(vector1.capacity(), vector2.capacity());
  for (size_t i = 0; i < vector1.size(); ++i) {
    ASSERT_EQ(vector1[i], vector2[i]);
  }
}
