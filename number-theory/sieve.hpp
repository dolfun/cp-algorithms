#pragma once
#include <bits/stdc++.h>
using namespace std;

vector<int> make_sieve(size_t N) {
    vector<int> sieve(N + 1);
    for (size_t i = 2; (long long)i * i <= N; ++i) {
        if (sieve[i]) continue;
        for (size_t x = 2 * i; x <= N; x += i) {
            sieve[x] = static_cast<int>(i);
        }
    }
    return sieve;
}
