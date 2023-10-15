#pragma once
#include <bits/stdc++.h>
using namespace std;
template <typename T>
using vec = vector<T>;
using ll = long long;

auto make_sieve(size_t N) {
    vec<int> sieve(N + 1);
    for (size_t i = 2; (ll)i * i <= N; ++i) {
        if (sieve[i]) continue;
        for (size_t x = 2 * i; x <= N; x += i) sieve[x] = i;
    }
    return sieve;
}
 
auto make_primes(size_t N) {
    vec<int> sieve(N + 1);
    for (size_t i = 2; (ll)i * i <= N; ++i) {
        if (sieve[i]) continue;
        for (size_t x = 2 * i; x <= N; x += i) sieve[x] = i;
    }
    vec<int> primes;
    for (int i = 2; i <= N; ++i)
        if (!sieve[i]) primes.push_back(i);
    return primes;
}
