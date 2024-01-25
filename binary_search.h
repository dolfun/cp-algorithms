#include <bits/stdc++.h>
using namespace std;
namespace rng = ranges;

// [l, r] way
template <class T, class F>
T find_first_false(T l, T r, F&& f) {
  --l; ++r;
  while (r - l > 1) {
    auto m = l + (r - l) / 2;
    if (f(m)) {
      l = m;
    } else {
      r = m;
    }
  }
  return r;
}

// (l, r) way
template <class T, class F>
T find_first_false(T l, T r, F&& f) {
  auto ans = -1;
  while (l <= r) {
    auto m = l + (r - l) / 2;
    if (f(m)) {
      l = m + 1;
    } else {
      ans = m;
      r = m - 1;
    }
  }
  return ans;
}

// [l, r) way
template <class T, class F>
T find_first_false(T l, T r, F&& f) {
  ++r;
  while (l < r) {
    auto m = l + (r - l) / 2;
    if (f(m)) {
      l = m + 1;
    } else {
      r = m;
    }
  }
  return r;
}

// Binary Lifting
template <class T, class F>
T find_first_false(T l, T r, F&& f) {
  if (l > r) return r + 1;
  ++r;
  T w = T(1) << __lg(r - l);
  --l;
  if (f(l + w)) l = r - w;
  for (w >>= 1; w >= T(1); w >>= 1)
    if (f(l + w)) l += w;
  return l + 1;
}

// C++20
auto find_first_false(auto l, auto r, auto&& f) {
  return *rng::partition_point(views::iota(l, r), forward<decltype(f)>(f));
}