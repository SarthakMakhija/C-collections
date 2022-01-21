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
    return this -> findIf([key] (LinkedListNode* node) -> bool {
        return node -> matches(key);
    }).first;
}

string LinkedList::getBy(string key) {
    return this -> findIf([key] (LinkedListNode* node) -> bool {
        return node -> matches(key);
    }).second;
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

pair<bool, string> LinkedList::findIf(function<bool (LinkedListNode*)> condition) {
    LinkedListNode *node = this -> head;
    while (node != nullptr) {
        if (condition(node)) {
            return make_pair(true, node -> getValue());
        }
        node = node -> getNext();
    }
    return make_pair(false, "");
}