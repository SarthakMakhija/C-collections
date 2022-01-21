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
    return this -> next.get();
}

bool LinkedListNode::matches(string key) {
    return this -> key == key;
}

void LinkedListNode::addNext(string key, string value) {
    unique_ptr<LinkedListNode> next = make_unique<LinkedListNode>(key, value);
    this -> addNext(move(next));
}

void LinkedListNode::addNext(unique_ptr<LinkedListNode> node) {
    this -> next = move(node);
}