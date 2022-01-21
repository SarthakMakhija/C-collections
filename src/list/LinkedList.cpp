#include "LinkedList.h"
#include "LinkedListNode.h"

LinkedList::LinkedList() {
    this -> head = nullptr;
}

void LinkedList::add(string key, string value) {
    if (this -> head == nullptr) {
        this -> head = make_unique<LinkedListNode>(key, value);
        return;
    }
    LinkedListNode *node = this -> executeWhile(
        [] (const LinkedListNode* node) -> bool {
            return node -> getNext() != nullptr;
        }
    );
    node -> addNext(key, value);
}

bool LinkedList::contains(string key) {
    return this -> findIf(
        [key] (const LinkedListNode* node) -> bool {
            return node -> matches(key);
        }
    ).first;
}

string LinkedList::getBy(string key) {
     return this -> findIf(
        [key] (const LinkedListNode* node) -> bool {
            return node -> matches(key);
        }
    ).second;
}

vector<string> LinkedList::allKeys() {
    vector<string> keys;
    this -> executeWhile(
        [] (const LinkedListNode* node) -> bool {
            return node != nullptr;
        }, 
        [&] (const LinkedListNode* node) -> void {
            keys.push_back(node -> getKey());
        }
    );
    return keys;
}

pair<bool, string> LinkedList::findIf(function<bool (const LinkedListNode*)> condition) {
    LinkedListNode *node = this -> head.get();
    while (node != nullptr) {
        if (condition(node)) {
            return make_pair(true, node -> getValue());
        }
        node = node -> getNext();
    }
    return make_pair(false, "");
}


LinkedListNode* LinkedList::executeWhile(function<bool (const LinkedListNode*)> condition, 
                                         function<void (const LinkedListNode*)> block) {

    LinkedListNode *node = this -> head.get();
    while (condition(node)) {
        block(node);
        node = node -> getNext();
    }
    return node;
}