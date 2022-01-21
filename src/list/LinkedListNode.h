#ifndef _LinkedListNode_
#define _LinkedListNode_

#include <string>
#include <memory>

using namespace std;

class LinkedListNode {
    private:
    string key;
    string value;
    unique_ptr<LinkedListNode> next;

    public:
    LinkedListNode(string key, string value);

    bool matches(string key) const ;
    void addNext(unique_ptr<LinkedListNode> node);
    void addNext(string key, string value);

    string getKey() const; 
    string getValue();
    LinkedListNode* getNext() const;
};
#endif