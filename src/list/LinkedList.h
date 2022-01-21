#ifndef _LinkedList_
#define _LinkedList_

#include "LinkedListNode.h"
#include <string>
#include <vector>
#include <functional>

using namespace std;

class LinkedList {
    private:
    LinkedListNode *head;
    LinkedListNode *current;
    pair<bool, string> findIf(function<bool (LinkedListNode*)> condition);

    public:
    LinkedList();
    void add(string key, string value);
    bool contains(string key);
    string getBy(string key);
    vector<string> allKeys();
};
#endif