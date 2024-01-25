#include <bits/stdc++.h>
using namespace std;

template <typename T>
auto vector2d(size_t n, size_t m, T val = 0) {
  return vector<vector<T>>(n, vector<T>(m, val));
}