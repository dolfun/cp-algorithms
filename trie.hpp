#include <bits/stdc++.h>
using namespace std;
template <typename T>
using vec = vector<T>;

struct Node {
  array<int, 26> next{};
  Node() { next.fill(-1); }
};
vec<Node> trie{{}};

void add_string(string_view s) {
  int v = 0;
  for (auto ch : s) {
    int c = ch - 'a';
    if (trie[v].next[c] == -1) {
      trie[v].next[c] = trie.size();
      trie.emplace_back();
    }
    v = trie[v].next[c];
  }
}

void traverse(string_view s) {
  int v = 0;
  for (auto ch : s) {
    int c = ch - 'a';
    v = trie[v].next[c];
    if (v == -1) break;
  }
}