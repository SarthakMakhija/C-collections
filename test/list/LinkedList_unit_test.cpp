#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "../../src/list/LinkedList.h"

using namespace std;

TEST(LinkedList, getsAllKeys) {
    LinkedList *list = new LinkedList();
    list -> add("Company", "TW");
    list -> add("Laptop", "Apple");

    vector<string> keys  = list -> allKeys();
    vector<string> expected = {"Company", "Laptop"};

    ASSERT_EQ(keys, expected);
}

TEST(LinkedList, containsAKey) {
    LinkedList *list = new LinkedList();
    list -> add("Company", "TW");

    bool contains = list -> contains("Company");

    ASSERT_TRUE(contains);
}

TEST(LinkedList, doesNotContainAKey) {
    LinkedList *list = new LinkedList();
    list -> add("Company", "TW");

    bool contains = list -> contains("Laptop");

    ASSERT_FALSE(contains);
}

TEST(LinkedList, getsValueByKey) {
    LinkedList *list = new LinkedList();
    list -> add("Company", "TW");

    string value = list -> getBy("Company");
    string expected = "TW";

    ASSERT_EQ(value, expected);
}

TEST(LinkedList, getsValueByNonExistentKey) {
    LinkedList *list = new LinkedList();
    list -> add("Company", "TW");

    string value = list -> getBy("Laptop");
    string expected = "";

    ASSERT_EQ(value, expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}