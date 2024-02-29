#include <gtest/gtest.h>

#include <map>

#include "s21_map.h"

// TODO add teset with insert same key
TEST(s21_map_test, constractor1) {
  s21::map<int, std::string> s21_m;
  std::map<int, std::string> std_m;
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<int, std::string> s21_m2(s21_m);
  std::map<int, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<int, std::string> s21_m3 = std::move(s21_m);
  std::map<int, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_ANY_THROW(s21_m.at(1));
  s21_m[1];
  std_m[1];
  s21::map<int, std::string>::const_iterator kS21It = s21_m.cbegin();
  std::map<int, std::string>::const_iterator kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m[1] = "value1";
  std_m[1] = "value1";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m[2] = "value2";
  std_m[2] = "value2";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
}

TEST(s21_map_test, constractor2) {
  s21::map<double, std::string> s21_m;
  std::map<double, std::string> std_m;
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<double, std::string> s21_m2(s21_m);
  std::map<double, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<double, std::string> s21_m3 = std::move(s21_m);
  std::map<double, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_ANY_THROW(s21_m.at(1.0));
  s21_m[1.0];
  std_m[1.0];
  s21::map<double, std::string>::const_iterator kS21It = s21_m.cbegin();
  std::map<double, std::string>::const_iterator kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m[1.0] = "value1";
  std_m[1.0] = "value1";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m[2.0] = "value2";
  std_m[2.0] = "value2";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
}

TEST(s21_map_test, constractor3) {
  s21::map<float, std::string> s21_m;
  std::map<float, std::string> std_m;
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<float, std::string> s21_m2(s21_m);
  std::map<float, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<float, std::string> s21_m3 = std::move(s21_m);
  std::map<float, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_ANY_THROW(s21_m.at(1.0));
  s21_m[1.0];
  std_m[1.0];
  s21::map<float, std::string>::const_iterator kS21It = s21_m.cbegin();
  std::map<float, std::string>::const_iterator kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m[1.0] = "value1";
  std_m[1.0] = "value1";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m[2.0] = "value2";
  std_m[2.0] = "value2";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
}

TEST(s21_map_test, constractor4) {
  s21::map<char, std::string> s21_m;
  std::map<char, std::string> std_m;
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<char, std::string> s21_m2(s21_m);
  std::map<char, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<char, std::string> s21_m3 = std::move(s21_m);
  std::map<char, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_ANY_THROW(s21_m.at('a'));
  s21_m['a'];
  std_m['a'];
  s21::map<char, std::string>::const_iterator kS21It = s21_m.cbegin();
  std::map<char, std::string>::const_iterator kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m['a'] = "value1";
  std_m['a'] = "value1";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m['s'] = "value2";
  std_m['s'] = "value2";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
}

TEST(s21_map_test, constractor5) {
  s21::map<std::string, std::string> s21_m;
  std::map<std::string, std::string> std_m;
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<std::string, std::string> s21_m2(s21_m);
  std::map<std::string, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<std::string, std::string> s21_m3 = std::move(s21_m);
  std::map<std::string, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_ANY_THROW(s21_m.at("key1"));
  s21_m["key1"];
  std_m["key1"];
  s21::map<std::string, std::string>::const_iterator kS21It = s21_m.cbegin();
  std::map<std::string, std::string>::const_iterator kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m["key1"] = "value1";
  std_m["key1"] = "value1";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
  s21_m["key1"] = "value2";
  std_m["key1"] = "value2";
  kS21It = s21_m.cbegin();
  kStdIt = std_m.cbegin();
  while (kS21It != s21_m.cend() && kStdIt != std_m.cend()) {
    ASSERT_EQ(kS21It->first, kStdIt->first);
    ASSERT_EQ(kS21It->second, kStdIt->second);
    ++kS21It;
    ++kStdIt;
  }
}

