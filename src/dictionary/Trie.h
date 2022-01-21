#ifndef _Trie_
#define _Trie_

#include <string>
#include <map>

using namespace std;

class Trie {
    private:
    map<char, Trie*> trieByCharacter;
    bool endOfWord;
    bool has(char ch);

    public:
    Trie();
    void add(string_view word);
    bool contains(string_view word);
};
#endif