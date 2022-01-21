#include "Trie.h"

Trie::Trie() {
    this -> endOfWord = false;
}

void Trie::add(string_view word) {
    Trie *head = this;
    for(auto ch : word) {
        if (!head -> has(ch)) {
            head -> trieByCharacter.insert(make_pair(ch, make_unique<Trie>()));
        }
        head  = head -> trieByCharacter.find(ch) -> second.get();
    }
    head -> endOfWord =  true;
}

bool Trie::contains(string_view word) {
    Trie *head = this;
    for(auto ch : word) {
        if (!head -> has(ch)) {
            return false;
        }
        head  = head -> trieByCharacter.find(ch) -> second.get();
    }
    return head -> endOfWord;
}

bool Trie::has(char ch) {
    return this -> trieByCharacter.find(ch) != this -> trieByCharacter.end();
}