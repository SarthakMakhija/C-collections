#include <gtest/gtest.h>
#include "../../src/list/LinkedListNode.h"

TEST(LinkedListNode, nextIsNullPtr) {
  unique_ptr<LinkedListNode> node  = make_unique<LinkedListNode>("Id", "1000");
  
  ASSERT_EQ(node -> getNext(), nullptr);
}

TEST(LinkedListNode, matchesKeyForLinkedListNode) {
  unique_ptr<LinkedListNode> node  = make_unique<LinkedListNode>("Id", "1000");
  
  ASSERT_TRUE(node -> matches("Id"));
}

TEST(LinkedListNode, doesNotMatchKeyForLinkedListNode) {
  unique_ptr<LinkedListNode> node  = make_unique<LinkedListNode>("Id", "1000");

  ASSERT_FALSE(node -> matches("Id-Not-Present"));
}

TEST(LinkedListNode, addNextNode) {
  unique_ptr<LinkedListNode> node = make_unique<LinkedListNode>("Id", "1000");
  unique_ptr<LinkedListNode> next = make_unique<LinkedListNode>("Company", "TW");
  
  node -> addNext(move(next));

  ASSERT_EQ(node -> getNext() -> getKey(), "Company");
  ASSERT_EQ(node -> getNext() -> getValue(), "TW");
}