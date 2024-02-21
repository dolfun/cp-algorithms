# Sieve of Eratosthenes

```cpp
auto make_sieve(size_t N) {
  vector<int> sieve(N + 1);
  for (size_t i = 2; i * i <= N; ++i) {
    if (sieve[i]) continue;
    for (size_t x = i * i; x <= N; x += i) {
      sieve[x] = i;
    }
  }
  return sieve;
}

auto make_primes(size_t N) {
  vector<int> primes;
  vector<char> sieve(N + 1, true);
  for (size_t i = 2; i <= N; ++i) {
    if (sieve[i]) primes.push_back(i);
    for (size_t x = i * i; x <= N; x += i) {
      sieve[x] = false;
    }
  }
  return primes;
}
```
