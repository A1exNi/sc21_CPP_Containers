#include <gtest/gtest.h>

#include <list>

#include "s21_list.h"

TEST(s21_list_test, constractor1) {
  s21::list<int> my_l;
  std::list<int> std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.max_size(), std_l.max_size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<int>::iterator my_it = my_l.begin();
  std::list<int>::iterator std_it = std_l.begin();
  ASSERT_EQ((my_it == my_l.end()), (std_it == std_l.end()));
}

TEST(s21_list_test, constractor2) {
  s21::list<double> my_l;
  std::list<double> std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.max_size(), std_l.max_size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<double>::iterator my_it = my_l.begin();
  std::list<double>::iterator std_it = std_l.begin();
  ASSERT_EQ((my_it == my_l.end()), (std_it == std_l.end()));
}

TEST(s21_list_test, constractor3) {
  s21::list<float> my_l;
  std::list<float> std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.max_size(), std_l.max_size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<float>::iterator my_it = my_l.begin();
  std::list<float>::iterator std_it = std_l.begin();
  ASSERT_EQ((my_it == my_l.end()), (std_it == std_l.end()));
}

TEST(s21_list_test, constractor4) {
  s21::list<char> my_l;
  std::list<char> std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.max_size(), std_l.max_size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<char>::iterator my_it = my_l.begin();
  std::list<char>::iterator std_it = std_l.begin();
  ASSERT_EQ((my_it == my_l.end()), (std_it == std_l.end()));
}

TEST(s21_list_test, constractor5) {
  s21::list<std::string> my_l;
  std::list<std::string> std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.max_size(), std_l.max_size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<std::string>::iterator my_it = my_l.begin();
  std::list<std::string>::iterator std_it = std_l.begin();
  ASSERT_EQ((my_it == my_l.end()), (std_it == std_l.end()));
}

