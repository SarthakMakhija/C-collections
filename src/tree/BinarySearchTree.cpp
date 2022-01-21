#include "BinarySearchTree.h"
#include "BinarySearchTreeNode.h"

BinarySearchTree::BinarySearchTree() {
    this -> root = nullptr;
}

void BinarySearchTree::add(string key, string value) {
    if (this -> root == nullptr) {
        this -> root = make_unique<BinarySearchTreeNode>(key, value);
        return;
    }
    this -> root -> add(key, value);
}

string BinarySearchTree::getBy(string key) {
    if (this -> root == nullptr) {
        return "";
    }
    return this -> root -> getBy(key);
}

vector<string> BinarySearchTree::allKeys() {
    if (this -> root == nullptr) {
        return vector<string>{};
    }
    return this -> root -> allKeys();
}