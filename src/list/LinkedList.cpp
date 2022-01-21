#include "LinkedList.h"
#include "LinkedListNode.h"

LinkedList::LinkedList() {
    this -> head = nullptr;
    this -> current = nullptr;
}

void LinkedList::add(string key, string value) {
    if (this -> head == nullptr) {
        this -> head = new LinkedListNode(key, value);
        this -> current = this -> head;
        return;
    }
    this -> current = this -> current -> addNext(key, value);
}

bool LinkedList::contains(string key) {
    LinkedListNode *node = this -> head;
    while (node != nullptr) {
        if (node -> matches(key)) {
            return true;
        }
        node = node -> getNext();
    }
    return false;
}

string LinkedList::getBy(string key) {
    LinkedListNode *node = this -> head;
    while (node != nullptr) {
        if (node -> matches(key)) {
            return node -> getValue();
        }
        node = node -> getNext();
    }
    return "";
}

vector<string> LinkedList::allKeys() {
    LinkedListNode *node = this -> head;
    vector<string> keys;
    while (node != nullptr) {
        keys.push_back(node -> getKey());
        node = node -> getNext();
    }
    return keys;
}