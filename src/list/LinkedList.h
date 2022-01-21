#ifndef _LinkedList_
#define _LinkedList_

#include "LinkedListNode.h"
#include <string>
#include <vector>

using namespace std;

class LinkedList {
    private:
    LinkedListNode *head;
    LinkedListNode *current;

    public:
    LinkedList();
    void add(string key, string value);
    bool contains(string key);
    string getBy(string key);
    vector<string> allKeys();
};
#endif