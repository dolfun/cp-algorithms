#include <bits/stdc++.h>
using namespace std;
template <typename T>
using vec = vector<T>;

template <typename T>
auto vec_of_vec(size_t n, size_t m) {
  return vec<vec<T>>(n, vec<T>(m));
}

template <typename T>
ostream& operator<<(ostream& out, const vec<T>& v) {
  for (const auto& x : v)
    out << x << ' ';
  return out;
}

template <typename T>
istream& operator>>(istream& in, vec<T>& v) {
  for (auto& x : v)
    in >> x;
  return in;
}

void print(auto&&... args) {
  ((cout << forward<decltype(args)>(args) << ' '), ...);
}

void println(auto&&... args) {
  print(forward<decltype(args)>(args)...);
  cout << '\n';
}

auto find_first_false(auto l, auto r, auto&& f) {
  return *R::partition_point(V::iota(l, r), forward<decltype(f)>(f));
}

auto find_last_true(auto l, auto r, auto&& f) {
  return *R::partition_point(V::iota(l, r), forward<decltype(f)>(f)) - 1;
}