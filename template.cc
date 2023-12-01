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
using uint = unsigned int;
using ull = unsigned long long;
template <typename T> using vec = vector<T>;
template <typename T, typename U> using pr = pair<T, U>;
template <typename T, typename U>
using umap = unordered_map<T, U>;

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

template <typename Arg, typename... Args>
void print(Arg&& arg, Args&&... args) {
  cout << std::forward<Arg>(arg);
  ((cout << ' ' << std::forward<Args>(args)), ...);
}
/*---------------------------------------------------------------------*/

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
    
  return 0;
}