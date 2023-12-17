#include <bits/stdc++.h>
using namespace std;

auto make_sieve(size_t N) {
  vector<int> sieve(N + 1);
  for (size_t i = 2; i * i <= N; ++i) {
    if (sieve[i]) continue;
    for (size_t x = 2 * i; x <= N; x += i)
      sieve[x] = i;
  }
  return sieve;
}

auto make_primes(size_t N) {
  auto sieve = make_sieve(N);
  vector<int> primes;
  for (size_t i = 2; i <= N; ++i)
    if (!sieve[i]) primes.push_back(i);
  return primes;
}