TEST(s21_map_test, Insert1) {
  s21::map<std::string, int> s21_m;
  s21_m.insert({"key1", 1});
  std::map<std::string, int> std_m;
  std_m.insert({"key1", 1});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<std::string, int> s21_m2(s21_m);
  std::map<std::string, int> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<std::string, int> s21_m3 = std::move(s21_m);
  std::map<std::string, int> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_EQ(s21_m3.at("key1"), std_m3.at("key1"));
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert2) {
  s21::map<int, float> s21_m;
  s21_m.insert({1, 1.2});
  std::map<int, float> std_m;
  std_m.insert({1, 1.2});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<int, float> s21_m2(s21_m);
  std::map<int, float> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<int, float> s21_m3 = std::move(s21_m);
  std::map<int, float> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_EQ(s21_m3.at(1), std_m3.at(1));
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert3) {
  s21::map<float, double> s21_m;
  s21_m.insert({1.0, 2.3});
  std::map<float, double> std_m;
  std_m.insert({1.0, 2.3});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<float, double> s21_m2(s21_m);
  std::map<float, double> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<float, double> s21_m3 = std::move(s21_m);
  std::map<float, double> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_EQ(s21_m3.at(1.0), std_m3.at(1.0));
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert4) {
  s21::map<double, char> s21_m;
  s21_m.insert({1.0, 'a'});
  std::map<double, char> std_m;
  std_m.insert({1.0, 'a'});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<double, char> s21_m2(s21_m);
  std::map<double, char> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<double, char> s21_m3 = std::move(s21_m);
  std::map<double, char> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_EQ(s21_m3.at(1.0), std_m3.at(1.0));
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert5) {
  s21::map<char, std::string> s21_m;
  s21_m.insert({'a', "value1"});
  std::map<char, std::string> std_m;
  std_m.insert({'a', "value1"});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<char, std::string> s21_m2(s21_m);
  std::map<char, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<char, std::string> s21_m3 = std::move(s21_m);
  std::map<char, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  ASSERT_EQ(s21_m3.at('a'), std_m3.at('a'));
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert6) {
  s21::map<std::string, int> s21_m;
  s21_m.insert({"key1", 1});
  s21_m.insert({"key2", 2});
  std::map<std::string, int> std_m;
  std_m.insert({"key1", 1});
  std_m.insert({"key2", 2});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<std::string, int> s21_m2(s21_m);
  std::map<std::string, int> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<std::string, int> s21_m3 = std::move(s21_m);
  std::map<std::string, int> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert7) {
  s21::map<int, float> s21_m;
  s21_m.insert({1, 1.2});
  s21_m.insert({2, 2.2});
  std::map<int, float> std_m;
  std_m.insert({1, 1.2});
  std_m.insert({2, 2.2});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<int, float> s21_m2(s21_m);
  std::map<int, float> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<int, float> s21_m3 = std::move(s21_m);
  std::map<int, float> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert8) {
  s21::map<float, double> s21_m;
  s21_m.insert({1.0, 1.3});
  s21_m.insert({2.0, 2.3});
  std::map<float, double> std_m;
  std_m.insert({1.0, 1.3});
  std_m.insert({2.0, 2.3});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<float, double> s21_m2(s21_m);
  std::map<float, double> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<float, double> s21_m3 = std::move(s21_m);
  std::map<float, double> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert9) {
  s21::map<double, char> s21_m;
  s21_m.insert({1.0, 'a'});
  s21_m.insert({2.0, 's'});
  std::map<double, char> std_m;
  std_m.insert({1.0, 'a'});
  std_m.insert({2.0, 's'});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<double, char> s21_m2(s21_m);
  std::map<double, char> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<double, char> s21_m3 = std::move(s21_m);
  std::map<double, char> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert10) {
  s21::map<char, std::string> s21_m;
  s21_m.insert({'a', "value1"});
  s21_m.insert({'s', "value2"});
  std::map<char, std::string> std_m;
  std_m.insert({'a', "value1"});
  std_m.insert({'s', "value2"});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<char, std::string> s21_m2(s21_m);
  std::map<char, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<char, std::string> s21_m3 = std::move(s21_m);
  std::map<char, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert11) {
  s21::map<std::string, int> s21_m;
  s21_m.insert({"key1", 1});
  s21_m.insert({"key2", 2});
  s21_m.insert({"key3", 3});
  std::map<std::string, int> std_m;
  std_m.insert({"key1", 1});
  std_m.insert({"key2", 2});
  std_m.insert({"key3", 3});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<std::string, int> s21_m2(s21_m);
  std::map<std::string, int> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<std::string, int> s21_m3 = std::move(s21_m);
  std::map<std::string, int> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert12) {
  s21::map<int, float> s21_m;
  s21_m.insert({1, 1.2});
  s21_m.insert({2, 2.2});
  s21_m.insert({3, 3.2});
  std::map<int, float> std_m;
  std_m.insert({1, 1.2});
  std_m.insert({2, 2.2});
  std_m.insert({3, 3.2});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<int, float> s21_m2(s21_m);
  std::map<int, float> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<int, float> s21_m3 = std::move(s21_m);
  std::map<int, float> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert13) {
  s21::map<float, double> s21_m;
  s21_m.insert({1.0, 1.3});
  s21_m.insert({2.0, 2.3});
  s21_m.insert({3.0, 3.3});
  std::map<float, double> std_m;
  std_m.insert({1.0, 1.3});
  std_m.insert({2.0, 2.3});
  std_m.insert({3.0, 3.3});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<float, double> s21_m2(s21_m);
  std::map<float, double> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<float, double> s21_m3 = std::move(s21_m);
  std::map<float, double> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert14) {
  s21::map<double, char> s21_m;
  s21_m.insert({1.0, 'a'});
  s21_m.insert({2.0, 's'});
  s21_m.insert({3.0, 'd'});
  std::map<double, char> std_m;
  std_m.insert({1.0, 'a'});
  std_m.insert({2.0, 's'});
  std_m.insert({3.0, 'd'});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<double, char> s21_m2(s21_m);
  std::map<double, char> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<double, char> s21_m3 = std::move(s21_m);
  std::map<double, char> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert15) {
  s21::map<char, std::string> s21_m;
  s21_m.insert({'a', "value1"});
  s21_m.insert({'s', "value2"});
  s21_m.insert({'d', "value3"});
  std::map<char, std::string> std_m;
  std_m.insert({'a', "value1"});
  std_m.insert({'s', "value2"});
  std_m.insert({'d', "value3"});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<char, std::string> s21_m2(s21_m);
  std::map<char, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<char, std::string> s21_m3 = std::move(s21_m);
  std::map<char, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert16) {
  s21::map<std::string, int> s21_m;
  s21_m.insert({"key1", 1});
  s21_m.insert({"key2", 2});
  s21_m.insert({"key3", 3});
  s21_m.insert({"key4", 4});
  std::map<std::string, int> std_m;
  std_m.insert({"key1", 1});
  std_m.insert({"key2", 2});
  std_m.insert({"key3", 3});
  std_m.insert({"key4", 4});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<std::string, int> s21_m2(s21_m);
  std::map<std::string, int> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<std::string, int> s21_m3 = std::move(s21_m);
  std::map<std::string, int> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert17) {
  s21::map<int, float> s21_m;
  s21_m.insert({1, 1.2});
  s21_m.insert({2, 2.2});
  s21_m.insert({3, 3.2});
  s21_m.insert({4, 4.2});
  std::map<int, float> std_m;
  std_m.insert({1, 1.2});
  std_m.insert({2, 2.2});
  std_m.insert({3, 3.2});
  std_m.insert({4, 4.2});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<int, float> s21_m2(s21_m);
  std::map<int, float> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<int, float> s21_m3 = std::move(s21_m);
  std::map<int, float> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert18) {
  s21::map<float, double> s21_m;
  s21_m.insert({1.0, 1.3});
  s21_m.insert({2.0, 2.3});
  s21_m.insert({3.0, 3.3});
  s21_m.insert({4.0, 4.3});
  std::map<float, double> std_m;
  std_m.insert({1.0, 1.3});
  std_m.insert({2.0, 2.3});
  std_m.insert({3.0, 3.3});
  std_m.insert({4.0, 4.3});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<float, double> s21_m2(s21_m);
  std::map<float, double> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<float, double> s21_m3 = std::move(s21_m);
  std::map<float, double> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert19) {
  s21::map<double, char> s21_m;
  s21_m.insert({1.0, 'a'});
  s21_m.insert({2.0, 's'});
  s21_m.insert({3.0, 'd'});
  s21_m.insert({4.0, 'f'});
  std::map<double, char> std_m;
  std_m.insert({1.0, 'a'});
  std_m.insert({2.0, 's'});
  std_m.insert({3.0, 'd'});
  std_m.insert({4.0, 'f'});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<double, char> s21_m2(s21_m);
  std::map<double, char> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<double, char> s21_m3 = std::move(s21_m);
  std::map<double, char> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert20) {
  s21::map<char, std::string> s21_m;
  s21_m.insert({'a', "value1"});
  s21_m.insert({'s', "value2"});
  s21_m.insert({'d', "value3"});
  s21_m.insert({'f', "value4"});
  std::map<char, std::string> std_m;
  std_m.insert({'a', "value1"});
  std_m.insert({'s', "value2"});
  std_m.insert({'d', "value3"});
  std_m.insert({'f', "value4"});
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<char, std::string> s21_m2(s21_m);
  std::map<char, std::string> std_m2(std_m);
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<char, std::string> s21_m3 = std::move(s21_m);
  std::map<char, std::string> std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert21) {
  s21::map<std::string, int> s21_m{
      {"key1", 1}, {"key2", 2}, {"key3", 3}, {"key4", 4}, {"key5", 5}};
  std::map<std::string, int> std_m = {
      {"key1", 1}, {"key2", 2}, {"key3", 3}, {"key4", 4}, {"key5", 5}};
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<std::string, int> s21_m2;
  s21_m2 = s21_m;
  std::map<std::string, int> std_m2;
  std_m2 = std_m;
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<std::string, int> s21_m3;
  s21_m3 = std::move(s21_m);
  std::map<std::string, int> std_m3;
  std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert22) {
  s21::map<int, float> s21_m{{1, 1.2}, {2, 2.2}, {3, 3.2}, {4, 4.2}, {5, 5.2}};
  std::map<int, float> std_m = {
      {1, 1.2}, {2, 2.2}, {3, 3.2}, {4, 4.2}, {5, 5.2}};
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<int, float> s21_m2;
  s21_m2 = s21_m;
  std::map<int, float> std_m2;
  std_m2 = std_m;
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<int, float> s21_m3;
  s21_m3 = std::move(s21_m);
  std::map<int, float> std_m3;
  std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert23) {
  s21::map<float, double> s21_m{
      {1.0, 1.2}, {2.0, 2.2}, {3.0, 3.2}, {4.0, 4.2}, {5.0, 5.2}};
  std::map<float, double> std_m = {
      {1.0, 1.2}, {2.0, 2.2}, {3.0, 3.2}, {4.0, 4.2}, {5.0, 5.2}};
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<float, double> s21_m2;
  s21_m2 = s21_m;
  std::map<float, double> std_m2;
  std_m2 = std_m;
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<float, double> s21_m3;
  s21_m3 = std::move(s21_m);
  std::map<float, double> std_m3;
  std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert24) {
  s21::map<double, char> s21_m{
      {1.0, 'a'}, {2.0, 's'}, {3.0, 'd'}, {4.0, 'f'}, {5.0, 'g'}};
  std::map<double, char> std_m = {
      {1.0, 'a'}, {2.0, 's'}, {3.0, 'd'}, {4.0, 'f'}, {5.0, 'g'}};
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<double, char> s21_m2;
  s21_m2 = s21_m;
  std::map<double, char> std_m2;
  std_m2 = std_m;
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<double, char> s21_m3;
  s21_m3 = std::move(s21_m);
  std::map<double, char> std_m3;
  std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, Insert25) {
  s21::map<char, std::string> s21_m{{'a', "value1"},
                                    {'s', "value2"},
                                    {'d', "value3"},
                                    {'f', "value4"},
                                    {'g', "value5"}};
  std::map<char, std::string> std_m = {{'a', "value1"},
                                       {'s', "value2"},
                                       {'d', "value3"},
                                       {'f', "value4"},
                                       {'g', "value5"}};
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  s21::map<char, std::string> s21_m2;
  s21_m2 = s21_m;
  std::map<char, std::string> std_m2;
  std_m2 = std_m;
  ASSERT_EQ(s21_m2.size(), std_m2.size());
  ASSERT_EQ(s21_m2.empty(), std_m2.empty());
  s21::map<char, std::string> s21_m3;
  s21_m3 = std::move(s21_m);
  std::map<char, std::string> std_m3;
  std_m3 = std::move(std_m);
  ASSERT_EQ(s21_m.size(), std_m.size());
  ASSERT_EQ(s21_m.empty(), std_m.empty());
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
  s21_m3.clear();
  std_m3.clear();
  ASSERT_EQ(s21_m3.size(), std_m3.size());
  ASSERT_EQ(s21_m3.empty(), std_m3.empty());
}

