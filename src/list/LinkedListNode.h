#ifndef _LinkedListNode_
#define _LinkedListNode_

#include <string>

using namespace std;

class LinkedListNode {
    private:
    string key;
    string value;
    LinkedListNode *next;

    public:
    LinkedListNode(string key, string value);
    bool matches(string key);
    void addNext(LinkedListNode *node);
    LinkedListNode* addNext(string key, string value);
    string getKey(); 
    string getValue();
    LinkedListNode* getNext();
};
#endif