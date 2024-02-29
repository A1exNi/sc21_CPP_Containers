#include <gtest/gtest.h>

#include <set>

#include "s21_multiset.h"

TEST(s21_multiset_test, constractor1) {
  s21::multiset<int> s21_ms;
  std::multiset<int> std_ms;
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<int> s21_ms2(s21_ms);
  std::multiset<int> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<int> s21_ms3 = std::move(s21_ms);
  std::multiset<int> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, constractor2) {
  s21::multiset<double> s21_ms;
  std::multiset<double> std_ms;
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<double> s21_ms2(s21_ms);
  std::multiset<double> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<double> s21_ms3 = std::move(s21_ms);
  std::multiset<double> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, constractor3) {
  s21::multiset<float> s21_ms;
  std::multiset<float> std_ms;
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<float> s21_ms2(s21_ms);
  std::multiset<float> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<float> s21_ms3 = std::move(s21_ms);
  std::multiset<float> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, constractor4) {
  s21::multiset<char> s21_ms;
  std::multiset<char> std_ms;
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<char> s21_ms2(s21_ms);
  std::multiset<char> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<char> s21_ms3 = std::move(s21_ms);
  std::multiset<char> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, constractor5) {
  s21::multiset<std::string> s21_ms;
  std::multiset<std::string> std_ms;
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<std::string> s21_ms2(s21_ms);
  std::multiset<std::string> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<std::string> s21_ms3 = std::move(s21_ms);
  std::multiset<std::string> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert1) {
  s21::multiset<std::string> s21_ms;
  s21_ms.insert("key1");
  std::multiset<std::string> std_ms;
  std_ms.insert("key1");
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<std::string> s21_ms2(s21_ms);
  std::multiset<std::string> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<std::string> s21_ms3 = std::move(s21_ms);
  std::multiset<std::string> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert2) {
  s21::multiset<int> s21_ms;
  s21_ms.insert(1);
  std::multiset<int> std_ms;
  std_ms.insert(1);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<int> s21_ms2(s21_ms);
  std::multiset<int> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<int> s21_ms3 = std::move(s21_ms);
  std::multiset<int> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert3) {
  s21::multiset<float> s21_ms;
  s21_ms.insert(1.0);
  std::multiset<float> std_ms;
  std_ms.insert(1.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<float> s21_ms2(s21_ms);
  std::multiset<float> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<float> s21_ms3 = std::move(s21_ms);
  std::multiset<float> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert4) {
  s21::multiset<double> s21_ms;
  s21_ms.insert(1.0);
  std::multiset<double> std_ms;
  std_ms.insert(1.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<double> s21_ms2(s21_ms);
  std::multiset<double> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<double> s21_ms3 = std::move(s21_ms);
  std::multiset<double> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert5) {
  s21::multiset<char> s21_ms;
  s21_ms.insert('a');
  std::multiset<char> std_ms;
  std_ms.insert('a');
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<char> s21_ms2(s21_ms);
  std::multiset<char> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<char> s21_ms3 = std::move(s21_ms);
  std::multiset<char> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert6) {
  s21::multiset<std::string> s21_ms;
  s21_ms.insert("key1");
  s21_ms.insert("key2");
  std::multiset<std::string> std_ms;
  std_ms.insert("key1");
  std_ms.insert("key2");
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<std::string> s21_ms2(s21_ms);
  std::multiset<std::string> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<std::string> s21_ms3 = std::move(s21_ms);
  std::multiset<std::string> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert7) {
  s21::multiset<int> s21_ms;
  s21_ms.insert(1);
  s21_ms.insert(2);
  std::multiset<int> std_ms;
  std_ms.insert(1);
  std_ms.insert(2);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<int> s21_ms2(s21_ms);
  std::multiset<int> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<int> s21_ms3 = std::move(s21_ms);
  std::multiset<int> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert8) {
  s21::multiset<float> s21_ms;
  s21_ms.insert(1.0);
  s21_ms.insert(2.0);
  std::multiset<float> std_ms;
  std_ms.insert(1.0);
  std_ms.insert(2.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<float> s21_ms2(s21_ms);
  std::multiset<float> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<float> s21_ms3 = std::move(s21_ms);
  std::multiset<float> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert9) {
  s21::multiset<double> s21_ms;
  s21_ms.insert(1.0);
  s21_ms.insert(2.0);
  std::multiset<double> std_ms;
  std_ms.insert(1.0);
  std_ms.insert(2.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<double> s21_ms2(s21_ms);
  std::multiset<double> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<double> s21_ms3 = std::move(s21_ms);
  std::multiset<double> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert10) {
  s21::multiset<char> s21_ms;
  s21_ms.insert('a');
  s21_ms.insert('s');
  std::multiset<char> std_ms;
  std_ms.insert('a');
  std_ms.insert('s');
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<char> s21_ms2(s21_ms);
  std::multiset<char> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<char> s21_ms3 = std::move(s21_ms);
  std::multiset<char> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert11) {
  s21::multiset<std::string> s21_ms;
  s21_ms.insert("key1");
  s21_ms.insert("key2");
  s21_ms.insert("key3");
  std::multiset<std::string> std_ms;
  std_ms.insert("key1");
  std_ms.insert("key2");
  std_ms.insert("key3");
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<std::string> s21_ms2(s21_ms);
  std::multiset<std::string> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<std::string> s21_ms3 = std::move(s21_ms);
  std::multiset<std::string> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert12) {
  s21::multiset<int> s21_ms;
  s21_ms.insert(1);
  s21_ms.insert(2);
  s21_ms.insert(3);
  std::multiset<int> std_ms;
  std_ms.insert(1);
  std_ms.insert(2);
  std_ms.insert(3);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<int> s21_ms2(s21_ms);
  std::multiset<int> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<int> s21_ms3 = std::move(s21_ms);
  std::multiset<int> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert13) {
  s21::multiset<float> s21_ms;
  s21_ms.insert(1.0);
  s21_ms.insert(2.0);
  s21_ms.insert(3.0);
  std::multiset<float> std_ms;
  std_ms.insert(1.0);
  std_ms.insert(2.0);
  std_ms.insert(3.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<float> s21_ms2(s21_ms);
  std::multiset<float> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<float> s21_ms3 = std::move(s21_ms);
  std::multiset<float> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert14) {
  s21::multiset<double> s21_ms;
  s21_ms.insert(1.0);
  s21_ms.insert(2.0);
  s21_ms.insert(3.0);
  std::multiset<double> std_ms;
  std_ms.insert(1.0);
  std_ms.insert(2.0);
  std_ms.insert(3.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<double> s21_ms2(s21_ms);
  std::multiset<double> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<double> s21_ms3 = std::move(s21_ms);
  std::multiset<double> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert15) {
  s21::multiset<char> s21_ms;
  s21_ms.insert('a');
  s21_ms.insert('s');
  s21_ms.insert('d');
  std::multiset<char> std_ms;
  std_ms.insert('a');
  std_ms.insert('s');
  std_ms.insert('d');
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<char> s21_ms2(s21_ms);
  std::multiset<char> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<char> s21_ms3 = std::move(s21_ms);
  std::multiset<char> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert16) {
  s21::multiset<std::string> s21_ms;
  s21_ms.insert("key1");
  s21_ms.insert("key2");
  s21_ms.insert("key3");
  s21_ms.insert("key4");
  std::multiset<std::string> std_ms;
  std_ms.insert("key1");
  std_ms.insert("key2");
  std_ms.insert("key3");
  std_ms.insert("key4");
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<std::string> s21_ms2(s21_ms);
  std::multiset<std::string> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<std::string> s21_ms3 = std::move(s21_ms);
  std::multiset<std::string> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert17) {
  s21::multiset<int> s21_ms;
  s21_ms.insert(1);
  s21_ms.insert(2);
  s21_ms.insert(3);
  s21_ms.insert(4);
  std::multiset<int> std_ms;
  std_ms.insert(1);
  std_ms.insert(2);
  std_ms.insert(3);
  std_ms.insert(4);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<int> s21_ms2(s21_ms);
  std::multiset<int> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<int> s21_ms3 = std::move(s21_ms);
  std::multiset<int> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert18) {
  s21::multiset<float> s21_ms;
  s21_ms.insert(1.0);
  s21_ms.insert(2.0);
  s21_ms.insert(3.0);
  s21_ms.insert(4.0);
  std::multiset<float> std_ms;
  std_ms.insert(1.0);
  std_ms.insert(2.0);
  std_ms.insert(3.0);
  std_ms.insert(4.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<float> s21_ms2(s21_ms);
  std::multiset<float> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<float> s21_ms3 = std::move(s21_ms);
  std::multiset<float> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert19) {
  s21::multiset<double> s21_ms;
  s21_ms.insert(1.0);
  s21_ms.insert(2.0);
  s21_ms.insert(3.0);
  s21_ms.insert(4.0);
  std::multiset<double> std_ms;
  std_ms.insert(1.0);
  std_ms.insert(2.0);
  std_ms.insert(3.0);
  std_ms.insert(4.0);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<double> s21_ms2(s21_ms);
  std::multiset<double> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<double> s21_ms3 = std::move(s21_ms);
  std::multiset<double> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert20) {
  s21::multiset<char> s21_ms;
  s21_ms.insert('a');
  s21_ms.insert('s');
  s21_ms.insert('d');
  s21_ms.insert('f');
  std::multiset<char> std_ms;
  std_ms.insert('a');
  std_ms.insert('s');
  std_ms.insert('d');
  std_ms.insert('f');
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<char> s21_ms2(s21_ms);
  std::multiset<char> std_ms2(std_ms);
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<char> s21_ms3 = std::move(s21_ms);
  std::multiset<char> std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
}

TEST(s21_multiset_test, Insert21) {
  s21::multiset<std::string> s21_ms({"key1", "key2", "key3", "key4", "key5"});
  std::multiset<std::string> std_ms = {"key1", "key2", "key3", "key4", "key5"};
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<std::string> s21_ms2;
  s21_ms2 = s21_ms;
  std::multiset<std::string> std_ms2;
  std_ms2 = std_ms;
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<std::string> s21_ms3;
  s21_ms3 = std::move(s21_ms);
  std::multiset<std::string> std_ms3;
  std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  auto s21_it = s21_ms.find("key1");
  ASSERT_EQ(s21_it == s21_ms.end(), true);
  s21_it = s21_ms2.find("key1");
  auto std_it = std_ms2.find("key1");
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, Insert22) {
  s21::multiset<int> s21_ms({1, 2, 3, 4, 5});
  std::multiset<int> std_ms = {1, 2, 3, 4, 5};
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<int> s21_ms2;
  s21_ms2 = s21_ms;
  std::multiset<int> std_ms2;
  std_ms2 = std_ms;
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<int> s21_ms3;
  s21_ms3 = std::move(s21_ms);
  std::multiset<int> std_ms3;
  std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  auto s21_it = s21_ms.find(1);
  ASSERT_EQ(s21_it == s21_ms.end(), true);
  s21_it = s21_ms2.find(1);
  auto std_it = std_ms2.find(1);
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, Insert23) {
  s21::multiset<float> s21_ms({1.0, 2.0, 3.0, 4.0, 5.0});
  std::multiset<float> std_ms = {1.0, 2.0, 3.0, 4.0, 5.0};
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<float> s21_ms2;
  s21_ms2 = s21_ms;
  std::multiset<float> std_ms2;
  std_ms2 = std_ms;
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<float> s21_ms3;
  s21_ms3 = std::move(s21_ms);
  std::multiset<float> std_ms3;
  std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  auto s21_it = s21_ms.find(1.0);
  ASSERT_EQ(s21_it == s21_ms.end(), true);
  s21_it = s21_ms2.find(1.0);
  auto std_it = std_ms2.find(1.0);
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, Insert24) {
  s21::multiset<double> s21_ms({1.0, 2.0, 3.0, 4.0, 5.0});
  std::multiset<double> std_ms = {1.0, 2.0, 3.0, 4.0, 5.0};
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<double> s21_ms2;
  s21_ms2 = s21_ms;
  std::multiset<double> std_ms2;
  std_ms2 = std_ms;
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<double> s21_ms3;
  s21_ms3 = std::move(s21_ms);
  std::multiset<double> std_ms3;
  std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  auto s21_it = s21_ms.find(1.0);
  ASSERT_EQ(s21_it == s21_ms.end(), true);
  s21_it = s21_ms2.find(1.0);
  auto std_it = std_ms2.find(1.0);
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, Insert25) {
  s21::multiset<char> s21_ms({'a', 's', 'd', 'f', 'g'});
  std::multiset<char> std_ms = {'a', 's', 'd', 'f', 'g'};
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  s21::multiset<char> s21_ms2;
  s21_ms2 = s21_ms;
  std::multiset<char> std_ms2;
  std_ms2 = std_ms;
  ASSERT_EQ(s21_ms2.size(), std_ms2.size());
  ASSERT_EQ(s21_ms2.empty(), std_ms2.empty());
  s21::multiset<char> s21_ms3;
  s21_ms3 = std::move(s21_ms);
  std::multiset<char> std_ms3;
  std_ms3 = std::move(std_ms);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  ASSERT_EQ(s21_ms.empty(), std_ms.empty());
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  s21_ms3.clear();
  std_ms3.clear();
  ASSERT_EQ(s21_ms3.size(), std_ms3.size());
  ASSERT_EQ(s21_ms3.empty(), std_ms3.empty());
  auto s21_it = s21_ms.find('a');
  ASSERT_EQ(s21_it == s21_ms.end(), true);
  s21_it = s21_ms2.find('a');
  auto std_it = std_ms2.find('a');
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, erase1) {
  s21::multiset<int> s21_ms;
  std::multiset<int> std_ms;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  auto s21_it = s21_ms.end();
  auto std_it = std_ms.end();
  --s21_it;
  --std_it;
  s21_ms.erase(s21_it);
  std_ms.erase(std_it);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}

TEST(s21_multiset_test, erase2) {
  s21::multiset<double> s21_ms;
  std::multiset<double> std_ms;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  auto s21_it = s21_ms.end();
  auto std_it = std_ms.end();
  --s21_it;
  --std_it;
  s21_ms.erase(s21_it);
  std_ms.erase(std_it);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}

TEST(s21_multiset_test, erase3) {
  s21::multiset<float> s21_ms;
  std::multiset<float> std_ms;
  for (float i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  auto s21_it = s21_ms.end();
  auto std_it = std_ms.end();
  --s21_it;
  --std_it;
  s21_ms.erase(s21_it);
  std_ms.erase(std_it);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}

TEST(s21_multiset_test, erase4) {
  s21::multiset<char> s21_ms;
  std::multiset<char> std_ms;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  auto s21_it = s21_ms.end();
  auto std_it = std_ms.end();
  --s21_it;
  --std_it;
  s21_ms.erase(s21_it);
  std_ms.erase(std_it);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}

TEST(s21_multiset_test, erase5) {
  s21::multiset<std::string> s21_ms;
  std::multiset<std::string> std_ms;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(str);
    std_ms.insert(str);
  }
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  auto s21_it = s21_ms.end();
  auto std_it = std_ms.end();
  --s21_it;
  --std_it;
  s21_ms.erase(s21_it);
  std_ms.erase(std_it);
  ASSERT_EQ(s21_ms.size(), std_ms.size());
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}

TEST(s21_multiset_test, Iterator1) {
  s21::multiset<int> s21_ms;
  std::multiset<int> std_ms;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  s21_ms.insert(-17);
  s21_ms.insert(0);
  s21_ms.insert(19);
  std_ms.insert(-17);
  std_ms.insert(0);
  std_ms.insert(19);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  while (s21_it != s21_ms.begin() && std_it != std_ms.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_ms.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}
TEST(s21_multiset_test, Iterator2) {
  s21::multiset<double> s21_ms;
  std::multiset<double> std_ms;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  s21_ms.insert(-18.9);
  s21_ms.insert(0.1);
  s21_ms.insert(18.1);
  std_ms.insert(-18.9);
  std_ms.insert(0.1);
  std_ms.insert(18.1);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  while (s21_it != s21_ms.begin() && std_it != std_ms.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_ms.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}
TEST(s21_multiset_test, Iterator3) {
  s21::multiset<float> s21_ms;
  std::multiset<float> std_ms;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  s21_ms.insert(-18.9);
  s21_ms.insert(0.1);
  s21_ms.insert(18.1);
  std_ms.insert(-18.9);
  std_ms.insert(0.1);
  std_ms.insert(18.1);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  while (s21_it != s21_ms.begin() && std_it != std_ms.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_ms.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}
TEST(s21_multiset_test, Iterator4) {
  s21::multiset<char> s21_ms;
  std::multiset<char> std_ms;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    s21_ms.insert(i);
    std_ms.insert(i);
  }
  s21_ms.insert('a');
  s21_ms.insert('m');
  s21_ms.insert('z');
  std_ms.insert('a');
  std_ms.insert('m');
  std_ms.insert('z');
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  while (s21_it != s21_ms.begin() && std_it != std_ms.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_ms.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}
TEST(s21_multiset_test, Iterator5) {
  s21::multiset<std::string> s21_ms;
  std::multiset<std::string> std_ms;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_ms.insert(str);
    std_ms.insert(str);
  }
  s21_ms.insert("value-17");
  s21_ms.insert("value0");
  s21_ms.insert("value19");
  std_ms.insert("value-17");
  std_ms.insert("value0");
  std_ms.insert("value19");
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_ms.end();
  std_it = std_ms.end();
  while (s21_it != s21_ms.begin() && std_it != std_ms.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_ms.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_ms.clear();
  s21_ms.clear();
  ASSERT_EQ(s21_ms.size(), s21_ms.size());
  ASSERT_EQ(s21_ms.empty(), s21_ms.empty());
}
TEST(s21_multiset_test, merge1) {
  s21::multiset<int> s21_ms({1, 2, 3});
  s21::multiset<int> s21_ms2({4, 5, 2});
  std::multiset<int> std_ms = {1, 2, 3};
  std::multiset<int> std_ms2 = {4, 5, 2};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_ms.contains(1), true);
  ASSERT_EQ(s21_ms2.contains(4), false);
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  s21_it = s21_ms.begin();
  std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge2) {
  s21::multiset<double> s21_ms({1.0, 2.0, 3.0});
  s21::multiset<double> s21_ms2({4.0, 5.0, 2.0});
  std::multiset<double> std_ms = {1.0, 2.0, 3.0};
  std::multiset<double> std_ms2 = {4.0, 5.0, 2.0};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_ms.contains(1.0), true);
  ASSERT_EQ(s21_ms2.contains(4.0), false);
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  s21_it = s21_ms.begin();
  std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge3) {
  s21::multiset<float> s21_ms({1.0, 2.0, 3.0});
  s21::multiset<float> s21_ms2({4.0, 5.0, 2.0});
  std::multiset<float> std_ms = {1.0, 2.0, 3.0};
  std::multiset<float> std_ms2 = {4.0, 5.0, 2.0};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_ms.contains(1.0), true);
  ASSERT_EQ(s21_ms2.contains(4.0), false);
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  s21_it = s21_ms.begin();
  std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge4) {
  s21::multiset<char> s21_ms({'a', 's', 'd'});
  s21::multiset<char> s21_ms2({'f', 'g', 's'});
  std::multiset<char> std_ms = {'a', 's', 'd'};
  std::multiset<char> std_ms2 = {'f', 'g', 's'};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_ms.contains('a'), true);
  ASSERT_EQ(s21_ms2.contains('f'), false);
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  s21_it = s21_ms.begin();
  std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge5) {
  s21::multiset<std::string> s21_ms({"key1", "key2", "key3"});
  s21::multiset<std::string> s21_ms2({"key4", "key5", "key2"});
  std::multiset<std::string> std_ms = {"key1", "key2", "key3"};
  std::multiset<std::string> std_ms2 = {"key4", "key5", "key2"};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_ms.contains("key1"), true);
  ASSERT_EQ(s21_ms2.contains("key4"), false);
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  s21_it = s21_ms.begin();
  std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge6) {
  s21::multiset<int> s21_ms;
  s21::multiset<int> s21_ms2({4, 5, 2});
  std::multiset<int> std_ms;
  std::multiset<int> std_ms2 = {4, 5, 2};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge7) {
  s21::multiset<double> s21_ms;
  s21::multiset<double> s21_ms2({4.0, 5.0, 2.0});
  std::multiset<double> std_ms;
  std::multiset<double> std_ms2 = {4.0, 5.0, 2.0};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge8) {
  s21::multiset<float> s21_ms;
  s21::multiset<float> s21_ms2({4.0, 5.0, 2.0});
  std::multiset<float> std_ms;
  std::multiset<float> std_ms2 = {4.0, 5.0, 2.0};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge9) {
  s21::multiset<char> s21_ms;
  s21::multiset<char> s21_ms2({'f', 'g', 's'});
  std::multiset<char> std_ms;
  std::multiset<char> std_ms2 = {'f', 'g', 's'};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, merge10) {
  s21::multiset<std::string> s21_ms;
  s21::multiset<std::string> s21_ms2({"key4", "key5", "key2"});
  std::multiset<std::string> std_ms;
  std::multiset<std::string> std_ms2 = {"key4", "key5", "key2"};
  s21_ms.merge(s21_ms2);
  std_ms.merge(std_ms2);
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_ms2.begin();
  std_it = std_ms2.begin();
  while (s21_it != s21_ms2.end() && std_it != std_ms2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, insert_many1) {
  s21::multiset<int> s21_ms{1, 2, 3, 4, 5};
  s21_ms.insert_many(6, 7, 8);
  std::multiset<int> std_ms{1, 6, 7, 8, 2, 3, 4, 5};
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_multiset_test, insert_many2) {
  s21::multiset<double> s21_ms{1.6, 2.7, 3.8, 4.9, 5.91};
  s21_ms.insert_many(6.7, 8.46);
  std::multiset<double> std_ms{1.6, 6.7, 8.46, 2.7, 3.8, 4.9, 5.91};
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_multiset_test, insert_many3) {
  s21::multiset<float> s21_ms{1.6, 2.7, 3.8, 4.9, 5.91};
  s21_ms.insert_many(6.7, 8.46);
  std::multiset<float> std_ms{1.6, 6.7, 8.46, 2.7, 3.8, 4.9, 5.91};
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_multiset_test, insert_many4) {
  s21::multiset<char> s21_ms{'q', 'w', 'e', 'r', 't', 'y'};
  s21_ms.insert_many('z', 'x', 'c');
  std::multiset<char> std_ms{'q', 'z', 'x', 'c', 'w', 'e', 'r', 't', 'y'};
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_multiset_test, insert_many5) {
  s21::multiset<std::string> s21_ms{"Qwerty", "aSdf", "Hello world!"};
  s21_ms.insert_many("zxcv", "jkl;'");
  std::multiset<std::string> std_ms{"Qwerty", "zxcv", "jkl;'", "aSdf",
                                    "Hello world!"};
  auto s21_it = s21_ms.begin();
  auto std_it = std_ms.begin();
  while (s21_it != s21_ms.end() && std_it != std_ms.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_multiset_test, equal_range1) {
  s21::multiset<int> s21_ms{4, 3, 2, 1, 3, 3, 10, 12};
  std::multiset<int> std_ms{4, 3, 2, 1, 3, 3, 10, 12};
  for (int i = 0; i < 12; i++) {
    auto s21_pair_it = s21_ms.equal_range(i);
    auto std_pair_it = std_ms.equal_range(i);
    ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
    ASSERT_EQ(*(s21_pair_it.second), *(std_pair_it.second));
    size_t s21_count = s21_ms.count(i);
    size_t std_count = std_ms.count(i);
    ASSERT_EQ(s21_count, std_count);
  }
  auto s21_pair_it = s21_ms.equal_range(12);
  auto std_pair_it = std_ms.equal_range(12);
  ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range(13);
  std_pair_it = std_ms.equal_range(13);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.first,
            std_ms.end() == std_pair_it.first);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range(3);
  std_pair_it = std_ms.equal_range(3);
  auto s21_it = --s21_pair_it.first;
  auto std_it = --std_pair_it.first;
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, equal_range2) {
  s21::multiset<double> s21_ms{4.1, 3.1, 2.1, 1.1, 3.1, 3.1, 10.1, 12.1};
  std::multiset<double> std_ms{4.1, 3.1, 2.1, 1.1, 3.1, 3.1, 10.1, 12.1};
  for (double i = 0.1; i < 12.1; i++) {
    auto s21_pair_it = s21_ms.equal_range(i);
    auto std_pair_it = std_ms.equal_range(i);
    ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
    ASSERT_EQ(*(s21_pair_it.second), *(std_pair_it.second));
    size_t s21_count = s21_ms.count(i);
    size_t std_count = std_ms.count(i);
    ASSERT_EQ(s21_count, std_count);
  }
  auto s21_pair_it = s21_ms.equal_range(12.1);
  auto std_pair_it = std_ms.equal_range(12.1);
  ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range(13.1);
  std_pair_it = std_ms.equal_range(13.1);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.first,
            std_ms.end() == std_pair_it.first);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range(3.1);
  std_pair_it = std_ms.equal_range(3.1);
  auto s21_it = --s21_pair_it.first;
  auto std_it = --std_pair_it.first;
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, equal_range3) {
  s21::multiset<float> s21_ms{4.1, 3.1, 2.1, 1.1, 3.1, 3.1, 10.1, 12.1};
  std::multiset<float> std_ms{4.1, 3.1, 2.1, 1.1, 3.1, 3.1, 10.1, 12.1};
  for (float i = 0.1; i < 12.1; i++) {
    auto s21_pair_it = s21_ms.equal_range(i);
    auto std_pair_it = std_ms.equal_range(i);
    ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
    ASSERT_EQ(*(s21_pair_it.second), *(std_pair_it.second));
    size_t s21_count = s21_ms.count(i);
    size_t std_count = std_ms.count(i);
    ASSERT_EQ(s21_count, std_count);
  }
  auto s21_pair_it = s21_ms.equal_range(12.1);
  auto std_pair_it = std_ms.equal_range(12.1);
  ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range(13.1);
  std_pair_it = std_ms.equal_range(13.1);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.first,
            std_ms.end() == std_pair_it.first);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range(3.1);
  std_pair_it = std_ms.equal_range(3.1);
  auto s21_it = --s21_pair_it.first;
  auto std_it = --std_pair_it.first;
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, equal_range4) {
  s21::multiset<char> s21_ms{'d', 'c', 'b', 'a', 'c', 'c', 'j', 'l'};
  std::multiset<char> std_ms{'d', 'c', 'b', 'a', 'c', 'c', 'j', 'l'};
  for (char i = '`'; i < 'l'; i++) {
    auto s21_pair_it = s21_ms.equal_range(i);
    auto std_pair_it = std_ms.equal_range(i);
    ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
    ASSERT_EQ(*(s21_pair_it.second), *(std_pair_it.second));
    size_t s21_count = s21_ms.count(i);
    size_t std_count = std_ms.count(i);
    ASSERT_EQ(s21_count, std_count);
  }
  auto s21_pair_it = s21_ms.equal_range('l');
  auto std_pair_it = std_ms.equal_range('l');
  ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range('m');
  std_pair_it = std_ms.equal_range('m');
  ASSERT_EQ(s21_ms.end() == s21_pair_it.first,
            std_ms.end() == std_pair_it.first);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range('c');
  std_pair_it = std_ms.equal_range('c');
  auto s21_it = --s21_pair_it.first;
  auto std_it = --std_pair_it.first;
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_multiset_test, equal_range5) {
  s21::multiset<std::string> s21_ms{"key12", "key11", "key10", "key1",
                                    "key11", "key11", "key6",  "key8"};
  std::multiset<std::string> std_ms{"key12", "key11", "key10", "key1",
                                    "key11", "key11", "key6",  "key8"};
  for (int i = 0; i < 13; i++) {
    std::string str = "key" + std::to_string(i);
    if (i != 8 && i != 9) {
      auto s21_pair_it = s21_ms.equal_range(str);
      auto std_pair_it = std_ms.equal_range(str);
      ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
      ASSERT_EQ(*(s21_pair_it.second), *(std_pair_it.second));
    }
    size_t s21_count = s21_ms.count(str);
    size_t std_count = std_ms.count(str);
    ASSERT_EQ(s21_count, std_count);
  }
  auto s21_pair_it = s21_ms.equal_range("key8");
  auto std_pair_it = std_ms.equal_range("key8");
  ASSERT_EQ(*(s21_pair_it.first), *(std_pair_it.first));
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range("key9");
  std_pair_it = std_ms.equal_range("key9");
  ASSERT_EQ(s21_ms.end() == s21_pair_it.first,
            std_ms.end() == std_pair_it.first);
  ASSERT_EQ(s21_ms.end() == s21_pair_it.second,
            std_ms.end() == std_pair_it.second);
  s21_pair_it = s21_ms.equal_range("key11");
  std_pair_it = std_ms.equal_range("key11");
  auto s21_it = --s21_pair_it.first;
  auto std_it = --std_pair_it.first;
  ASSERT_EQ(*s21_it, *std_it);
}
