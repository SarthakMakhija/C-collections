#ifndef _BST_
#define _BST_

#include "BinarySearchTreeNode.h"
#include <string>
#include <memory>
#include <vector>

using namespace std;

class BinarySearchTree {
    private:
    unique_ptr<BinarySearchTreeNode> root;

    public:
    BinarySearchTree();

    void add(string key, string value);
    string getBy(string key);
    vector<string> allKeys();
};
#endif