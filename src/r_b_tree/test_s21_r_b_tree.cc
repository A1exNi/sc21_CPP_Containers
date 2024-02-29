#include <gtest/gtest.h>

#include <list>

#include "s21_r_b_tree.h"

TEST(RBTree, constractor1) {
  s21::RbTree<int, std::string> tree;
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  s21::RbTree<int, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 0);
  ASSERT_EQ(tree2.empty(), true);
  s21::RbTree<int, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree3.size(), 0);
  ASSERT_EQ(tree3.empty(), true);
}

TEST(RBTree, constractor2) {
  s21::RbTree<double, std::string> tree;
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  s21::RbTree<double, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 0);
  ASSERT_EQ(tree2.empty(), true);
  s21::RbTree<double, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree3.size(), 0);
  ASSERT_EQ(tree3.empty(), true);
}

TEST(RBTree, constractor3) {
  s21::RbTree<float, std::string> tree;
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  s21::RbTree<float, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 0);
  ASSERT_EQ(tree2.empty(), true);
  s21::RbTree<float, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree3.size(), 0);
  ASSERT_EQ(tree3.empty(), true);
}

TEST(RBTree, constractor4) {
  s21::RbTree<char, std::string> tree;
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  s21::RbTree<char, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 0);
  ASSERT_EQ(tree2.empty(), true);
  s21::RbTree<char, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree3.size(), 0);
  ASSERT_EQ(tree3.empty(), true);
}

TEST(RBTree, constractor5) {
  s21::RbTree<std::string, std::string> tree;
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  s21::RbTree<std::string, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 0);
  ASSERT_EQ(tree2.empty(), true);
  s21::RbTree<std::string, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree3.size(), 0);
  ASSERT_EQ(tree3.empty(), true);
}

