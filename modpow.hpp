using ll = long long;

const ll mod = 1'000'000'007;
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