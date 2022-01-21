#include "Trie.h"
#include "Dictionary.h"

Dictionary::Dictionary() {
    this -> root = new Trie();
}

void Dictionary::add(string word) {
    this -> root -> add(word);
}

bool Dictionary::contains(string word) {
    return this -> root -> contains(word);
}