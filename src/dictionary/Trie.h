#ifndef _Trie_
#define _Trie_

#include <string_view>
#include <map>
#include <memory>

using namespace std;

class Trie {
    private:
    map<char, unique_ptr<Trie>> trieByCharacter;
    bool endOfWord;
    bool has(char ch);

    public:
    Trie();
    void add(string_view word);
    bool contains(string_view word);
};
#endif