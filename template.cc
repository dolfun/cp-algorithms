#include <bits/stdc++.h>
#define fs first
#define sn second
#define pb push_back
#define mkpr make_pair

using namespace std;
#if (__cplusplus >= 202002L)
namespace R = ranges;
namespace V = views;
#endif

using str = string;
using ll = long long;
using ld = long double;
using ull = unsigned ll;
using uint = unsigned int;
template <class T> using vec = vector<T>;
template <class T, class U> using pr = pair<T, U>;
template <class T, size_t N> using arr = array<T, N>;
template <class T, class U>
using umap = unordered_map<T, U>;

template <class T>
ostream& operator<<(ostream& out, const vec<T>& v) {
  for (const auto& x : v)
    out << x << ' ';
  return out;
}

template <class T>
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
/*---------------------------------------------------------------------*/

void solve();

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t{ 1 };
  cin >> t;
  while (t--) {
    solve();
  }
    
  return 0;
}

void solve() {
  
}