TEST(RBTree, Insert1) {
  s21::RbTree<std::string, int> tree;
  tree.Insert("key1", 1);
  ASSERT_EQ(tree.size(), 1);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<std::string, int> tree2(tree);
  ASSERT_EQ(tree2.size(), 1);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<std::string, int> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 1);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert2) {
  s21::RbTree<int, float> tree;
  tree.Insert(1, 1.2);
  ASSERT_EQ(tree.size(), 1);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<int, float> tree2(tree);
  ASSERT_EQ(tree2.size(), 1);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<int, float> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 1);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert3) {
  s21::RbTree<float, double> tree;
  tree.Insert(1.0, 2.3);
  ASSERT_EQ(tree.size(), 1);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<float, double> tree2(tree);
  ASSERT_EQ(tree2.size(), 1);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<float, double> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 1);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert4) {
  s21::RbTree<double, char> tree;
  tree.Insert(1.0, 'a');
  ASSERT_EQ(tree.size(), 1);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<double, char> tree2(tree);
  ASSERT_EQ(tree2.size(), 1);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<double, char> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 1);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert5) {
  s21::RbTree<char, std::string> tree;
  tree.Insert('a', "value1");
  ASSERT_EQ(tree.size(), 1);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<char, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 1);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<char, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 1);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert6) {
  s21::RbTree<std::string, int> tree;
  tree.Insert("key1", 1);
  tree.Insert("key2", 2);
  ASSERT_EQ(tree.size(), 2);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<std::string, int> tree2(tree);
  ASSERT_EQ(tree2.size(), 2);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<std::string, int> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 2);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert7) {
  s21::RbTree<int, float> tree;
  tree.Insert(1, 1.2);
  tree.Insert(2, 2.2);
  ASSERT_EQ(tree.size(), 2);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<int, float> tree2(tree);
  ASSERT_EQ(tree2.size(), 2);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<int, float> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 2);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert8) {
  s21::RbTree<float, double> tree;
  tree.Insert(1.0, 1.3);
  tree.Insert(2.0, 2.3);
  ASSERT_EQ(tree.size(), 2);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<float, double> tree2(tree);
  ASSERT_EQ(tree2.size(), 2);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<float, double> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 2);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert9) {
  s21::RbTree<double, char> tree;
  tree.Insert(1.0, 'a');
  tree.Insert(2.0, 's');
  ASSERT_EQ(tree.size(), 2);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<double, char> tree2(tree);
  ASSERT_EQ(tree2.size(), 2);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<double, char> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 2);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert10) {
  s21::RbTree<char, std::string> tree;
  tree.Insert('a', "value1");
  tree.Insert('s', "value2");
  ASSERT_EQ(tree.size(), 2);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<char, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 2);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<char, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 2);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert11) {
  s21::RbTree<std::string, int> tree;
  tree.Insert("key1", 1);
  tree.Insert("key2", 2);
  tree.Insert("key3", 3);
  ASSERT_EQ(tree.size(), 3);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<std::string, int> tree2(tree);
  ASSERT_EQ(tree2.size(), 3);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<std::string, int> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 3);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert12) {
  s21::RbTree<int, float> tree;
  tree.Insert(1, 1.2);
  tree.Insert(2, 2.2);
  tree.Insert(3, 3.2);
  ASSERT_EQ(tree.size(), 3);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<int, float> tree2(tree);
  ASSERT_EQ(tree2.size(), 3);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<int, float> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 3);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert13) {
  s21::RbTree<float, double> tree;
  tree.Insert(1.0, 1.3);
  tree.Insert(2.0, 2.3);
  tree.Insert(3.0, 3.3);
  ASSERT_EQ(tree.size(), 3);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<float, double> tree2(tree);
  ASSERT_EQ(tree2.size(), 3);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<float, double> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 3);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert14) {
  s21::RbTree<double, char> tree;
  tree.Insert(1.0, 'a');
  tree.Insert(2.0, 's');
  tree.Insert(3.0, 'd');
  ASSERT_EQ(tree.size(), 3);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<double, char> tree2(tree);
  ASSERT_EQ(tree2.size(), 3);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<double, char> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 3);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert15) {
  s21::RbTree<char, std::string> tree;
  tree.Insert('a', "value1");
  tree.Insert('s', "value2");
  tree.Insert('d', "value3");
  ASSERT_EQ(tree.size(), 3);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<char, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 3);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<char, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 3);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert16) {
  s21::RbTree<std::string, int> tree;
  tree.Insert("key1", 1);
  tree.Insert("key2", 2);
  tree.Insert("key3", 3);
  tree.Insert("key4", 4);
  ASSERT_EQ(tree.size(), 4);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<std::string, int> tree2(tree);
  ASSERT_EQ(tree2.size(), 4);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<std::string, int> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 4);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert17) {
  s21::RbTree<int, float> tree;
  tree.Insert(1, 1.2);
  tree.Insert(2, 2.2);
  tree.Insert(3, 3.2);
  tree.Insert(4, 4.2);
  ASSERT_EQ(tree.size(), 4);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<int, float> tree2(tree);
  ASSERT_EQ(tree2.size(), 4);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<int, float> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 4);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert18) {
  s21::RbTree<float, double> tree;
  tree.Insert(1.0, 1.3);
  tree.Insert(2.0, 2.3);
  tree.Insert(3.0, 3.3);
  tree.Insert(4.0, 4.3);
  ASSERT_EQ(tree.size(), 4);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<float, double> tree2(tree);
  ASSERT_EQ(tree2.size(), 4);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<float, double> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 4);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert19) {
  s21::RbTree<double, char> tree;
  tree.Insert(1.0, 'a');
  tree.Insert(2.0, 's');
  tree.Insert(3.0, 'd');
  tree.Insert(4.0, 'f');
  ASSERT_EQ(tree.size(), 4);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<double, char> tree2(tree);
  ASSERT_EQ(tree2.size(), 4);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<double, char> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 4);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert20) {
  s21::RbTree<char, std::string> tree;
  tree.Insert('a', "value1");
  tree.Insert('s', "value2");
  tree.Insert('d', "value3");
  tree.Insert('f', "value4");
  ASSERT_EQ(tree.size(), 4);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<char, std::string> tree2(tree);
  ASSERT_EQ(tree2.size(), 4);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<char, std::string> tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 4);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert21) {
  s21::RbTree<std::string, int> tree{
      {"key1", 1}, {"key2", 2}, {"key3", 3}, {"key4", 4}, {"key5", 5}};
  ASSERT_EQ(tree.size(), 5);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<std::string, int> tree2;
  tree2 = tree;
  ASSERT_EQ(tree2.size(), 5);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<std::string, int> tree3;
  tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 5);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert22) {
  s21::RbTree<int, float> tree{
      {1, 1.2}, {2, 2.2}, {3, 3.2}, {4, 4.2}, {5, 5.2}};
  ASSERT_EQ(tree.size(), 5);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<int, float> tree2;
  tree2 = tree;
  ASSERT_EQ(tree2.size(), 5);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<int, float> tree3;
  tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 5);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert23) {
  s21::RbTree<float, double> tree{
      {1.0, 1.2}, {2.0, 2.2}, {3.0, 3.2}, {4.0, 4.2}, {5.0, 5.2}};
  ASSERT_EQ(tree.size(), 5);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<float, double> tree2;
  tree2 = tree;
  ASSERT_EQ(tree2.size(), 5);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<float, double> tree3;
  tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 5);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert24) {
  s21::RbTree<double, char> tree{
      {1.0, 'a'}, {2.0, 's'}, {3.0, 'd'}, {4.0, 'f'}, {5.0, 'g'}};
  ASSERT_EQ(tree.size(), 5);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<double, char> tree2;
  tree2 = tree;
  ASSERT_EQ(tree2.size(), 5);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<double, char> tree3;
  tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 5);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, Insert25) {
  s21::RbTree<char, std::string> tree{{'a', "value1"},
                                      {'s', "value2"},
                                      {'d', "value3"},
                                      {'f', "value4"},
                                      {'g', "value5"}};
  ASSERT_EQ(tree.size(), 5);
  ASSERT_EQ(tree.empty(), false);
  s21::RbTree<char, std::string> tree2;
  tree2 = tree;
  ASSERT_EQ(tree2.size(), 5);
  ASSERT_EQ(tree2.empty(), false);
  s21::RbTree<char, std::string> tree3;
  tree3 = std::move(tree);
  ASSERT_EQ(tree.size(), 0);
  ASSERT_EQ(tree.empty(), true);
  ASSERT_EQ(tree3.size(), 5);
  ASSERT_EQ(tree3.empty(), false);
}