TEST(s21_map_test, erase1) {
  s21::map<int, std::string> s21_m;
  std::map<int, std::string> std_m;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert(i, str);
    std_m.insert({i, str});
  }
  ASSERT_EQ(s21_m.size(), std_m.size());
  auto s21_it = s21_m.end();
  auto std_it = std_m.end();
  --s21_it;
  --std_it;
  s21_m.erase(s21_it);
  std_m.erase(std_it);
  ASSERT_EQ(s21_m.size(), std_m.size());
  s21_it = s21_m.end();
  std_it = std_m.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(s21_it->first, std_it->first);
  ASSERT_EQ(s21_it->second, std_it->second);
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}

TEST(s21_map_test, erase2) {
  s21::map<double, std::string> s21_m;
  std::map<double, std::string> std_m;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert(i, str);
    std_m.insert({i, str});
  }
  ASSERT_EQ(s21_m.size(), std_m.size());
  auto s21_it = s21_m.end();
  auto std_it = std_m.end();
  --s21_it;
  --std_it;
  s21_m.erase(s21_it);
  std_m.erase(std_it);
  ASSERT_EQ(s21_m.size(), std_m.size());
  s21_it = s21_m.end();
  std_it = std_m.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(s21_it->first, std_it->first);
  ASSERT_EQ(s21_it->second, std_it->second);
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}

