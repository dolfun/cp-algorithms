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

template <typename T, typename Func>
T find_first_false(T l, T r, Func&& f) {
  return *R::partition_point(V::iota(l, r), forward<Func>(f));
}