TEST(RBTree, RemoveNode1) {
  s21::RbTree<int, std::string> tree;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(i, str);
  }
  ASSERT_EQ(tree.size(), 37);
  auto it = tree.end();
  --it;
  tree.RemoveNode(it.get_node());
  ASSERT_EQ(tree.size(), 36);
  it = tree.end();
  it--;
  ASSERT_EQ(it->first, 18);
  ASSERT_EQ(it->second, "value18");
  tree.RemoveNode(15);
  ASSERT_EQ(tree.size(), 35);
}

TEST(RBTree, RemoveNode2) {
  s21::RbTree<double, std::string> tree;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(i, str);
  }
  ASSERT_EQ(tree.size(), 38);
  auto it = tree.end();
  --it;
  tree.RemoveNode(it.get_node());
  ASSERT_EQ(tree.size(), 37);
  it = tree.end();
  it--;
  ASSERT_EQ(it->first, 17.1);
  ASSERT_EQ(it->second, "value17.100000");
  tree.RemoveNode(14.1);
  ASSERT_EQ(tree.size(), 36);
}

TEST(RBTree, RemoveNode3) {
  s21::RbTree<float, std::string> tree;
  for (float i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(i, str);
  }
  ASSERT_EQ(tree.size(), 38);
  auto it = tree.end();
  --it;
  tree.RemoveNode(it.get_node());
  ASSERT_EQ(tree.size(), 37);
  it = tree.end();
  it--;
  ASSERT_FLOAT_EQ(it->first, 17.1);
  ASSERT_EQ(it->second, "value17.100000");
  tree.RemoveNode(14.1);
  ASSERT_EQ(tree.size(), 36);
}

TEST(RBTree, RemoveNode4) {
  s21::RbTree<char, std::string> tree;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    tree.Insert(i, str);
  }
  ASSERT_EQ(tree.size(), 26);
  auto it = tree.end();
  --it;
  tree.RemoveNode(it.get_node());
  ASSERT_EQ(tree.size(), 25);
  it = tree.end();
  it--;
  ASSERT_EQ(it->first, 'y');
  ASSERT_EQ(it->second, "value");
  tree.RemoveNode('w');
  ASSERT_EQ(tree.size(), 24);
}