TEST(s21_map_test, erase3) {
  s21::map<float, std::string> s21_m;
  std::map<float, std::string> std_m;
  for (float i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert(i, str);
    std_m.insert({i, str});
  }
  ASSERT_EQ(s21_m.size(), std_m.size());
  auto s21_it = s21_m.end();
  auto std_it = std_m.end();
  --s21_it;
  --std_it;
  s21_m.erase(s21_it);
  std_m.erase(std_it);
  ASSERT_EQ(s21_m.size(), std_m.size());
  s21_it = s21_m.end();
  std_it = std_m.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(s21_it->first, std_it->first);
  ASSERT_EQ(s21_it->second, std_it->second);
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}

TEST(s21_map_test, erase4) {
  s21::map<char, std::string> s21_m;
  std::map<char, std::string> std_m;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    s21_m.insert(i, str);
    std_m.insert({i, str});
  }
  ASSERT_EQ(s21_m.size(), std_m.size());
  auto s21_it = s21_m.end();
  auto std_it = std_m.end();
  --s21_it;
  --std_it;
  s21_m.erase(s21_it);
  std_m.erase(std_it);
  ASSERT_EQ(s21_m.size(), std_m.size());
  s21_it = s21_m.end();
  std_it = std_m.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(s21_it->first, std_it->first);
  ASSERT_EQ(s21_it->second, std_it->second);
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}

