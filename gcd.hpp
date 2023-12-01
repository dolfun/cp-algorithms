#include <bits/stdc++.h>
using namespace std;

template <typename T>
T gcd(T a, T b) {
  return b ? gcd(b, a % b) : a;
}

template <typename T>
T gcd_extended(T a, T b, T& x, T& y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  T x1, y1;
  T d = gcd_extended(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return d;
}

[[gnu::target("popcnt")]]
unsigned int fast_gcd(unsigned int a, unsigned int b) {
  if (!a || !b) return a | b;
  unsigned int shift = __builtin_ctz(a | b);
  a >>= __builtin_ctz(a);
  do {
    b >>= __builtin_ctz(b);
    if (a > b) swap(a, b);
    b -= a;
  } while (b);
  return a << shift;
}