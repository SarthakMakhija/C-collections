#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "../../src/dictionary/Dictionary.h"

TEST(Dictionary, containsAWord) {
  Dictionary dictionary;
  dictionary.add("apple");
  dictionary.add("apples");
  
  ASSERT_TRUE(dictionary.contains("apple"));
}

TEST(Dictionary, doesNotContainAWord) {
  Dictionary dictionary;
  dictionary.add("apple");
  dictionary.add("apples");
  
  ASSERT_FALSE(dictionary.contains("oranges"));
}

TEST(Dictionary, doesNotContainAWordWithTypo) {
  Dictionary dictionary;
  dictionary.add("oranges");
  dictionary.add("ornament");
  
  ASSERT_FALSE(dictionary.contains("orange"));
}