TEST(s21_map_test, erase5) {
  s21::map<std::string, std::string> s21_m;
  std::map<std::string, std::string> std_m;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert(str, str);
    std_m.insert({str, str});
  }
  ASSERT_EQ(s21_m.size(), std_m.size());
  auto s21_it = s21_m.end();
  auto std_it = std_m.end();
  --s21_it;
  --std_it;
  s21_m.erase(s21_it);
  std_m.erase(std_it);
  ASSERT_EQ(s21_m.size(), std_m.size());
  s21_it = s21_m.end();
  std_it = std_m.end();
  s21_it--;
  --std_it;
  ASSERT_EQ(s21_it->first, std_it->first);
  ASSERT_EQ(s21_it->second, std_it->second);
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}

TEST(s21_map_test, Iterator1) {
  s21::map<int, std::string> s21_m;
  std::map<int, std::string> std_m;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert({i, str});
    std_m.insert({i, str});
  }
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_m.end();
  std_it = std_m.end();
  while (s21_it != s21_m.begin() && std_it != std_m.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  if (s21_it == s21_m.begin()) {
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}
TEST(s21_map_test, Iterator2) {
  s21::map<double, std::string> s21_m;
  std::map<double, std::string> std_m;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert({i, str});
    std_m.insert({i, str});
  }
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_m.end();
  std_it = std_m.end();
  while (s21_it != s21_m.begin() && std_it != std_m.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  if (s21_it == s21_m.begin()) {
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}
TEST(s21_map_test, Iterator3) {
  s21::map<float, std::string> s21_m;
  std::map<float, std::string> std_m;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert({i, str});
    std_m.insert({i, str});
  }
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_m.end();
  std_it = std_m.end();
  while (s21_it != s21_m.begin() && std_it != std_m.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  if (s21_it == s21_m.begin()) {
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}
TEST(s21_map_test, Iterator4) {
  s21::map<char, std::string> s21_m;
  std::map<char, std::string> std_m;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    s21_m.insert({i, str});
    std_m.insert({i, str});
  }
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_m.end();
  std_it = std_m.end();
  while (s21_it != s21_m.begin() && std_it != std_m.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  if (s21_it == s21_m.begin()) {
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}
TEST(s21_map_test, Iterator5) {
  s21::map<std::string, std::string> s21_m;
  std::map<std::string, std::string> std_m;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    s21_m.insert({str, str});
    std_m.insert({str, str});
  }
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    s21_it++;
    ++std_it;
  }
  s21_it = s21_m.end();
  std_it = std_m.end();
  while (s21_it != s21_m.begin() && std_it != std_m.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  if (s21_it == s21_m.begin()) {
    ASSERT_EQ(s21_it->first, std_it->first);
  }
  s21_m.clear();
  s21_m.clear();
  ASSERT_EQ(s21_m.size(), s21_m.size());
  ASSERT_EQ(s21_m.empty(), s21_m.empty());
}
TEST(s21_map_test, insert_or_assign1) {
  s21::map<int, std::string> s21_m;
  std::map<int, std::string> std_m;
  auto s21_pair = s21_m.insert_or_assign(1, "key1");
  auto std_pair = std_m.insert_or_assign(1, "key1");
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_pair = s21_m.insert_or_assign(1, "key2");
  std_pair = std_m.insert_or_assign(1, "key2");
  s21_it = s21_m.begin();
  std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_map_test, insert_or_assign2) {
  s21::map<double, std::string> s21_m;
  std::map<double, std::string> std_m;
  auto s21_pair = s21_m.insert_or_assign(1.0, "key1");
  auto std_pair = std_m.insert_or_assign(1.0, "key1");
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_pair = s21_m.insert_or_assign(1.0, "key2");
  std_pair = std_m.insert_or_assign(1.0, "key2");
  s21_it = s21_m.begin();
  std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_map_test, insert_or_assign3) {
  s21::map<float, std::string> s21_m;
  std::map<float, std::string> std_m;
  auto s21_pair = s21_m.insert_or_assign(1.0, "key1");
  auto std_pair = std_m.insert_or_assign(1.0, "key1");
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_pair = s21_m.insert_or_assign(1.0, "key2");
  std_pair = std_m.insert_or_assign(1.0, "key2");
  s21_it = s21_m.begin();
  std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_map_test, insert_or_assign4) {
  s21::map<char, std::string> s21_m;
  std::map<char, std::string> std_m;
  auto s21_pair = s21_m.insert_or_assign('a', "key1");
  auto std_pair = std_m.insert_or_assign('a', "key1");
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_pair = s21_m.insert_or_assign('a', "key2");
  std_pair = std_m.insert_or_assign('a', "key2");
  s21_it = s21_m.begin();
  std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_map_test, insert_or_assign5) {
  s21::map<std::string, std::string> s21_m;
  std::map<std::string, std::string> std_m;
  auto s21_pair = s21_m.insert_or_assign("key1", "key1");
  auto std_pair = std_m.insert_or_assign("key1", "key1");
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_pair = s21_m.insert_or_assign("key1", "key2");
  std_pair = std_m.insert_or_assign("key1", "key2");
  s21_it = s21_m.begin();
  std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
}
TEST(s21_map_test, merge1) {
  s21::map<int, std::string> s21_m{{1, "value1"}, {2, "value2"}, {3, "value3"}};
  s21::map<int, std::string> s21_m2{
      {4, "value4"}, {5, "value5"}, {2, "value6"}};
  std::map<int, std::string> std_m = {
      {1, "value1"}, {2, "value2"}, {3, "value3"}};
  std::map<int, std::string> std_m2 = {
      {4, "value4"}, {5, "value5"}, {2, "value6"}};
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_m2.begin();
  std_it = std_m2.begin();
  while (s21_it != s21_m2.end() && std_it != std_m2.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_m.contains(1), true);
  ASSERT_EQ(s21_m2.contains(4), false);
}
TEST(s21_map_test, merge2) {
  s21::map<double, std::string> s21_m{
      {1.0, "value1"}, {2.0, "value2"}, {3.0, "value3"}};
  s21::map<double, std::string> s21_m2{
      {4.0, "value4"}, {5.0, "value5"}, {2.0, "value6"}};
  std::map<double, std::string> std_m = {
      {1.0, "value1"}, {2.0, "value2"}, {3.0, "value3"}};
  std::map<double, std::string> std_m2 = {
      {4.0, "value4"}, {5.0, "value5"}, {2.0, "value6"}};
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_m2.begin();
  std_it = std_m2.begin();
  while (s21_it != s21_m2.end() && std_it != std_m2.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_m.contains(1.0), true);
  ASSERT_EQ(s21_m2.contains(4.0), false);
}
TEST(s21_map_test, merge3) {
  s21::map<float, std::string> s21_m{
      {1.0, "value1"}, {2.0, "value2"}, {3.0, "value3"}};
  s21::map<float, std::string> s21_m2{
      {4.0, "value4"}, {5.0, "value5"}, {2.0, "value6"}};
  std::map<float, std::string> std_m = {
      {1.0, "value1"}, {2.0, "value2"}, {3.0, "value3"}};
  std::map<float, std::string> std_m2 = {
      {4.0, "value4"}, {5.0, "value5"}, {2.0, "value6"}};
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_m2.begin();
  std_it = std_m2.begin();
  while (s21_it != s21_m2.end() && std_it != std_m2.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_m.contains(1.0), true);
  ASSERT_EQ(s21_m2.contains(4.0), false);
}
TEST(s21_map_test, merge4) {
  s21::map<char, std::string> s21_m{
      {'a', "value1"}, {'s', "value2"}, {'d', "value3"}};
  s21::map<char, std::string> s21_m2{
      {'f', "value4"}, {'g', "value5"}, {'s', "value6"}};
  std::map<char, std::string> std_m = {
      {'a', "value1"}, {'s', "value2"}, {'d', "value3"}};
  std::map<char, std::string> std_m2 = {
      {'f', "value4"}, {'g', "value5"}, {'s', "value6"}};
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_m2.begin();
  std_it = std_m2.begin();
  while (s21_it != s21_m2.end() && std_it != std_m2.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_m.contains('a'), true);
  ASSERT_EQ(s21_m2.contains('f'), false);
}
TEST(s21_map_test, merge5) {
  s21::map<std::string, std::string> s21_m{
      {"key1", "value1"}, {"key2", "value2"}, {"key3", "value3"}};
  s21::map<std::string, std::string> s21_m2{
      {"key4", "value4"}, {"key5", "value5"}, {"key2", "value6"}};
  std::map<std::string, std::string> std_m = {
      {"key1", "value1"}, {"key2", "value2"}, {"key3", "value3"}};
  std::map<std::string, std::string> std_m2 = {
      {"key4", "value4"}, {"key5", "value5"}, {"key2", "value6"}};
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  s21_m.merge(s21_m2);
  std_m.merge(std_m2);
  auto s21_it = s21_m.begin();
  auto std_it = std_m.begin();
  while (s21_it != s21_m.end() && std_it != std_m.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  s21_it = s21_m2.begin();
  std_it = std_m2.begin();
  while (s21_it != s21_m2.end() && std_it != std_m2.end()) {
    ASSERT_EQ(s21_it->first, std_it->first);
    ASSERT_EQ(s21_it->second, std_it->second);
    ++s21_it;
    ++std_it;
  }
  ASSERT_EQ(s21_m.contains("key1"), true);
  ASSERT_EQ(s21_m2.contains("key4"), false);
}