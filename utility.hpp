#include <bits/stdc++.h>
using namespace std;

template <typename T>
auto vector2d(size_t n, size_t m, T val = 0) {
  return vector<vector<T>>(n, vector<T>(m, val));
}

auto find_first_false(auto l, auto r, auto&& f) {
  return *ranges::partition_point(views::iota(l, r), forward<decltype(f)>(f));
}

auto find_last_true(auto l, auto r, auto&& f) {
  return *ranges::partition_point(views::iota(l, r), forward<decltype(f)>(f)) - 1;
}