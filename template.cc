#include <bits/stdc++.h>
#define fs first
#define sn second

#ifdef ONLINE_JUDGE
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#endif

using namespace std;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;

#if (__cplusplus >= 202002L)
namespace rng = ranges;

template <typename T>
concept Container = 
  rng::range<T> && !convertible_to<T, string>;

template <Container T>
ostream& operator<<(ostream& out, const T& r) {
  for (const auto& v : r) out << v << ' ';
  return out;
}

template <Container T>
istream& operator>>(istream& in, T& r) {
  for (auto& v : r) in >> v;
  return in;
}
#endif

void print(auto&&... args) {
  ((cout << std::forward<decltype(args)>(args) << ' '), ...);
}

void println(auto&&... args) {
  print(std::forward<decltype(args)>(args)...);
  cout << '\n';
}
/*---------------------------------------------------------------------*/

void solve();

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t{1};
  cin >> t;
  while (t--) {
    solve();
  }
    
  return 0;
}

void solve() {
  
}