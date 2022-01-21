#include <gtest/gtest.h>
#include "../../src/list/LinkedListNode.h"

TEST(LinkedListNode, nextIsNullPtr) {
  LinkedListNode *node = new LinkedListNode{"Id", "1000"};  
  
  ASSERT_EQ(node -> getNext(), nullptr);
}

TEST(LinkedListNode, matchesKeyForLinkedListNode) {
  LinkedListNode *node = new LinkedListNode{"Id", "1000"};  
  
  ASSERT_TRUE(node -> matches("Id"));
}

TEST(LinkedListNode, doesNotMatchKeyForLinkedListNode) {
  LinkedListNode *node = new LinkedListNode{"Id", "1000"};  

  ASSERT_FALSE(node -> matches("Id-Not-Present"));
}

TEST(LinkedListNode, addNextNode) {
  LinkedListNode *node = new LinkedListNode{"Id", "1000"};  
  LinkedListNode *next = new LinkedListNode{"Company", "TW"};  
  node -> addNext(next);

  ASSERT_EQ(node -> getNext(), next);
}