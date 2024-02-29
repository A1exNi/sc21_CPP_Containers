#include <gtest/gtest.h>

#include <queue>

#include "s21_queue.h"

TEST(s21_queue_test, constractor1) {
  s21::queue<int> my_q;
  std::queue<int> std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, constractor2) {
  s21::queue<double> my_q;
  std::queue<double> std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, constractor3) {
  s21::queue<float> my_q;
  std::queue<float> std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, constractor4) {
  s21::queue<char> my_q;
  std::queue<char> std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, constractor5) {
  s21::queue<std::string> my_q;
  std::queue<std::string> std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, constractor6) {
  s21::queue<int> my_q{1, 2, 3, 4, 5};
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  my_q.front() = 9;
  std_q.front() = 9;
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  my_q.back() = 8;
  std_q.back() = 8;
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, constractor7) {
  s21::queue<double> my_q{1.6, 2.7, 3.8, 4.9, 5.91};
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  my_q.front() = 9.1;
  std_q.front() = 9.1;
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  my_q.back() = 8.2;
  std_q.back() = 8.2;
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, constractor8) {
  s21::queue<float> my_q{1.6, 2.7, 3.8, 4.9, 5.91};
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  my_q.front() = 9.1;
  std_q.front() = 9.1;
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  my_q.back() = 8.2;
  std_q.back() = 8.2;
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, constractor9) {
  s21::queue<char> my_q{'q', 'w', 'e', 'r', 't', 'y'};
  std::queue<char> std_q;
  std_q.push('q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  my_q.front() = 'a';
  std_q.front() = 'a';
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  my_q.back() = 'z';
  std_q.back() = 'z';
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, constractor10) {
  s21::queue<std::string> my_q{"Qwerty", "aSdf", "Hello world!"};
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  my_q.front() = "asdf";
  std_q.front() = "asdf";
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  my_q.back() = "zxcv";
  std_q.back() = "zxcv";
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, constractor11) {
  s21::queue<int> my_q({1, 2, 3, 4, 5});
  s21::queue<int> my_q2(my_q);
  s21::queue<int> my_q3;
  my_q3 = my_q;
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  std::queue<int> std_q2(std_q);
  std::queue<int> std_q3;
  std_q3 = std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, constractor12) {
  s21::queue<double> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::queue<double> my_q2(my_q);
  s21::queue<double> my_q3;
  my_q3 = my_q;
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std::queue<double> std_q2(std_q);
  std::queue<double> std_q3;
  std_q3 = std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, constractor13) {
  s21::queue<float> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::queue<float> my_q2(my_q);
  s21::queue<float> my_q3;
  my_q3 = my_q;
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std::queue<float> std_q2(std_q);
  std::queue<float> std_q3;
  std_q3 = std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, constractor14) {
  s21::queue<char> my_q({'q', 'w', 'e', 'r', 't', 'y'});
  s21::queue<char> my_q2(my_q);
  s21::queue<char> my_q3;
  my_q3 = my_q;
  std::queue<char> std_q;
  std_q.push('q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  std::queue<char> std_q2(std_q);
  std::queue<char> std_q3;
  std_q3 = std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, constractor15) {
  s21::queue<std::string> my_q({"Qwerty", "aSdf", "Hello world!"});
  s21::queue<std::string> my_q2(my_q);
  s21::queue<std::string> my_q3;
  my_q3 = my_q;
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  std::queue<std::string> std_q2(std_q);
  std::queue<std::string> std_q3;
  std_q3 = std_q;
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, push1) {
  s21::queue<int> my_q;
  my_q.push(0);
  std::queue<int> std_q;
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push2) {
  s21::queue<int> my_q({1, 2, 3, 4, 5});
  my_q.push(0);
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push3) {
  s21::queue<int> my_q({1});
  my_q.push(0);
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push4) {
  s21::queue<double> my_q;
  my_q.push(0);
  std::queue<double> std_q;
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push5) {
  s21::queue<double> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  my_q.push(0);
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push6) {
  s21::queue<double> my_q({1.6});
  my_q.push(0);
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push7) {
  s21::queue<float> my_q;
  my_q.push(0);
  std::queue<float> std_q;
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push8) {
  s21::queue<float> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  my_q.push(0);
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push9) {
  s21::queue<float> my_q({1.6});
  my_q.push(0);
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(0);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push10) {
  s21::queue<char> my_q;
  my_q.push('a');
  std::queue<char> std_q;
  std_q.push('a');
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push11) {
  s21::queue<char> my_q({'q', 'w', 'e', 'r', 't', 'y'});
  my_q.push('a');
  std::queue<char> std_q;
  std_q.push('q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  std_q.push('a');
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push12) {
  s21::queue<char> my_q({'q'});
  my_q.push('a');
  std::queue<char> std_q;
  std_q.emplace('q');
  std_q.push('a');
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push13) {
  s21::queue<std::string> my_q;
  my_q.push("zxcv");
  std::queue<std::string> std_q;
  std_q.push("zxcv");
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push14) {
  s21::queue<std::string> my_q(
      {"Qwerty", "aSdf", "Hello world!", "123", "[poi]"});
  my_q.push("zxcv");
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  std_q.push("123");
  std_q.push("[poi]");
  std_q.push("zxcv");
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, push15) {
  s21::queue<std::string> my_q({"Qwerty"});
  my_q.push("zxcv");
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("zxcv");
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, pop1) {
  s21::queue<int> my_q({1, 2, 3, 4, 5});
  my_q.pop();
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, pop2) {
  s21::queue<int> my_q({1});
  my_q.pop();
  std::queue<int> std_q;
  std_q.push(1);
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, pop3) {
  s21::queue<double> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  my_q.pop();
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, pop4) {
  s21::queue<double> my_q({1.6});
  my_q.pop();
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, pop5) {
  s21::queue<float> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  my_q.pop();
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, pop6) {
  s21::queue<float> my_q({1.6});
  my_q.pop();
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, pop7) {
  s21::queue<char> my_q({'q', 'w', 'e', 'r', 't', 'y'});
  my_q.pop();
  std::queue<char> std_q;
  std_q.push('q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, pop8) {
  s21::queue<char> my_q({'q'});
  my_q.pop();
  std::queue<char> std_q;
  std_q.emplace('q');
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, pop9) {
  s21::queue<std::string> my_q(
      {"Qwerty", "aSdf", "Hello world!", "123", "[poi]"});
  my_q.pop();
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  std_q.push("123");
  std_q.push("[poi]");
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, pop10) {
  s21::queue<std::string> my_q({"Qwerty"});
  my_q.pop();
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.pop();
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
}

TEST(s21_queue_test, swap1) {
  s21::queue<int> my_q({10, 2, 3, 4, 5});
  s21::queue<int> my_q2({1});
  s21::queue<int> my_q3;
  my_q.swap(my_q2);
  my_q2.swap(my_q3);
  std::queue<int> std_q;
  std_q.push(10);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  std::queue<int> std_q2;
  std_q2.push(1);
  std::queue<int> std_q3;
  std_q.swap(std_q2);
  std_q2.swap(std_q3);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, swap2) {
  s21::queue<double> my_q({1.62, 2.7, 3.8, 4.9, 5.91});
  s21::queue<double> my_q2({1.6});
  s21::queue<double> my_q3;
  my_q.swap(my_q2);
  my_q2.swap(my_q3);
  std::queue<double> std_q;
  std_q.push(1.62);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std::queue<double> std_q2;
  std_q2.push(1.6);
  std::queue<double> std_q3;
  std_q.swap(std_q2);
  std_q2.swap(std_q3);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, swap3) {
  s21::queue<float> my_q({1.62, 2.7, 3.8, 4.9, 5.91});
  s21::queue<float> my_q2({1.6});
  s21::queue<float> my_q3;
  my_q.swap(my_q2);
  my_q2.swap(my_q3);
  std::queue<float> std_q;
  std_q.push(1.62);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std::queue<float> std_q2;
  std_q2.push(1.6);
  std::queue<float> std_q3;
  std_q.swap(std_q2);
  std_q2.swap(std_q3);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, swap4) {
  s21::queue<char> my_q({'Q', 'w', 'e', 'r', 't', 'y'});
  s21::queue<char> my_q2({'q'});
  s21::queue<char> my_q3;
  my_q.swap(my_q2);
  my_q2.swap(my_q3);
  std::queue<char> std_q;
  std_q.push('Q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  std::queue<char> std_q2;
  std_q2.push('q');
  std::queue<char> std_q3;
  std_q.swap(std_q2);
  std_q2.swap(std_q3);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, swap5) {
  s21::queue<std::string> my_q({"QwertY", "aSdf", "Hello world!"});
  s21::queue<std::string> my_q2({"Qwerty"});
  s21::queue<std::string> my_q3;
  my_q.swap(my_q2);
  my_q2.swap(my_q3);
  std::queue<std::string> std_q;
  std_q.push("QwertY");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  std::queue<std::string> std_q2;
  std_q2.push("Qwerty");
  std::queue<std::string> std_q3;
  std_q.swap(std_q2);
  std_q2.swap(std_q3);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, insert_many_back1) {
  s21::queue<int> my_q{1, 2, 3, 4, 5};
  my_q.insert_many_back(6, 7, 8);
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  std_q.push(6);
  std_q.push(7);
  std_q.push(8);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, insert_many_back2) {
  s21::queue<double> my_q{1.6, 2.7, 3.8, 4.9, 5.91};
  my_q.insert_many_back(6.7, 8.46);
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std_q.push(6.7);
  std_q.push(8.46);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, insert_many_back3) {
  s21::queue<float> my_q{1.6, 2.7, 3.8, 4.9, 5.91};
  my_q.insert_many_back(6.7, 8.46);
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std_q.push(6.7);
  std_q.push(8.46);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, insert_many_back4) {
  s21::queue<char> my_q{'q', 'w', 'e', 'r', 't', 'y'};
  my_q.insert_many_back('z', 'x', 'c');
  std::queue<char> std_q;
  std_q.push('q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  std_q.push('z');
  std_q.push('x');
  std_q.push('c');
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, insert_many_back5) {
  s21::queue<std::string> my_q{"Qwerty", "aSdf", "Hello world!"};
  my_q.insert_many_back("zxcv", "jkl;'");
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  std_q.push("zxcv");
  std_q.push("jkl;'");
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q.front(), std_q.front());
  ASSERT_EQ(my_q.back(), std_q.back());
}

TEST(s21_queue_test, move1) {
  s21::queue<int> my_q({1, 2, 3, 4, 5});
  s21::queue<int> my_q2 = std::move(my_q);
  std::queue<int> std_q;
  std_q.push(1);
  std_q.push(2);
  std_q.push(3);
  std_q.push(4);
  std_q.push(5);
  std::queue<int> std_q2 = std::move(std_q);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());

  s21::queue<int> my_q3;
  my_q3 = std::move(my_q2);
  std::queue<int> std_q3;
  std_q3 = std::move(std_q2);
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, move2) {
  s21::queue<double> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::queue<double> my_q2 = std::move(my_q);
  std::queue<double> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std::queue<double> std_q2 = std::move(std_q);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());

  s21::queue<double> my_q3;
  my_q3 = std::move(my_q2);
  std::queue<double> std_q3;
  std_q3 = std::move(std_q2);
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, move3) {
  s21::queue<float> my_q({1.6, 2.7, 3.8, 4.9, 5.91});
  s21::queue<float> my_q2 = std::move(my_q);
  std::queue<float> std_q;
  std_q.push(1.6);
  std_q.push(2.7);
  std_q.push(3.8);
  std_q.push(4.9);
  std_q.push(5.91);
  std::queue<float> std_q2 = std::move(std_q);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());

  s21::queue<float> my_q3;
  my_q3 = std::move(my_q2);
  std::queue<float> std_q3;
  std_q3 = std::move(std_q2);
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, move4) {
  s21::queue<char> my_q({'q', 'w', 'e', 'r', 't', 'y'});
  s21::queue<char> my_q2 = std::move(my_q);
  std::queue<char> std_q;
  std_q.push('q');
  std_q.push('w');
  std_q.push('e');
  std_q.push('r');
  std_q.push('t');
  std_q.push('y');
  std::queue<char> std_q2 = std::move(std_q);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());

  s21::queue<char> my_q3;
  my_q3 = std::move(my_q2);
  std::queue<char> std_q3;
  std_q3 = std::move(std_q2);
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}

TEST(s21_queue_test, move5) {
  s21::queue<std::string> my_q({"Qwerty", "aSdf", "Hello world!"});
  s21::queue<std::string> my_q2 = std::move(my_q);
  std::queue<std::string> std_q;
  std_q.push("Qwerty");
  std_q.push("aSdf");
  std_q.push("Hello world!");
  std::queue<std::string> std_q2 = std::move(std_q);
  ASSERT_EQ(my_q.size(), std_q.size());
  ASSERT_EQ(my_q.empty(), std_q.empty());
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q2.front(), std_q2.front());
  ASSERT_EQ(my_q2.back(), std_q2.back());

  s21::queue<std::string> my_q3;
  my_q3 = std::move(my_q2);
  std::queue<std::string> std_q3;
  std_q3 = std::move(std_q2);
  ASSERT_EQ(my_q2.size(), std_q2.size());
  ASSERT_EQ(my_q2.empty(), std_q2.empty());
  ASSERT_EQ(my_q3.size(), std_q3.size());
  ASSERT_EQ(my_q3.empty(), std_q3.empty());
  ASSERT_EQ(my_q3.front(), std_q3.front());
  ASSERT_EQ(my_q3.back(), std_q3.back());
}