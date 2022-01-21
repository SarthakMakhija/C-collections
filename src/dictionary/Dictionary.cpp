#include "Trie.h"
#include "Dictionary.h"

Dictionary::Dictionary() {
    this -> root = new Trie();
}

void Dictionary::add(string_view word) {
    this -> root -> add(word);
}

bool Dictionary::contains(string_view word) {
    return this -> root -> contains(word);
}