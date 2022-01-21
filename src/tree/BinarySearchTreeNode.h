#ifndef _BSTNode_
#define _BSTNode_

#include <string>
#include <memory>
#include <vector>

using namespace std;

class BinarySearchTreeNode {
    private:
    unique_ptr<BinarySearchTreeNode> left;
    unique_ptr<BinarySearchTreeNode> right;
    string key;
    string value;

    vector<string> allKeys(vector<string> &keys);
    
    public:
    BinarySearchTreeNode(string key, string value);

    void add(string key, string value);
    string getBy(string key);
    vector<string> allKeys();
};
#endif