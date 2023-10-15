#pragma once
using ll = long long;

ll mod = 1'000'000'007;
ll modpow(ll x, ll n) {
    if (n == 0) return 1;
    ll res = modpow(x, n / 2);
    res = (res * res) % mod;
    if (n % 2 == 1) res = (res * x) % mod;
    return res;
}

ll modinv(ll x) {
    return modpow(x, mod - 2);
}

ll modpow(ll x, ll n, ll mod) {
    if (n == 0) return 1;
    ll res = modpow(x, n / 2, mod);
    res = (res * res) % mod;
    if (n % 2 == 1) res = (res * x) % mod;
    return res;
}

ll modinv(ll x, ll mod) {
    return modpow(x, mod - 2);
}