TEST(s21_list_test, constractor6) {
  s21::list<int> my_l(5);
  std::list<int> std_l(5);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, constractor7) {
  s21::list<double> my_l(5);
  std::list<double> std_l(5);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, constractor8) {
  s21::list<float> my_l(5);
  std::list<float> std_l(5);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, constractor9) {
  s21::list<char> my_l(5);
  std::list<char> std_l(5);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, constractor10) {
  s21::list<std::string> my_l(5);
  std::list<std::string> std_l(5);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, constractor11) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  std::list<int> std_l{1, 2, 3, 4, 5};
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.front() = 9;
  std_l.front() = 9;
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  my_l.back() = 8;
  std_l.back() = 8;
  ASSERT_EQ(my_l.back(), std_l.back());
  s21::list<int>::iterator my_it = my_l.begin();
  std::list<int>::iterator std_it = std_l.begin();
  while (my_it != my_l.end() && std_it != std_l.end()) {
    ASSERT_EQ(*my_it, *std_it);
    *my_it = 0;
    *std_it = 0;
    ASSERT_EQ(*my_it, *std_it);
    ++my_it;
    ++std_it;
  }
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, constractor12) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.front() = 9.1;
  std_l.front() = 9.1;
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  my_l.back() = 8.2;
  std_l.back() = 8.2;
  ASSERT_EQ(my_l.back(), std_l.back());
  s21::list<double>::iterator my_it = my_l.begin();
  std::list<double>::iterator std_it = std_l.begin();
  while (my_it != my_l.end() && std_it != std_l.end()) {
    ASSERT_EQ(*my_it, *std_it);
    *my_it = 0;
    *std_it = 0;
    ASSERT_EQ(*my_it, *std_it);
    ++my_it;
    ++std_it;
  }
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, constractor13) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.front() = 9.1;
  std_l.front() = 9.1;
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  my_l.back() = 8.2;
  std_l.back() = 8.2;
  ASSERT_EQ(my_l.back(), std_l.back());
  s21::list<float>::iterator my_it = my_l.begin();
  std::list<float>::iterator std_it = std_l.begin();
  while (my_it != my_l.end() && std_it != std_l.end()) {
    ASSERT_EQ(*my_it, *std_it);
    *my_it = 0;
    *std_it = 0;
    ASSERT_EQ(*my_it, *std_it);
    ++my_it;
    ++std_it;
  }
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, constractor14) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.front() = 'a';
  std_l.front() = 'a';
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  my_l.back() = 'z';
  std_l.back() = 'z';
  ASSERT_EQ(my_l.back(), std_l.back());
  s21::list<char>::iterator my_it = my_l.begin();
  std::list<char>::iterator std_it = std_l.begin();
  while (my_it != my_l.end() && std_it != std_l.end()) {
    ASSERT_EQ(*my_it, *std_it);
    *my_it = 'j';
    *std_it = 'j';
    ASSERT_EQ(*my_it, *std_it);
    ++my_it;
    ++std_it;
  }
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, constractor15) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.front() = "asdf";
  std_l.front() = "asdf";
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  my_l.back() = "zxcv";
  std_l.back() = "zxcv";
  ASSERT_EQ(my_l.back(), std_l.back());
  s21::list<std::string>::iterator my_it = my_l.begin();
  std::list<std::string>::iterator std_it = std_l.begin();
  while (my_it != my_l.end() && std_it != std_l.end()) {
    ASSERT_EQ(*my_it, *std_it);
    *my_it = "jkl;";
    *std_it = "jkl;";
    ASSERT_EQ(*my_it, *std_it);
    ++my_it;
    ++std_it;
  }
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, constractor16) {
  s21::list<int> my_l({1, 2, 3, 4, 5});
  const s21::list<int> my_l2(my_l);
  s21::list<int> my_l3;
  my_l3 = my_l;
  std::list<int> std_l = {1, 2, 3, 4, 5};
  const std::list<int> std_l2(std_l);
  std::list<int> std_l3;
  std_l3 = std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, constractor17) {
  s21::list<double> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<double> my_l2(my_l);
  s21::list<double> my_l3;
  my_l3 = my_l;
  std::list<double> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2(std_l);
  std::list<double> std_l3;
  std_l3 = std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, constractor18) {
  s21::list<float> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<float> my_l2(my_l);
  s21::list<float> my_l3;
  my_l3 = my_l;
  std::list<float> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2(std_l);
  std::list<float> std_l3;
  std_l3 = std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, constractor19) {
  s21::list<char> my_l({'q', 'w', 'e', 'r', 't', 'y'});
  s21::list<char> my_l2(my_l);
  s21::list<char> my_l3;
  my_l3 = my_l;
  std::list<char> std_l = {'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2(std_l);
  std::list<char> std_l3;
  std_l3 = std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, constractor20) {
  s21::list<std::string> my_l({"Qwerty", "aSdf", "Hello world!"});
  s21::list<std::string> my_l2(my_l);
  s21::list<std::string> my_l3;
  my_l3 = my_l;
  std::list<std::string> std_l = {"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2(std_l);
  std::list<std::string> std_l3;
  std_l3 = std_l;
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l.front(), std_l.front());
  ASSERT_EQ(my_l.back(), std_l.back());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, clear1) {
  s21::list<int> my_l({1, 2, 3, 4, 5});
  s21::list<int> my_l2({1});
  s21::list<int> my_l3;
  my_l.clear();
  my_l2.clear();
  my_l3.clear();
  std::list<int> std_l = {1, 2, 3, 4, 5};
  std::list<int> std_l2 = {1};
  std::list<int> std_l3;
  std_l.clear();
  std_l2.clear();
  std_l3.clear();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
}

TEST(s21_list_test, clear2) {
  s21::list<double> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<double> my_l2({1.6});
  s21::list<double> my_l3;
  my_l.clear();
  my_l2.clear();
  my_l3.clear();
  std::list<double> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2 = {1.6};
  std::list<double> std_l3;
  std_l.clear();
  std_l2.clear();
  std_l3.clear();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
}

TEST(s21_list_test, clear3) {
  s21::list<float> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<float> my_l2({1.6});
  s21::list<float> my_l3;
  my_l.clear();
  my_l2.clear();
  my_l3.clear();
  std::list<float> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2 = {1.6};
  std::list<float> std_l3;
  std_l.clear();
  std_l2.clear();
  std_l3.clear();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
}

TEST(s21_list_test, clear4) {
  s21::list<char> my_l({'q', 'w', 'e', 'r', 't', 'y'});
  s21::list<char> my_l2({'q'});
  s21::list<char> my_l3;
  my_l.clear();
  my_l2.clear();
  my_l3.clear();
  std::list<char> std_l = {'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2 = {'q'};
  std::list<char> std_l3;
  std_l.clear();
  std_l2.clear();
  std_l3.clear();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
}

TEST(s21_list_test, clear5) {
  s21::list<std::string> my_l({"Qwerty", "aSdf", "Hello world!"});
  s21::list<std::string> my_l2({"Qwerty"});
  s21::list<std::string> my_l3;
  my_l.clear();
  my_l2.clear();
  my_l3.clear();
  std::list<std::string> std_l = {"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2 = {"Qwerty"};
  std::list<std::string> std_l3;
  std_l.clear();
  std_l2.clear();
  std_l3.clear();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
}

TEST(s21_list_test, insert1) {
  s21::list<int> my_l({1, 2, 3, 4, 5});
  s21::list<int>::const_iterator my_it = my_l.cbegin();
  s21::list<int>::iterator my_it2 = my_l.insert(my_it, 0);
  s21::list<int>::const_iterator my_it3 = my_l.cend();
  s21::list<int>::iterator my_it4 = my_l.insert(my_it3, 0);
  s21::list<int>::const_iterator my_it5 = my_l.cbegin();
  for (int i = 0; i < 3; i++) ++my_it5;
  s21::list<int>::iterator my_it6 = my_l.insert(my_it5, 0);

  std::list<int> std_l = {1, 2, 3, 4, 5};
  std::list<int>::iterator std_it = std_l.begin();
  std::list<int>::iterator std_it2 = std_l.insert(std_it, 0);
  std::list<int>::iterator std_it3 = std_l.end();
  std::list<int>::iterator std_it4 = std_l.insert(std_it3, 0);
  std::list<int>::iterator std_it5 = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it5;
  std::list<int>::iterator std_it6 = std_l.insert(std_it5, 0);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  ASSERT_EQ(*my_it4, *std_it4);
  ASSERT_EQ(*my_it6, *std_it6);
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert2) {
  s21::list<int> my_l({1});
  s21::list<int>::const_iterator my_it = my_l.cbegin();
  s21::list<int>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<int> std_l = {1};
  std::list<int>::iterator std_it = std_l.begin();
  std::list<int>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert3) {
  s21::list<int> my_l({1});
  s21::list<int>::const_iterator my_it = my_l.cend();
  s21::list<int>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<int> std_l = {1};
  std::list<int>::iterator std_it = std_l.end();
  std::list<int>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert4) {
  s21::list<int> my_l;
  s21::list<int>::const_iterator my_it = my_l.cbegin();
  s21::list<int>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<int> std_l;
  std::list<int>::iterator std_it = std_l.begin();
  std::list<int>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert5) {
  s21::list<int> my_l;
  s21::list<int>::const_iterator my_it = my_l.cend();
  s21::list<int>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<int> std_l;
  std::list<int>::iterator std_it = std_l.end();
  std::list<int>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert6) {
  s21::list<double> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<double>::const_iterator my_it = my_l.cbegin();
  s21::list<double>::iterator my_it2 = my_l.insert(my_it, 0);
  s21::list<double>::const_iterator my_it3 = my_l.cend();
  s21::list<double>::iterator my_it4 = my_l.insert(my_it3, 0);
  s21::list<double>::const_iterator my_it5 = my_l.cbegin();
  for (int i = 0; i < 3; i++) ++my_it5;
  s21::list<double>::iterator my_it6 = my_l.insert(my_it5, 0);

  std::list<double> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double>::iterator std_it = std_l.begin();
  std::list<double>::iterator std_it2 = std_l.insert(std_it, 0);
  std::list<double>::iterator std_it3 = std_l.end();
  std::list<double>::iterator std_it4 = std_l.insert(std_it3, 0);
  std::list<double>::iterator std_it5 = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it5;
  std::list<double>::iterator std_it6 = std_l.insert(std_it5, 0);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  ASSERT_EQ(*my_it4, *std_it4);
  ASSERT_EQ(*my_it6, *std_it6);
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert7) {
  s21::list<double> my_l({1.6});
  s21::list<double>::const_iterator my_it = my_l.cbegin();
  s21::list<double>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<double> std_l = {1.6};
  std::list<double>::iterator std_it = std_l.begin();
  std::list<double>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert8) {
  s21::list<double> my_l({1.6});
  s21::list<double>::const_iterator my_it = my_l.cend();
  s21::list<double>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<double> std_l = {1.6};
  std::list<double>::iterator std_it = std_l.end();
  std::list<double>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert9) {
  s21::list<double> my_l;
  s21::list<double>::const_iterator my_it = my_l.cbegin();
  s21::list<double>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<double> std_l;
  std::list<double>::iterator std_it = std_l.begin();
  std::list<double>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert10) {
  s21::list<double> my_l;
  s21::list<double>::const_iterator my_it = my_l.cend();
  s21::list<double>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<double> std_l;
  std::list<double>::iterator std_it = std_l.end();
  std::list<double>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert11) {
  s21::list<float> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<float>::const_iterator my_it = my_l.cbegin();
  s21::list<float>::iterator my_it2 = my_l.insert(my_it, 0);
  s21::list<float>::const_iterator my_it3 = my_l.cend();
  s21::list<float>::iterator my_it4 = my_l.insert(my_it3, 0);
  s21::list<float>::const_iterator my_it5 = my_l.cbegin();
  for (int i = 0; i < 3; i++) ++my_it5;
  s21::list<float>::iterator my_it6 = my_l.insert(my_it5, 0);

  std::list<float> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float>::iterator std_it = std_l.begin();
  std::list<float>::iterator std_it2 = std_l.insert(std_it, 0);
  std::list<float>::iterator std_it3 = std_l.end();
  std::list<float>::iterator std_it4 = std_l.insert(std_it3, 0);
  std::list<float>::iterator std_it5 = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it5;
  std::list<float>::iterator std_it6 = std_l.insert(std_it5, 0);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  ASSERT_EQ(*my_it4, *std_it4);
  ASSERT_EQ(*my_it6, *std_it6);
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert12) {
  s21::list<float> my_l({1.6});
  s21::list<float>::const_iterator my_it = my_l.cbegin();
  s21::list<float>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<float> std_l = {1.6};
  std::list<float>::iterator std_it = std_l.begin();
  std::list<float>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert13) {
  s21::list<float> my_l({1.6});
  s21::list<float>::const_iterator my_it = my_l.cend();
  s21::list<float>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<float> std_l = {1.6};
  std::list<float>::iterator std_it = std_l.end();
  std::list<float>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert14) {
  s21::list<float> my_l;
  s21::list<float>::const_iterator my_it = my_l.cbegin();
  s21::list<float>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<float> std_l;
  std::list<float>::iterator std_it = std_l.begin();
  std::list<float>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert15) {
  s21::list<float> my_l;
  s21::list<float>::const_iterator my_it = my_l.cend();
  s21::list<float>::iterator my_it2 = my_l.insert(my_it, 0);
  std::list<float> std_l;
  std::list<float>::iterator std_it = std_l.end();
  std::list<float>::iterator std_it2 = std_l.insert(std_it, 0);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert16) {
  s21::list<char> my_l({'q', 'w', 'e', 'r', 't', 'y'});
  s21::list<char>::const_iterator my_it = my_l.cbegin();
  s21::list<char>::iterator my_it2 = my_l.insert(my_it, 'a');
  s21::list<char>::const_iterator my_it3 = my_l.cend();
  s21::list<char>::iterator my_it4 = my_l.insert(my_it3, 'a');
  s21::list<char>::const_iterator my_it5 = my_l.cbegin();
  for (int i = 0; i < 3; i++) ++my_it5;
  s21::list<char>::iterator my_it6 = my_l.insert(my_it5, 'a');

  std::list<char> std_l = {'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char>::iterator std_it = std_l.begin();
  std::list<char>::iterator std_it2 = std_l.insert(std_it, 'a');
  std::list<char>::iterator std_it3 = std_l.end();
  std::list<char>::iterator std_it4 = std_l.insert(std_it3, 'a');
  std::list<char>::iterator std_it5 = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it5;
  std::list<char>::iterator std_it6 = std_l.insert(std_it5, 'a');

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  ASSERT_EQ(*my_it4, *std_it4);
  ASSERT_EQ(*my_it6, *std_it6);
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert17) {
  s21::list<char> my_l({'q'});
  s21::list<char>::const_iterator my_it = my_l.cbegin();
  s21::list<char>::iterator my_it2 = my_l.insert(my_it, 'a');
  std::list<char> std_l = {'q'};
  std::list<char>::iterator std_it = std_l.begin();
  std::list<char>::iterator std_it2 = std_l.insert(std_it, 'a');
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert18) {
  s21::list<char> my_l({'q'});
  s21::list<char>::const_iterator my_it = my_l.cend();
  s21::list<char>::iterator my_it2 = my_l.insert(my_it, 'a');
  std::list<char> std_l = {'q'};
  std::list<char>::iterator std_it = std_l.end();
  std::list<char>::iterator std_it2 = std_l.insert(std_it, 'a');
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert19) {
  s21::list<char> my_l;
  s21::list<char>::const_iterator my_it = my_l.cbegin();
  s21::list<char>::iterator my_it2 = my_l.insert(my_it, 'a');
  std::list<char> std_l;
  std::list<char>::iterator std_it = std_l.begin();
  std::list<char>::iterator std_it2 = std_l.insert(std_it, 'a');
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert20) {
  s21::list<char> my_l;
  s21::list<char>::const_iterator my_it = my_l.cend();
  s21::list<char>::iterator my_it2 = my_l.insert(my_it, 'a');
  std::list<char> std_l;
  std::list<char>::iterator std_it = std_l.end();
  std::list<char>::iterator std_it2 = std_l.insert(std_it, 'a');
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert21) {
  s21::list<std::string> my_l(
      {"Qwerty", "aSdf", "Hello world!", "123", "[poi]"});
  s21::list<std::string>::const_iterator my_it = my_l.cbegin();
  s21::list<std::string>::iterator my_it2 = my_l.insert(my_it, "zxcv");
  s21::list<std::string>::const_iterator my_it3 = my_l.cend();
  s21::list<std::string>::iterator my_it4 = my_l.insert(my_it3, "zxcv");
  s21::list<std::string>::const_iterator my_it5 = my_l.cbegin();
  for (int i = 0; i < 3; i++) ++my_it5;
  s21::list<std::string>::iterator my_it6 = my_l.insert(my_it5, "zxcv");

  std::list<std::string> std_l = {"Qwerty", "aSdf", "Hello world!", "123",
                                  "[poi]"};
  std::list<std::string>::iterator std_it = std_l.begin();
  std::list<std::string>::iterator std_it2 = std_l.insert(std_it, "zxcv");
  std::list<std::string>::iterator std_it3 = std_l.end();
  std::list<std::string>::iterator std_it4 = std_l.insert(std_it3, "zxcv");
  std::list<std::string>::iterator std_it5 = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it5;
  std::list<std::string>::iterator std_it6 = std_l.insert(std_it5, "zxcv");

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  ASSERT_EQ(*my_it4, *std_it4);
  ASSERT_EQ(*my_it6, *std_it6);
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert22) {
  s21::list<std::string> my_l({"Qwerty"});
  s21::list<std::string>::const_iterator my_it = my_l.cbegin();
  s21::list<std::string>::iterator my_it2 = my_l.insert(my_it, "zxcv");
  std::list<std::string> std_l = {"Qwerty"};
  std::list<std::string>::iterator std_it = std_l.begin();
  std::list<std::string>::iterator std_it2 = std_l.insert(std_it, "zxcv");
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert23) {
  s21::list<std::string> my_l({"Qwerty"});
  s21::list<std::string>::const_iterator my_it = my_l.cend();
  s21::list<std::string>::iterator my_it2 = my_l.insert(my_it, "zxcv");
  std::list<std::string> std_l = {"Qwerty"};
  std::list<std::string>::iterator std_it = std_l.end();
  std::list<std::string>::iterator std_it2 = std_l.insert(std_it, "zxcv");
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert24) {
  s21::list<std::string> my_l;
  s21::list<std::string>::const_iterator my_it = my_l.cbegin();
  s21::list<std::string>::iterator my_it2 = my_l.insert(my_it, "zxcv");
  std::list<std::string> std_l;
  std::list<std::string>::iterator std_it = std_l.begin();
  std::list<std::string>::iterator std_it2 = std_l.insert(std_it, "zxcv");
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert25) {
  s21::list<std::string> my_l;
  s21::list<std::string>::const_iterator my_it = my_l.cend();
  s21::list<std::string>::iterator my_it2 = my_l.insert(my_it, "zxcv");
  std::list<std::string> std_l;
  std::list<std::string>::iterator std_it = std_l.end();
  std::list<std::string>::iterator std_it2 = std_l.insert(std_it, "zxcv");
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(*my_it2, *std_it2);
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, erase1) {
  s21::list<int> my_l({1, 2, 3, 4, 5});
  s21::list<int>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 3; i++) ++my_it;
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 1; i++) ++my_it;
  my_l.erase(my_it);

  std::list<int> std_l = {1, 2, 3, 4, 5};
  std::list<int>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it;
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 1; i++) ++std_it;
  std_l.erase(std_it);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, erase2) {
  s21::list<int> my_l({1});
  s21::list<int>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  std::list<int> std_l = {1};
  std::list<int>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, erase3) {
  s21::list<double> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<double>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 3; i++) ++my_it;
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 1; i++) ++my_it;
  my_l.erase(my_it);

  std::list<double> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it;
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 1; i++) ++std_it;
  std_l.erase(std_it);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, erase4) {
  s21::list<double> my_l({1.6});
  s21::list<double>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  std::list<double> std_l = {1.6};
  std::list<double>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, erase5) {
  s21::list<float> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<float>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 3; i++) ++my_it;
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 1; i++) ++my_it;
  my_l.erase(my_it);

  std::list<float> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it;
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 1; i++) ++std_it;
  std_l.erase(std_it);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, erase6) {
  s21::list<float> my_l({1.6});
  s21::list<float>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  std::list<float> std_l = {1.6};
  std::list<float>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, erase7) {
  s21::list<char> my_l({'q', 'w', 'e', 'r', 't', 'y'});
  s21::list<char>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 3; i++) ++my_it;
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 1; i++) ++my_it;
  my_l.erase(my_it);

  std::list<char> std_l = {'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it;
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 1; i++) ++std_it;
  std_l.erase(std_it);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, erase8) {
  s21::list<char> my_l({'q'});
  s21::list<char>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  std::list<char> std_l = {'q'};
  std::list<char>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, erase9) {
  s21::list<std::string> my_l(
      {"Qwerty", "aSdf", "Hello world!", "123", "[poi]"});
  s21::list<std::string>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 3; i++) ++my_it;
  my_l.erase(my_it);
  my_it = my_l.begin();
  for (int i = 0; i < 1; i++) ++my_it;
  my_l.erase(my_it);

  std::list<std::string> std_l = {"Qwerty", "aSdf", "Hello world!", "123",
                                  "[poi]"};
  std::list<std::string>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 3; i++) ++std_it;
  std_l.erase(std_it);
  std_it = std_l.begin();
  for (int i = 0; i < 1; i++) ++std_it;
  std_l.erase(std_it);

  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, erase10) {
  s21::list<std::string> my_l({"Qwerty"});
  s21::list<std::string>::iterator my_it = my_l.begin();
  my_l.erase(my_it);
  std::list<std::string> std_l({"Qwerty"});
  std::list<std::string>::iterator std_it = std_l.begin();
  std_l.erase(std_it);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, swap1) {
  s21::list<int> my_l({10, 2, 3, 4, 5});
  s21::list<int>::iterator my_it = my_l.begin();
  s21::list<int> my_l2({1});
  s21::list<int> my_l3;
  my_l.swap(my_l2);
  my_l2.swap(my_l3);
  std::list<int> std_l = {10, 2, 3, 4, 5};
  std::list<int>::iterator std_it = std_l.begin();
  std::list<int> std_l2 = {1};
  std::list<int> std_l3;
  std_l.swap(std_l2);
  std_l2.swap(std_l3);
  ASSERT_EQ(*my_it, *std_it);
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  my_cit = my_l3.cbegin();
  std_cit = std_l3.cbegin();
  while (my_cit != my_l3.cend() && std_cit != std_l3.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, swap2) {
  s21::list<double> my_l({1.62, 2.7, 3.8, 4.9, 5.91});
  s21::list<double>::iterator my_it = my_l.begin();
  s21::list<double> my_l2({1.6});
  s21::list<double> my_l3;
  my_l.swap(my_l2);
  my_l2.swap(my_l3);
  std::list<double> std_l = {1.62, 2.7, 3.8, 4.9, 5.91};
  std::list<double>::iterator std_it = std_l.begin();
  std::list<double> std_l2 = {1.6};
  std::list<double> std_l3;
  std_l.swap(std_l2);
  std_l2.swap(std_l3);
  ASSERT_EQ(*my_it, *std_it);
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  my_cit = my_l3.cbegin();
  std_cit = std_l3.cbegin();
  while (my_cit != my_l3.cend() && std_cit != std_l3.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, swap3) {
  s21::list<float> my_l({1.62, 2.7, 3.8, 4.9, 5.91});
  s21::list<float>::iterator my_it = my_l.begin();
  s21::list<float> my_l2({1.6});
  s21::list<float> my_l3;
  my_l.swap(my_l2);
  my_l2.swap(my_l3);
  std::list<float> std_l = {1.62, 2.7, 3.8, 4.9, 5.91};
  std::list<float>::iterator std_it = std_l.begin();
  std::list<float> std_l2 = {1.6};
  std::list<float> std_l3;
  std_l.swap(std_l2);
  std_l2.swap(std_l3);
  ASSERT_EQ(*my_it, *std_it);
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  my_cit = my_l3.cbegin();
  std_cit = std_l3.cbegin();
  while (my_cit != my_l3.cend() && std_cit != std_l3.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, swap4) {
  s21::list<char> my_l({'Q', 'w', 'e', 'r', 't', 'y'});
  s21::list<char>::iterator my_it = my_l.begin();
  s21::list<char> my_l2({'q'});
  s21::list<char> my_l3;
  my_l.swap(my_l2);
  my_l2.swap(my_l3);
  std::list<char> std_l = {'Q', 'w', 'e', 'r', 't', 'y'};
  std::list<char>::iterator std_it = std_l.begin();
  std::list<char> std_l2 = {'q'};
  std::list<char> std_l3;
  std_l.swap(std_l2);
  std_l2.swap(std_l3);
  ASSERT_EQ(*my_it, *std_it);
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  my_cit = my_l3.cbegin();
  std_cit = std_l3.cbegin();
  while (my_cit != my_l3.cend() && std_cit != std_l3.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, swap5) {
  s21::list<std::string> my_l({"QwertY", "aSdf", "Hello world!"});
  s21::list<std::string>::iterator my_it = my_l.begin();
  s21::list<std::string> my_l2({"Qwerty"});
  s21::list<std::string> my_l3;
  my_l.swap(my_l2);
  my_l2.swap(my_l3);
  std::list<std::string> std_l = {"QwertY", "aSdf", "Hello world!"};
  std::list<std::string>::iterator std_it = std_l.begin();
  std::list<std::string> std_l2 = {"Qwerty"};
  std::list<std::string> std_l3;
  std_l.swap(std_l2);
  std_l2.swap(std_l3);
  ASSERT_EQ(*my_it, *std_it);
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  my_cit = my_l3.cbegin();
  std_cit = std_l3.cbegin();
  while (my_cit != my_l3.cend() && std_cit != std_l3.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, merge1) {
  s21::list<int> my_l({5, 9, 1, 3, 3});
  s21::list<int> my_l2({8, 7, 2, 3, 4, 4});
  my_l.sort();
  my_l2.sort();
  my_l.merge(my_l2);
  std::list<int> std_l = {5, 9, 1, 3, 3};
  std::list<int> std_l2 = {8, 7, 2, 3, 4, 4};
  std_l.sort();
  std_l2.sort();
  std_l.merge(std_l2);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, merge2) {
  s21::list<double> my_l({5.2, 9.2, 1.2, 3.2, 3.2});
  s21::list<double> my_l2({8.2, 7.2, 2.2, 3.2, 4.2, 4.2});
  my_l.sort();
  my_l2.sort();
  my_l.merge(my_l2);
  std::list<double> std_l = {5.2, 9.2, 1.2, 3.2, 3.2};
  std::list<double> std_l2 = {8.2, 7.2, 2.2, 3.2, 4.2, 4.2};
  std_l.sort();
  std_l2.sort();
  std_l.merge(std_l2);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, merge3) {
  s21::list<float> my_l({5.2, 9.2, 1.2, 3.2, 3.2});
  s21::list<float> my_l2({8.2, 7.2, 2.2, 3.2, 4.2, 4.2});
  my_l.sort();
  my_l2.sort();
  my_l.merge(my_l2);
  std::list<float> std_l = {5.2, 9.2, 1.2, 3.2, 3.2};
  std::list<float> std_l2 = {8.2, 7.2, 2.2, 3.2, 4.2, 4.2};
  std_l.sort();
  std_l2.sort();
  std_l.merge(std_l2);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, merge4) {
  s21::list<char> my_l({'r', 'z', 'd', 'g', 'g'});
  s21::list<char> my_l2({'w', 's', 'e', 'g', 'q', 'q'});
  my_l.sort();
  my_l2.sort();
  my_l.merge(my_l2);
  std::list<char> std_l = {'r', 'z', 'd', 'g', 'g'};
  std::list<char> std_l2 = {'w', 's', 'e', 'g', 'q', 'q'};
  std_l.sort();
  std_l2.sort();
  std_l.merge(std_l2);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, merge5) {
  s21::list<std::string> my_l({"qwerty", "zxcvb", "asdfg", "jkl;", "jkl;"});
  s21::list<std::string> my_l2(
      {"vbnnm", "uiop", "fghjk", "jkl;", "nm,./", "nm,./"});
  my_l.sort();
  my_l2.sort();
  my_l.merge(my_l2);
  std::list<std::string> std_l = {"qwerty", "zxcvb", "asdfg", "jkl;", "jkl;"};
  std::list<std::string> std_l2 = {"vbnnm", "uiop",  "fghjk",
                                   "jkl;",  "nm,./", "nm,./"};
  std_l.sort();
  std_l2.sort();
  std_l.merge(std_l2);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, reverse1) {
  s21::list<int> my_l({1, 2, 3, 4, 5});
  my_l.reverse();
  std::list<int> std_l = {1, 2, 3, 4, 5};
  std_l.reverse();
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, reverse2) {
  s21::list<double> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  my_l.reverse();
  std::list<double> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std_l.reverse();
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, reverse3) {
  s21::list<float> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  my_l.reverse();
  std::list<float> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std_l.reverse();
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, reverse4) {
  s21::list<char> my_l({'q', 'w', 'e', 'r', 't', 'y'});
  my_l.reverse();
  std::list<char> std_l = {'q', 'w', 'e', 'r', 't', 'y'};
  std_l.reverse();
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, reverse5) {
  s21::list<std::string> my_l({"Qwerty", "aSdf", "Hello world!"});
  my_l.reverse();
  std::list<std::string> std_l = {"Qwerty", "aSdf", "Hello world!"};
  std_l.reverse();
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, unique1) {
  s21::list<int> my_l({1, 2, 2, 3, 3, 2, 1, 1, 2});
  my_l.unique();
  std::list<int> std_l = {1, 2, 2, 3, 3, 2, 1, 1, 2};
  std_l.unique();
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, unique2) {
  s21::list<double> my_l({1.2, 2.3, 2.3, 3.1, 3.1, 2.9, 1.2, 1.2, 2.3});
  my_l.unique();
  std::list<double> std_l = {1.2, 2.3, 2.3, 3.1, 3.1, 2.9, 1.2, 1.2, 2.3};
  std_l.unique();
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, unique3) {
  s21::list<float> my_l({1.2, 2.3, 2.3, 3.1, 3.1, 2.3, 1.2, 1.2, 2.3});
  my_l.unique();
  std::list<float> std_l = {1.2, 2.3, 2.3, 3.1, 3.1, 2.3, 1.2, 1.2, 2.3};
  std_l.unique();
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, unique4) {
  s21::list<char> my_l({'q', 'w', 'w', 'r', 'r', 'w', 'q', 'q', 'w'});
  my_l.unique();
  std::list<char> std_l = {'q', 'w', 'w', 'r', 'r', 'w', 'q', 'q', 'w'};
  std_l.unique();
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, unique5) {
  s21::list<std::string> my_l({"Qwerty", "aSdf", "aSdf", "Hello world!",
                               "Hello world!", "aSdf", "Qwerty", "Qwerty",
                               "aSdf"});
  my_l.unique();
  std::list<std::string> std_l = {"Qwerty",       "aSdf",         "aSdf",
                                  "Hello world!", "Hello world!", "aSdf",
                                  "Qwerty",       "Qwerty",       "aSdf"};
  std_l.unique();
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, push_fornt1) {
  s21::list<int> my_l;
  std::list<int> std_l;
  my_l.push_front(1);
  std_l.push_front(1);
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.pop_front();
  std_l.pop_front();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, push_fornt2) {
  s21::list<double> my_l;
  std::list<double> std_l;
  my_l.push_front(1.6);
  std_l.push_front(1.6);
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.pop_front();
  std_l.pop_front();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, push_fornt3) {
  s21::list<float> my_l;
  std::list<float> std_l;
  my_l.push_front(1.6);
  std_l.push_front(1.6);
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.pop_front();
  std_l.pop_front();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, push_fornt4) {
  s21::list<char> my_l;
  std::list<char> std_l;
  my_l.push_front('q');
  std_l.push_front('q');
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.pop_front();
  std_l.pop_front();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, push_fornt5) {
  s21::list<std::string> my_l;
  std::list<std::string> std_l;
  my_l.push_front("Qwerty");
  std_l.push_front("Qwerty");
  ASSERT_EQ(my_l.front(), std_l.front());
  my_l.pop_front();
  std_l.pop_front();
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
}

TEST(s21_list_test, splice1) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int> my_l2;
  std::list<int> std_l{1, 2, 3, 4, 5};
  std::list<int> std_l2;
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<int>::const_iterator my_cit = my_l2.cbegin();
  std::list<int>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice2) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double> my_l2;
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2;
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<double>::const_iterator my_cit = my_l2.cbegin();
  std::list<double>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice3) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float> my_l2;
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2;
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<float>::const_iterator my_cit = my_l2.cbegin();
  std::list<float>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice4) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char> my_l2;
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2;
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<char>::const_iterator my_cit = my_l2.cbegin();
  std::list<char>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice5) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string> my_l2;
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2;
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<std::string>::const_iterator my_cit = my_l2.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice6) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int> my_l2{6, 7, 8};
  std::list<int> std_l{1, 2, 3, 4, 5};
  std::list<int> std_l2{6, 7, 8};
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<int>::const_iterator my_cit = my_l2.cbegin();
  std::list<int>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice7) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double> my_l2{6.7, 7.4, 8.5};
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2{6.7, 7.4, 8.5};
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<double>::const_iterator my_cit = my_l2.cbegin();
  std::list<double>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice8) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float> my_l2{6.7, 7.4, 8.5};
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2{6.7, 7.4, 8.5};
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<float>::const_iterator my_cit = my_l2.cbegin();
  std::list<float>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice9) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char> my_l2{'a', 's', 'd'};
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2{'a', 's', 'd'};
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<char>::const_iterator my_cit = my_l2.cbegin();
  std::list<char>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice10) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string> my_l2{"zxcv", "jkl;"};
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2{"zxcv", "jkl;"};
  my_l2.splice(my_l2.cbegin(), my_l);
  std_l2.splice(std_l2.cbegin(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<std::string>::const_iterator my_cit = my_l2.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice11) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int> my_l2{6, 7, 8};
  std::list<int> std_l{1, 2, 3, 4, 5};
  std::list<int> std_l2{6, 7, 8};
  my_l2.splice(my_l2.cend(), my_l);
  std_l2.splice(std_l2.cend(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<int>::const_iterator my_cit = my_l2.cbegin();
  std::list<int>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice12) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double> my_l2{6.7, 7.4, 8.5};
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2{6.7, 7.4, 8.5};
  my_l2.splice(my_l2.cend(), my_l);
  std_l2.splice(std_l2.cend(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<double>::const_iterator my_cit = my_l2.cbegin();
  std::list<double>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice13) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float> my_l2{6.7, 7.4, 8.5};
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2{6.7, 7.4, 8.5};
  my_l2.splice(my_l2.cend(), my_l);
  std_l2.splice(std_l2.cend(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<float>::const_iterator my_cit = my_l2.cbegin();
  std::list<float>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice14) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char> my_l2{'a', 's', 'd'};
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2{'a', 's', 'd'};
  my_l2.splice(my_l2.cend(), my_l);
  std_l2.splice(std_l2.cend(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<char>::const_iterator my_cit = my_l2.cbegin();
  std::list<char>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice15) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string> my_l2{"zxcv", "jkl;"};
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2{"zxcv", "jkl;"};
  my_l2.splice(my_l2.cend(), my_l);
  std_l2.splice(std_l2.cend(), std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<std::string>::const_iterator my_cit = my_l2.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice16) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int> my_l2{6, 7, 8};
  std::list<int> std_l{1, 2, 3, 4, 5};
  std::list<int> std_l2{6, 7, 8};
  s21::list<int>::const_iterator my_it = my_l2.cend();
  std::list<int>::const_iterator std_it = std_l2.cend();
  my_it--;
  std_it--;
  my_l2.splice(my_it, my_l);
  std_l2.splice(std_it, std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<int>::const_iterator my_cit = my_l2.cbegin();
  std::list<int>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    my_cit++;
    std_cit++;
  }
}

TEST(s21_list_test, splice17) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double> my_l2{6.7, 7.4, 8.5};
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2{6.7, 7.4, 8.5};
  s21::list<double>::const_iterator my_it = my_l2.cend();
  std::list<double>::const_iterator std_it = std_l2.cend();
  my_it--;
  std_it--;
  my_l2.splice(my_it, my_l);
  std_l2.splice(std_it, std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<double>::const_iterator my_cit = my_l2.cbegin();
  std::list<double>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    my_cit++;
    std_cit++;
  }
}

TEST(s21_list_test, splice18) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float> my_l2{6.7, 7.4, 8.5};
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2{6.7, 7.4, 8.5};
  s21::list<float>::const_iterator my_it = my_l2.cend();
  std::list<float>::const_iterator std_it = std_l2.cend();
  my_it--;
  std_it--;
  my_l2.splice(my_it, my_l);
  std_l2.splice(std_it, std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<float>::const_iterator my_cit = my_l2.cbegin();
  std::list<float>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    my_cit++;
    std_cit++;
  }
}

TEST(s21_list_test, splice19) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char> my_l2{'a', 's', 'd'};
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2{'a', 's', 'd'};
  s21::list<char>::const_iterator my_it = my_l2.cend();
  std::list<char>::const_iterator std_it = std_l2.cend();
  my_it--;
  std_it--;
  my_l2.splice(my_it, my_l);
  std_l2.splice(std_it, std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<char>::const_iterator my_cit = my_l2.cbegin();
  std::list<char>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    my_cit++;
    std_cit++;
  }
}

TEST(s21_list_test, splice20) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string> my_l2{"zxcv", "jkl;"};
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2{"zxcv", "jkl;"};
  s21::list<std::string>::const_iterator my_it = my_l2.cend();
  std::list<std::string>::const_iterator std_it = std_l2.cend();
  my_it--;
  std_it--;
  my_l2.splice(my_it, my_l);
  std_l2.splice(std_it, std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  s21::list<std::string>::const_iterator my_cit = my_l2.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    my_cit++;
    std_cit++;
  }
}

