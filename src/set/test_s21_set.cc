#include <gtest/gtest.h>

#include <set>

#include "s21_set.h"

TEST(s21_set_test, constractor1) {
  s21::set<int> s21_s;
  std::set<int> std_s;
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<int> s21_s2(s21_s);
  std::set<int> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<int> s21_s3 = std::move(s21_s);
  std::set<int> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, constractor2) {
  s21::set<double> s21_s;
  std::set<double> std_s;
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<double> s21_s2(s21_s);
  std::set<double> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<double> s21_s3 = std::move(s21_s);
  std::set<double> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, constractor3) {
  s21::set<float> s21_s;
  std::set<float> std_s;
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<float> s21_s2(s21_s);
  std::set<float> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<float> s21_s3 = std::move(s21_s);
  std::set<float> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, constractor4) {
  s21::set<char> s21_s;
  std::set<char> std_s;
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<char> s21_s2(s21_s);
  std::set<char> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<char> s21_s3 = std::move(s21_s);
  std::set<char> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, constractor5) {
  s21::set<std::string> s21_s;
  std::set<std::string> std_s;
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<std::string> s21_s2(s21_s);
  std::set<std::string> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<std::string> s21_s3 = std::move(s21_s);
  std::set<std::string> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert1) {
  s21::set<std::string> s21_s;
  s21_s.insert("key1");
  std::set<std::string> std_s;
  std_s.insert("key1");
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<std::string> s21_s2(s21_s);
  std::set<std::string> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<std::string> s21_s3 = std::move(s21_s);
  std::set<std::string> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert2) {
  s21::set<int> s21_s;
  s21_s.insert(1);
  std::set<int> std_s;
  std_s.insert(1);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<int> s21_s2(s21_s);
  std::set<int> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<int> s21_s3 = std::move(s21_s);
  std::set<int> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert3) {
  s21::set<float> s21_s;
  s21_s.insert(1.0);
  std::set<float> std_s;
  std_s.insert(1.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<float> s21_s2(s21_s);
  std::set<float> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<float> s21_s3 = std::move(s21_s);
  std::set<float> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert4) {
  s21::set<double> s21_s;
  s21_s.insert(1.0);
  std::set<double> std_s;
  std_s.insert(1.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<double> s21_s2(s21_s);
  std::set<double> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<double> s21_s3 = std::move(s21_s);
  std::set<double> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert5) {
  s21::set<char> s21_s;
  s21_s.insert('a');
  std::set<char> std_s;
  std_s.insert('a');
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<char> s21_s2(s21_s);
  std::set<char> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<char> s21_s3 = std::move(s21_s);
  std::set<char> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert6) {
  s21::set<std::string> s21_s;
  s21_s.insert("key1");
  s21_s.insert("key2");
  std::set<std::string> std_s;
  std_s.insert("key1");
  std_s.insert("key2");
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<std::string> s21_s2(s21_s);
  std::set<std::string> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<std::string> s21_s3 = std::move(s21_s);
  std::set<std::string> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert7) {
  s21::set<int> s21_s;
  s21_s.insert(1);
  s21_s.insert(2);
  std::set<int> std_s;
  std_s.insert(1);
  std_s.insert(2);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<int> s21_s2(s21_s);
  std::set<int> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<int> s21_s3 = std::move(s21_s);
  std::set<int> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert8) {
  s21::set<float> s21_s;
  s21_s.insert(1.0);
  s21_s.insert(2.0);
  std::set<float> std_s;
  std_s.insert(1.0);
  std_s.insert(2.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<float> s21_s2(s21_s);
  std::set<float> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<float> s21_s3 = std::move(s21_s);
  std::set<float> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert9) {
  s21::set<double> s21_s;
  s21_s.insert(1.0);
  s21_s.insert(2.0);
  std::set<double> std_s;
  std_s.insert(1.0);
  std_s.insert(2.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<double> s21_s2(s21_s);
  std::set<double> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<double> s21_s3 = std::move(s21_s);
  std::set<double> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert10) {
  s21::set<char> s21_s;
  s21_s.insert('a');
  s21_s.insert('s');
  std::set<char> std_s;
  std_s.insert('a');
  std_s.insert('s');
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<char> s21_s2(s21_s);
  std::set<char> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<char> s21_s3 = std::move(s21_s);
  std::set<char> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert11) {
  s21::set<std::string> s21_s;
  s21_s.insert("key1");
  s21_s.insert("key2");
  s21_s.insert("key3");
  std::set<std::string> std_s;
  std_s.insert("key1");
  std_s.insert("key2");
  std_s.insert("key3");
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<std::string> s21_s2(s21_s);
  std::set<std::string> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<std::string> s21_s3 = std::move(s21_s);
  std::set<std::string> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert12) {
  s21::set<int> s21_s;
  s21_s.insert(1);
  s21_s.insert(2);
  s21_s.insert(3);
  std::set<int> std_s;
  std_s.insert(1);
  std_s.insert(2);
  std_s.insert(3);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<int> s21_s2(s21_s);
  std::set<int> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<int> s21_s3 = std::move(s21_s);
  std::set<int> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert13) {
  s21::set<float> s21_s;
  s21_s.insert(1.0);
  s21_s.insert(2.0);
  s21_s.insert(3.0);
  std::set<float> std_s;
  std_s.insert(1.0);
  std_s.insert(2.0);
  std_s.insert(3.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<float> s21_s2(s21_s);
  std::set<float> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<float> s21_s3 = std::move(s21_s);
  std::set<float> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert14) {
  s21::set<double> s21_s;
  s21_s.insert(1.0);
  s21_s.insert(2.0);
  s21_s.insert(3.0);
  std::set<double> std_s;
  std_s.insert(1.0);
  std_s.insert(2.0);
  std_s.insert(3.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<double> s21_s2(s21_s);
  std::set<double> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<double> s21_s3 = std::move(s21_s);
  std::set<double> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert15) {
  s21::set<char> s21_s;
  s21_s.insert('a');
  s21_s.insert('s');
  s21_s.insert('d');
  std::set<char> std_s;
  std_s.insert('a');
  std_s.insert('s');
  std_s.insert('d');
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<char> s21_s2(s21_s);
  std::set<char> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<char> s21_s3 = std::move(s21_s);
  std::set<char> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert16) {
  s21::set<std::string> s21_s;
  s21_s.insert("key1");
  s21_s.insert("key2");
  s21_s.insert("key3");
  s21_s.insert("key4");
  std::set<std::string> std_s;
  std_s.insert("key1");
  std_s.insert("key2");
  std_s.insert("key3");
  std_s.insert("key4");
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<std::string> s21_s2(s21_s);
  std::set<std::string> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<std::string> s21_s3 = std::move(s21_s);
  std::set<std::string> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert17) {
  s21::set<int> s21_s;
  s21_s.insert(1);
  s21_s.insert(2);
  s21_s.insert(3);
  s21_s.insert(4);
  std::set<int> std_s;
  std_s.insert(1);
  std_s.insert(2);
  std_s.insert(3);
  std_s.insert(4);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<int> s21_s2(s21_s);
  std::set<int> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<int> s21_s3 = std::move(s21_s);
  std::set<int> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert18) {
  s21::set<float> s21_s;
  s21_s.insert(1.0);
  s21_s.insert(2.0);
  s21_s.insert(3.0);
  s21_s.insert(4.0);
  std::set<float> std_s;
  std_s.insert(1.0);
  std_s.insert(2.0);
  std_s.insert(3.0);
  std_s.insert(4.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<float> s21_s2(s21_s);
  std::set<float> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<float> s21_s3 = std::move(s21_s);
  std::set<float> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert19) {
  s21::set<double> s21_s;
  s21_s.insert(1.0);
  s21_s.insert(2.0);
  s21_s.insert(3.0);
  s21_s.insert(4.0);
  std::set<double> std_s;
  std_s.insert(1.0);
  std_s.insert(2.0);
  std_s.insert(3.0);
  std_s.insert(4.0);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<double> s21_s2(s21_s);
  std::set<double> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<double> s21_s3 = std::move(s21_s);
  std::set<double> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert20) {
  s21::set<char> s21_s;
  s21_s.insert('a');
  s21_s.insert('s');
  s21_s.insert('d');
  s21_s.insert('f');
  std::set<char> std_s;
  std_s.insert('a');
  std_s.insert('s');
  std_s.insert('d');
  std_s.insert('f');
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<char> s21_s2(s21_s);
  std::set<char> std_s2(std_s);
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<char> s21_s3 = std::move(s21_s);
  std::set<char> std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
}

TEST(s21_set_test, Insert21) {
  s21::set<std::string> s21_s({"key1", "key2", "key3", "key4", "key5"});
  std::set<std::string> std_s = {"key1", "key2", "key3", "key4", "key5"};
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<std::string> s21_s2;
  s21_s2 = s21_s;
  std::set<std::string> std_s2;
  std_s2 = std_s;
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<std::string> s21_s3;
  s21_s3 = std::move(s21_s);
  std::set<std::string> std_s3;
  std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  auto s21_it = s21_s.find("key1");
  ASSERT_EQ(s21_it == s21_s.end(), true);
  s21_it = s21_s2.find("key1");
  auto std_it = std_s2.find("key1");
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_set_test, Insert22) {
  s21::set<int> s21_s({1, 2, 3, 4, 5});
  std::set<int> std_s = {1, 2, 3, 4, 5};
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<int> s21_s2;
  s21_s2 = s21_s;
  std::set<int> std_s2;
  std_s2 = std_s;
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<int> s21_s3;
  s21_s3 = std::move(s21_s);
  std::set<int> std_s3;
  std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  auto s21_it = s21_s.find(1);
  ASSERT_EQ(s21_it == s21_s.end(), true);
  s21_it = s21_s2.find(1);
  auto std_it = std_s2.find(1);
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_set_test, Insert23) {
  s21::set<float> s21_s({1.0, 2.0, 3.0, 4.0, 5.0});
  std::set<float> std_s = {1.0, 2.0, 3.0, 4.0, 5.0};
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<float> s21_s2;
  s21_s2 = s21_s;
  std::set<float> std_s2;
  std_s2 = std_s;
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<float> s21_s3;
  s21_s3 = std::move(s21_s);
  std::set<float> std_s3;
  std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  auto s21_it = s21_s.find(1.0);
  ASSERT_EQ(s21_it == s21_s.end(), true);
  s21_it = s21_s2.find(1.0);
  auto std_it = std_s2.find(1.0);
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_set_test, Insert24) {
  s21::set<double> s21_s({1.0, 2.0, 3.0, 4.0, 5.0});
  std::set<double> std_s = {1.0, 2.0, 3.0, 4.0, 5.0};
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<double> s21_s2;
  s21_s2 = s21_s;
  std::set<double> std_s2;
  std_s2 = std_s;
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<double> s21_s3;
  s21_s3 = std::move(s21_s);
  std::set<double> std_s3;
  std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  auto s21_it = s21_s.find(1.0);
  ASSERT_EQ(s21_it == s21_s.end(), true);
  s21_it = s21_s2.find(1.0);
  auto std_it = std_s2.find(1.0);
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_set_test, Insert25) {
  s21::set<char> s21_s({'a', 's', 'd', 'f', 'g'});
  std::set<char> std_s = {'a', 's', 'd', 'f', 'g'};
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  s21::set<char> s21_s2;
  s21_s2 = s21_s;
  std::set<char> std_s2;
  std_s2 = std_s;
  ASSERT_EQ(s21_s2.size(), std_s2.size());
  ASSERT_EQ(s21_s2.empty(), std_s2.empty());
  s21::set<char> s21_s3;
  s21_s3 = std::move(s21_s);
  std::set<char> std_s3;
  std_s3 = std::move(std_s);
  ASSERT_EQ(s21_s.size(), std_s.size());
  ASSERT_EQ(s21_s.empty(), std_s.empty());
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  s21_s3.clear();
  std_s3.clear();
  ASSERT_EQ(s21_s3.size(), std_s3.size());
  ASSERT_EQ(s21_s3.empty(), std_s3.empty());
  auto s21_it = s21_s.find('a');
  ASSERT_EQ(s21_it == s21_s.end(), true);
  s21_it = s21_s2.find('a');
  auto std_it = std_s2.find('a');
  ASSERT_EQ(*s21_it, *std_it);
}

TEST(s21_set_test, erase1) {
  s21::set<int> s21_s;
  std::set<int> std_s;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(i);
    std_s.insert(i);
  }
  ASSERT_EQ(s21_s.size(), std_s.size());
  auto s21_it = s21_s.end();
  auto std_it = std_s.end();
  --s21_it;
  --std_it;
  s21_s.erase(s21_it);
  std_s.erase(std_it);
  ASSERT_EQ(s21_s.size(), std_s.size());
  s21_it = s21_s.end();
  std_it = std_s.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}

TEST(s21_set_test, erase2) {
  s21::set<double> s21_s;
  std::set<double> std_s;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(i);
    std_s.insert(i);
  }
  ASSERT_EQ(s21_s.size(), std_s.size());
  auto s21_it = s21_s.end();
  auto std_it = std_s.end();
  --s21_it;
  --std_it;
  s21_s.erase(s21_it);
  std_s.erase(std_it);
  ASSERT_EQ(s21_s.size(), std_s.size());
  s21_it = s21_s.end();
  std_it = std_s.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}

TEST(s21_set_test, erase3) {
  s21::set<float> s21_s;
  std::set<float> std_s;
  for (float i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(i);
    std_s.insert(i);
  }
  ASSERT_EQ(s21_s.size(), std_s.size());
  auto s21_it = s21_s.end();
  auto std_it = std_s.end();
  --s21_it;
  --std_it;
  s21_s.erase(s21_it);
  std_s.erase(std_it);
  ASSERT_EQ(s21_s.size(), std_s.size());
  s21_it = s21_s.end();
  std_it = std_s.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}

TEST(s21_set_test, erase4) {
  s21::set<char> s21_s;
  std::set<char> std_s;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    s21_s.insert(i);
    std_s.insert(i);
  }
  ASSERT_EQ(s21_s.size(), std_s.size());
  auto s21_it = s21_s.end();
  auto std_it = std_s.end();
  --s21_it;
  --std_it;
  s21_s.erase(s21_it);
  std_s.erase(std_it);
  ASSERT_EQ(s21_s.size(), std_s.size());
  s21_it = s21_s.end();
  std_it = std_s.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}

TEST(s21_set_test, erase5) {
  s21::set<std::string> s21_s;
  std::set<std::string> std_s;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(str);
    std_s.insert(str);
  }
  ASSERT_EQ(s21_s.size(), std_s.size());
  auto s21_it = s21_s.end();
  auto std_it = std_s.end();
  --s21_it;
  --std_it;
  s21_s.erase(s21_it);
  std_s.erase(std_it);
  ASSERT_EQ(s21_s.size(), std_s.size());
  s21_it = s21_s.end();
  std_it = std_s.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(*s21_it, *std_it);

  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}

TEST(s21_set_test, Iterator1) {
  s21::set<int> s21_s;
  std::set<int> std_s;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(i);
    std_s.insert(i);
  }
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_s.end();
  std_it = std_s.end();
  while (s21_it != s21_s.begin() && std_it != std_s.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_s.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}
TEST(s21_set_test, Iterator2) {
  s21::set<double> s21_s;
  std::set<double> std_s;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(i);
    std_s.insert(i);
  }
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_s.end();
  std_it = std_s.end();
  while (s21_it != s21_s.begin() && std_it != std_s.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_s.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}
TEST(s21_set_test, Iterator3) {
  s21::set<float> s21_s;
  std::set<float> std_s;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(i);
    std_s.insert(i);
  }
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_s.end();
  std_it = std_s.end();
  while (s21_it != s21_s.begin() && std_it != std_s.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_s.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}
TEST(s21_set_test, Iterator4) {
  s21::set<char> s21_s;
  std::set<char> std_s;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    s21_s.insert(i);
    std_s.insert(i);
  }
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_s.end();
  std_it = std_s.end();
  while (s21_it != s21_s.begin() && std_it != std_s.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_s.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}
TEST(s21_set_test, Iterator5) {
  s21::set<std::string> s21_s;
  std::set<std::string> std_s;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_s.insert(str);
    std_s.insert(str);
  }
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_s.end();
  std_it = std_s.end();
  while (s21_it != s21_s.begin() && std_it != std_s.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(*s21_it, *std_it);
  }
  if (s21_it == s21_s.begin()) {
    ASSERT_EQ(*s21_it, *std_it);
  }
  s21_s.clear();
  s21_s.clear();
  ASSERT_EQ(s21_s.size(), s21_s.size());
  ASSERT_EQ(s21_s.empty(), s21_s.empty());
}
TEST(s21_set_test, merge1) {
  s21::set<int> s21_s({1, 2, 3});
  s21::set<int> s21_s2({4, 5, 2});
  std::set<int> std_s = {1, 2, 3};
  std::set<int> std_s2 = {4, 5, 2};
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_s2.begin();
  std_it = std_s2.begin();
  while (s21_it != s21_s2.end() && std_it != std_s2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_s.contains(1), true);
  ASSERT_EQ(s21_s2.contains(4), false);
}
TEST(s21_set_test, merge2) {
  s21::set<double> s21_s({1.0, 2.0, 3.0});
  s21::set<double> s21_s2({4.0, 5.0, 2.0});
  std::set<double> std_s = {1.0, 2.0, 3.0};
  std::set<double> std_s2 = {4.0, 5.0, 2.0};
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_s2.begin();
  std_it = std_s2.begin();
  while (s21_it != s21_s2.end() && std_it != std_s2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_s.contains(1.0), true);
  ASSERT_EQ(s21_s2.contains(4.0), false);
}
TEST(s21_set_test, merge3) {
  s21::set<float> s21_s({1.0, 2.0, 3.0});
  s21::set<float> s21_s2({4.0, 5.0, 2.0});
  std::set<float> std_s = {1.0, 2.0, 3.0};
  std::set<float> std_s2 = {4.0, 5.0, 2.0};
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_s2.begin();
  std_it = std_s2.begin();
  while (s21_it != s21_s2.end() && std_it != std_s2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_s.contains(1.0), true);
  ASSERT_EQ(s21_s2.contains(4.0), false);
}
TEST(s21_set_test, merge4) {
  s21::set<char> s21_s({'a', 's', 'd'});
  s21::set<char> s21_s2({'f', 'g', 's'});
  std::set<char> std_s = {'a', 's', 'd'};
  std::set<char> std_s2 = {'f', 'g', 's'};
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  s21_it = s21_s2.begin();
  std_it = std_s2.begin();
  while (s21_it != s21_s2.end() && std_it != std_s2.end()) {
    ASSERT_EQ(*s21_it, *std_it);

    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_s.contains('a'), true);
  ASSERT_EQ(s21_s2.contains('f'), false);
}
TEST(s21_set_test, merge5) {
  s21::set<std::string> s21_s({"key1", "key2", "key3"});
  s21::set<std::string> s21_s2({"key4", "key5", "key2"});
  std::set<std::string> std_s = {"key1", "key2", "key3"};
  std::set<std::string> std_s2 = {"key4", "key5", "key2"};
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  s21_s.merge(s21_s2);
  std_s.merge(std_s2);
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_s2.begin();
  std_it = std_s2.begin();
  while (s21_it != s21_s2.end() && std_it != std_s2.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_s.contains("key1"), true);
  ASSERT_EQ(s21_s2.contains("key4"), false);
}
TEST(s21_set_test, insert_many1) {
  s21::set<int> s21_s{1, 2, 3, 4, 5};
  s21_s.insert_many(6, 7, 8);
  std::set<int> std_s{1, 6, 7, 8, 2, 3, 4, 5};
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_set_test, insert_many2) {
  s21::set<double> s21_s{1.6, 2.7, 3.8, 4.9, 5.91};
  s21_s.insert_many(6.7, 8.46);
  std::set<double> std_s{1.6, 6.7, 8.46, 2.7, 3.8, 4.9, 5.91};
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_set_test, insert_many3) {
  s21::set<float> s21_s{1.6, 2.7, 3.8, 4.9, 5.91};
  s21_s.insert_many(6.7, 8.46);
  std::set<float> std_s{1.6, 6.7, 8.46, 2.7, 3.8, 4.9, 5.91};
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_set_test, insert_many4) {
  s21::set<char> s21_s{'q', 'w', 'e', 'r', 't', 'y'};
  s21_s.insert_many('z', 'x', 'c');
  std::set<char> std_s{'q', 'z', 'x', 'c', 'w', 'e', 'r', 't', 'y'};
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}

TEST(s21_set_test, insert_many5) {
  s21::set<std::string> s21_s({"Qwerty", "aSdf", "Hello world!"});
  s21_s.insert_many("zxcv", "jkl;'");
  std::set<std::string> std_s{"Qwerty", "zxcv", "jkl;'", "aSdf",
                              "Hello world!"};
  auto s21_it = s21_s.begin();
  auto std_it = std_s.begin();
  while (s21_it != s21_s.end() && std_it != std_s.end()) {
    ASSERT_EQ(*s21_it, *std_it);
    ++s21_it;
    ++std_it;
  }
}