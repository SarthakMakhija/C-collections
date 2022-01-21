#ifndef _LinkedList_
#define _LinkedList_

#include "LinkedListNode.h"
#include <string>
#include <vector>
#include <functional>
#include <memory>

using namespace std;

class LinkedList {
    private:
    unique_ptr<LinkedListNode> head;
    unique_ptr<LinkedListNode> current;

    pair<bool, string> findIf(function<bool (const LinkedListNode*)> condition);

    public:
    LinkedList();

    void add(string key, string value);
    bool contains(string key);
    string getBy(string key);
    vector<string> allKeys();
    LinkedListNode* executeWhile(function<bool (const LinkedListNode*)> condition, 
                                 function<void (const LinkedListNode*)> execute = [](const LinkedListNode* node) {});
};
#endif