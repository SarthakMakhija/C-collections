#include "LinkedListNode.h"

LinkedListNode::LinkedListNode(string key, string value) {
    this -> key = key;
    this -> value = value;
    this -> next = nullptr;
}

string LinkedListNode::getKey() {
    return this -> key;
}

string LinkedListNode::getValue() {
    return this -> value;
}

LinkedListNode* LinkedListNode::getNext() {
    return this -> next;
}

bool LinkedListNode::matches(string key) {
    return this -> key == key;
}

LinkedListNode* LinkedListNode::addNext(string key, string value) {
    LinkedListNode *next = new LinkedListNode(key, value);
    this -> addNext(next);
    return next;
}

void LinkedListNode::addNext(LinkedListNode *node) {
    this -> next = node;
}