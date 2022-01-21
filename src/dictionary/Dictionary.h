#ifndef _Dictionary_
#define _Dictionary_

#include <string>
#include "Trie.h"

using namespace std;

class Dictionary {
    private:
    Trie *root;

    public:
    Dictionary();
    void add(string word);
    bool contains(string word);
};
#endif