TEST(RBTree, RemoveNode5) {
  s21::RbTree<std::string, std::string> tree;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(str, str);
  }
  ASSERT_EQ(tree.size(), 37);
  auto it = tree.end();
  --it;
  tree.RemoveNode(it.get_node());
  ASSERT_EQ(tree.size(), 36);
  it = tree.end();
  it--;
  ASSERT_EQ(it->first, "value8");
  ASSERT_EQ(it->second, "value8");
  tree.RemoveNode("value6");
  ASSERT_EQ(tree.size(), 35);
}

TEST(RBTree, Iterator1) {
  s21::RbTree<int, std::string> tree;
  std::list<int> v;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(i, str);
    v.push_back(i);
  }
  v.sort();
  auto s21_it = tree.begin();
  auto std_it = v.begin();
  while (s21_it != tree.end() && std_it != v.end()) {
    ASSERT_EQ(s21_it->first, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = tree.end();
  std_it = v.end();
  while (s21_it != tree.begin() && std_it != v.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, *std_it);
  }
  if (s21_it == tree.begin()) {
    ASSERT_EQ(s21_it->first, v.front());
  }
}
TEST(RBTree, Iterator2) {
  s21::RbTree<double, std::string> tree;
  std::list<double> v;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(i, str);
    v.push_back(i);
  }
  v.sort();
  auto s21_it = tree.begin();
  auto std_it = v.begin();
  while (s21_it != tree.end() && std_it != v.end()) {
    ASSERT_EQ(s21_it->first, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = tree.end();
  std_it = v.end();
  while (s21_it != tree.begin() && std_it != v.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, *std_it);
  }
  if (s21_it == tree.begin()) {
    ASSERT_EQ(s21_it->first, v.front());
  }
}
TEST(RBTree, Iterator3) {
  s21::RbTree<float, std::string> tree;
  std::list<float> v;
  for (double i = 18.1; i > -19.1; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(i, str);
    v.push_back(i);
  }
  v.sort();
  auto s21_it = tree.begin();
  auto std_it = v.begin();
  while (s21_it != tree.end() && std_it != v.end()) {
    ASSERT_EQ(s21_it->first, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = tree.end();
  std_it = v.end();
  while (s21_it != tree.begin() && std_it != v.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, *std_it);
  }
  if (s21_it == tree.begin()) {
    ASSERT_EQ(s21_it->first, v.front());
  }
}
TEST(RBTree, Iterator4) {
  s21::RbTree<char, std::string> tree;
  std::list<char> v;
  for (char i = 'z'; i > '`'; i--) {
    std::string str = "value";
    tree.Insert(i, str);
    v.push_back(i);
  }
  v.sort();
  auto s21_it = tree.begin();
  auto std_it = v.begin();
  while (s21_it != tree.end() && std_it != v.end()) {
    ASSERT_EQ(s21_it->first, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = tree.end();
  std_it = v.end();
  while (s21_it != tree.begin() && std_it != v.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, *std_it);
  }
  if (s21_it == tree.begin()) {
    ASSERT_EQ(s21_it->first, v.front());
  }
}
TEST(RBTree, Iterator5) {
  s21::RbTree<std::string, std::string> tree;
  std::list<std::string> v;
  for (int i = 19; i > -18; i--) {
    std::string str = "value" + std::to_string(i);
    tree.Insert(str, str);
    v.push_back(str);
  }
  v.sort();
  auto s21_it = tree.begin();
  auto std_it = v.begin();
  while (s21_it != tree.end() && std_it != v.end()) {
    ASSERT_EQ(s21_it->first, *std_it);
    s21_it++;
    ++std_it;
  }
  s21_it = tree.end();
  std_it = v.end();
  while (s21_it != tree.begin() && std_it != v.begin()) {
    s21_it--;
    --std_it;
    ASSERT_EQ(s21_it->first, *std_it);
  }
  if (s21_it == tree.begin()) {
    ASSERT_EQ(s21_it->first, v.front());
  }
}