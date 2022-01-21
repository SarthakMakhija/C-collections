#include "BinarySearchTreeNode.h"

BinarySearchTreeNode::BinarySearchTreeNode(string key, string value) {
    this -> key = key;
    this -> value = value;
    this -> left = nullptr;
    this -> right = nullptr;
}

void BinarySearchTreeNode::add(string key, string value) {
     if (key < this->key) {
         if (this -> left != nullptr) {
            this -> left -> add(key, value);
         } else {
            this -> left = make_unique<BinarySearchTreeNode>(key, value);
            return;
         }
     } else if (key > this -> key) {
         if (this -> right != nullptr) {
            this -> right -> add(key, value);
         } else {
            this -> right = make_unique<BinarySearchTreeNode>(key, value);
            return;
         }
     } else {
         return;
     }
}

string BinarySearchTreeNode::getBy(string key) {
    if (key < this -> key) {
         if (this -> left != nullptr) {
            return this -> left -> getBy(key);
         } else {
            return "";
         }
     } else if (key > this -> key) {
         if (this -> right != nullptr) {
            return this -> right -> getBy(key);
         } else {
             return "";
         }
     } else {
         return this -> value;
     }
}

vector<string> BinarySearchTreeNode::allKeys() {
    vector<string> keys = {};
    return this -> allKeys(keys);
}

vector<string> BinarySearchTreeNode::allKeys(vector<string> &keys) {
    keys.push_back(this -> key);
    if (this -> left != nullptr) {
        this -> left -> allKeys(keys);
    }
    if (this -> right != nullptr) {
        this -> right -> allKeys(keys);
    }
    return keys;
}