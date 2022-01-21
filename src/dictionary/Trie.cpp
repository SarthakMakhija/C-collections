#include "Trie.h"

Trie::Trie() {
    this -> trieByCharacter = {};
    this -> endOfWord = false;
}

void Trie::add(string word) {
    Trie *head = this;
    for(auto ch : word) {
        if (head -> trieByCharacter.find(ch) == head -> trieByCharacter.end()) {
            head -> trieByCharacter.insert(make_pair(ch, new Trie()));
        }
        head  = head -> trieByCharacter.find(ch) -> second;
    }
    head -> endOfWord =  true;
}

bool Trie::contains(string word) {
    Trie *head = this;
    for(auto ch : word) {
        if (head -> trieByCharacter.find(ch) == head -> trieByCharacter.end()) {
            return false;
        }
        head  = head -> trieByCharacter.find(ch) -> second;
    }
    return head -> endOfWord;
}