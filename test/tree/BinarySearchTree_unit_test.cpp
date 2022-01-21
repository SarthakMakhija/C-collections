#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "../../src/tree/BinarySearchTree.h"

TEST(BinarySearchTree, getsValueByKey1) {
  BinarySearchTree *binarySearchTree = new BinarySearchTree();
  binarySearchTree -> add("Company", "TW");
  binarySearchTree -> add("Fruit", "Apple");
  
  ASSERT_EQ(binarySearchTree -> getBy("Fruit"), "Apple");
}

TEST(BinarySearchTree, getsValueByKey2) {
  BinarySearchTree *binarySearchTree = new BinarySearchTree();
  binarySearchTree -> add("Company", "TW");
  binarySearchTree -> add("Fruit", "Apple");
  binarySearchTree -> add("Brown", "Color");
  
  ASSERT_EQ(binarySearchTree -> getBy("Brown"), "Color");
}

TEST(BST, allKeys) {
  BinarySearchTree *binarySearchTree = new BinarySearchTree();
  binarySearchTree -> add("Company", "TW");
  binarySearchTree -> add("Fruit", "Apple");
  binarySearchTree -> add("Brown", "Color");
  
  vector<string> expected = {"Company", "Brown", "Fruit"};
  ASSERT_EQ(binarySearchTree -> allKeys(), expected);
}