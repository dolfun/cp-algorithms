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

struct safe_hash {
  ll operator()(ll x) const {
    static const ll FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return x ^ FIXED_RANDOM;
  }
};

#if (__cplusplus >= 202002L)
template <typename T>
concept Container = 
   ranges::range<T> && !convertible_to<T, string>;

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
  ((cout << forward<decltype(args)>(args) << ' '), ...);
}

void println(auto&&... args) {
  print(forward<decltype(args)>(args)...);
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
  while (t--)
    solve();
    
  return 0;
}

void solve() {
  
}