TEST(s21_list_test, splice21) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int> my_l2;
  std::list<int> std_l{1, 2, 3, 4, 5};
  std::list<int> std_l2;
  s21::list<int>::const_iterator my_it = my_l.cend();
  std::list<int>::const_iterator std_it = std_l.cend();
  --my_it;
  --std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<int>::const_iterator my_cit = my_l2.cbegin();
  std::list<int>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice22) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double> my_l2;
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2;
  s21::list<double>::const_iterator my_it = my_l.cend();
  std::list<double>::const_iterator std_it = std_l.cend();
  --my_it;
  --std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<double>::const_iterator my_cit = my_l2.cbegin();
  std::list<double>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice23) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float> my_l2;
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2;
  s21::list<float>::const_iterator my_it = my_l.cend();
  std::list<float>::const_iterator std_it = std_l.cend();
  --my_it;
  --std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<float>::const_iterator my_cit = my_l2.cbegin();
  std::list<float>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice24) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char> my_l2;
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2;
  s21::list<char>::const_iterator my_it = my_l.cend();
  std::list<char>::const_iterator std_it = std_l.cend();
  --my_it;
  --std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<char>::const_iterator my_cit = my_l2.cbegin();
  std::list<char>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice25) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string> my_l2;
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2;
  s21::list<std::string>::const_iterator my_it = my_l.cend();
  std::list<std::string>::const_iterator std_it = std_l.cend();
  --my_it;
  --std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<std::string>::const_iterator my_cit = my_l2.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice26) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int> my_l2;
  std::list<int> std_l{1, 2, 3, 4, 5};
  std::list<int> std_l2;
  s21::list<int>::const_iterator my_it;
  my_it = my_l.cbegin();
  std::list<int>::const_iterator std_it;
  std_it = std_l.cbegin();
  ++my_it;
  ++std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<int>::const_iterator my_cit = my_l2.cbegin();
  std::list<int>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice27) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double> my_l2;
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2;
  s21::list<double>::const_iterator my_it = my_l.cbegin();
  std::list<double>::const_iterator std_it = std_l.cbegin();
  ++my_it;
  ++std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<double>::const_iterator my_cit = my_l2.cbegin();
  std::list<double>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice28) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float> my_l2;
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2;
  s21::list<float>::const_iterator my_it = my_l.cbegin();
  std::list<float>::const_iterator std_it = std_l.cbegin();
  ++my_it;
  ++std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<float>::const_iterator my_cit = my_l2.cbegin();
  std::list<float>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice29) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char> my_l2;
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2;
  s21::list<char>::const_iterator my_it = my_l.cbegin();
  std::list<char>::const_iterator std_it = std_l.cbegin();
  ++my_it;
  ++std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<char>::const_iterator my_cit = my_l2.cbegin();
  std::list<char>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, splice30) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string> my_l2;
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2;
  s21::list<std::string>::const_iterator my_it = my_l.cbegin();
  std::list<std::string>::const_iterator std_it = std_l.cbegin();
  ++my_it;
  ++std_it;
  my_l2.splice(my_l2.cbegin(), my_l, my_it);
  std_l2.splice(std_l2.cbegin(), std_l, std_it);
  s21::list<std::string>::const_iterator my_cit = my_l2.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l2.cbegin();
  while (my_cit != my_l2.cend() && std_cit != std_l2.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
  my_cit = my_l.cbegin();
  std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many1) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  s21::list<int>::const_iterator my_it = my_l.cbegin();
  ++my_it;
  my_l.insert_many(my_it, 6, 7, 8);
  std::list<int> std_l{1, 6, 7, 8, 2, 3, 4, 5};
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many2) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double>::const_iterator my_it = my_l.cbegin();
  ++my_it;
  my_l.insert_many(my_it, 6.7, 8.46);
  std::list<double> std_l{1.6, 6.7, 8.46, 2.7, 3.8, 4.9, 5.91};
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many3) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float>::const_iterator my_it = my_l.cbegin();
  ++my_it;
  my_l.insert_many(my_it, 6.7, 8.46);
  std::list<float> std_l{1.6, 6.7, 8.46, 2.7, 3.8, 4.9, 5.91};
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many4) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char>::const_iterator my_it = my_l.cbegin();
  ++my_it;
  my_l.insert_many(my_it, 'z', 'x', 'c');
  std::list<char> std_l{'q', 'z', 'x', 'c', 'w', 'e', 'r', 't', 'y'};
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many5) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  s21::list<std::string>::const_iterator my_it = my_l.cbegin();
  ++my_it;
  my_l.insert_many(my_it, "zxcv", "jkl;'");
  std::list<std::string> std_l{"Qwerty", "zxcv", "jkl;'", "aSdf",
                               "Hello world!"};
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_front1) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  my_l.insert_many_front(6, 7, 8);
  std::list<int> std_l{6, 7, 8, 1, 2, 3, 4, 5};
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_front2) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  my_l.insert_many_front(6.7, 8.46);
  std::list<double> std_l{6.7, 8.46, 1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_front3) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  my_l.insert_many_front(6.7, 8.46);
  std::list<float> std_l{6.7, 8.46, 1.6, 2.7, 3.8, 4.9, 5.91};
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_front4) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  my_l.insert_many_front('z', 'x', 'c');
  std::list<char> std_l{'z', 'x', 'c', 'q', 'w', 'e', 'r', 't', 'y'};
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_front5) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  my_l.insert_many_front("zxcv", "jkl;'");
  std::list<std::string> std_l{"zxcv", "jkl;'", "Qwerty", "aSdf",
                               "Hello world!"};
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_back1) {
  s21::list<int> my_l{1, 2, 3, 4, 5};
  my_l.insert_many_back(6, 7, 8);
  std::list<int> std_l{1, 2, 3, 4, 5, 6, 7, 8};
  s21::list<int>::const_iterator my_cit = my_l.cbegin();
  std::list<int>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_back2) {
  s21::list<double> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  my_l.insert_many_back(6.7, 8.46);
  std::list<double> std_l{1.6, 2.7, 3.8, 4.9, 5.91, 6.7, 8.46};
  s21::list<double>::const_iterator my_cit = my_l.cbegin();
  std::list<double>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_back3) {
  s21::list<float> my_l{1.6, 2.7, 3.8, 4.9, 5.91};
  my_l.insert_many_back(6.7, 8.46);
  std::list<float> std_l{1.6, 2.7, 3.8, 4.9, 5.91, 6.7, 8.46};
  s21::list<float>::const_iterator my_cit = my_l.cbegin();
  std::list<float>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_back4) {
  s21::list<char> my_l{'q', 'w', 'e', 'r', 't', 'y'};
  my_l.insert_many_back('z', 'x', 'c');
  std::list<char> std_l{'q', 'w', 'e', 'r', 't', 'y', 'z', 'x', 'c'};
  s21::list<char>::const_iterator my_cit = my_l.cbegin();
  std::list<char>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, insert_many_back5) {
  s21::list<std::string> my_l{"Qwerty", "aSdf", "Hello world!"};
  my_l.insert_many_back("zxcv", "jkl;'");
  std::list<std::string> std_l{"Qwerty", "aSdf", "Hello world!", "zxcv",
                               "jkl;'"};
  s21::list<std::string>::const_iterator my_cit = my_l.cbegin();
  std::list<std::string>::const_iterator std_cit = std_l.cbegin();
  while (my_cit != my_l.cend() && std_cit != std_l.cend()) {
    ASSERT_EQ(*my_cit, *std_cit);
    ++my_cit;
    ++std_cit;
  }
}

