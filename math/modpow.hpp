using ll = long long;
using ld = long double;
using ull = unsigned long long;

constexpr ll mod = 1'000'000'007;
ll modpow(ll x, ll n, ll mod = mod) {
  if (n == 0) return 1;
  ll res = modpow(x, n / 2, mod);
  res = (res * res) % mod;
  if (n % 2 == 1) res = (res * x) % mod;
  return res;
}

ll modinv(ll x, ll mod = mod) {
  return modpow(x, mod - 2, mod);
}

ll powll(ll x, ll n) {
  if (n == 0) return 1;
  ll res = powll(x, n / 2);
  res *= res;
  if (n % 2 == 1) res *= x;
  return res;
}

ull modmult(ull a, ull b, ull mod = mod) {
  ld x; ull c; ll r;
  if (a >= mod) a %= mod;
  if (b >= mod) b %= mod;
  x = a;
  c = x * b / mod;
  r = (ll)(a * b - c * mod) % (ll)mod;
  return r < 0 ? r + mod : r;
}