TEST(s21_list_test, move1) {
  s21::list<int> my_l({1, 2, 3, 4, 5});
  s21::list<int> my_l2 = std::move(my_l);
  std::list<int> std_l = {1, 2, 3, 4, 5};
  std::list<int> std_l2 = std::move(std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());

  s21::list<int> my_l3;
  my_l3 = std::move(my_l2);
  std::list<int> std_l3;
  std_l3 = std::move(std_l2);
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, move2) {
  s21::list<double> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<double> my_l2 = std::move(my_l);
  std::list<double> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<double> std_l2 = std::move(std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());

  s21::list<double> my_l3;
  my_l3 = std::move(my_l2);
  std::list<double> std_l3;
  std_l3 = std::move(std_l2);
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, move3) {
  s21::list<float> my_l({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::list<float> my_l2 = std::move(my_l);
  std::list<float> std_l = {1.6, 2.7, 3.8, 4.9, 5.91};
  std::list<float> std_l2 = std::move(std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());

  s21::list<float> my_l3;
  my_l3 = std::move(my_l2);
  std::list<float> std_l3;
  std_l3 = std::move(std_l2);
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, move4) {
  s21::list<char> my_l({'q', 'w', 'e', 'r', 't', 'y'});
  s21::list<char> my_l2 = std::move(my_l);
  std::list<char> std_l = {'q', 'w', 'e', 'r', 't', 'y'};
  std::list<char> std_l2 = std::move(std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());

  s21::list<char> my_l3;
  my_l3 = std::move(my_l2);
  std::list<char> std_l3;
  std_l3 = std::move(std_l2);
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}

TEST(s21_list_test, move5) {
  s21::list<std::string> my_l({"Qwerty", "aSdf", "Hello world!"});
  s21::list<std::string> my_l2 = std::move(my_l);
  std::list<std::string> std_l = {"Qwerty", "aSdf", "Hello world!"};
  std::list<std::string> std_l2 = std::move(std_l);
  ASSERT_EQ(my_l.size(), std_l.size());
  ASSERT_EQ(my_l.empty(), std_l.empty());
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l2.front(), std_l2.front());
  ASSERT_EQ(my_l2.back(), std_l2.back());

  s21::list<std::string> my_l3;
  my_l3 = std::move(my_l2);
  std::list<std::string> std_l3;
  std_l3 = std::move(std_l2);
  ASSERT_EQ(my_l2.size(), std_l2.size());
  ASSERT_EQ(my_l2.empty(), std_l2.empty());
  ASSERT_EQ(my_l3.size(), std_l3.size());
  ASSERT_EQ(my_l3.empty(), std_l3.empty());
  ASSERT_EQ(my_l3.front(), std_l3.front());
  ASSERT_EQ(my_l3.back(), std_l3.back());
}
