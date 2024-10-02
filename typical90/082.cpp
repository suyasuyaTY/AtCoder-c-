#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const long long mod = 1e9 + 7;

long long calc(long long k, long long s, long long e) {
  long long n = e - s + 1;
  long long l = s + e;
  if (n % 2 == 0)
    n >>= 1;
  else
    l >>= 1;
  n %= mod;
  l %= mod;
  return (((k * n) % mod) * l) % mod;
}

int main() {
  long long L, R;
  cin >> L >> R;
  long long l = 0, r = 0, t;
  for (t = 1; t <= L; t *= 10) {
    l += 1;
    if (l == 19) {
      break;
    }
  }
  for (long long i = 1; i <= R; i *= 10) {
    r += 1;
    if (r == 19) {
      break;
    }
  }
  long long res = 0;
  if (l == r) {
    res = calc(l, L, R);
  } else {
    res = calc(l, L, t - 1);
    for (long long i = l + 1; i < r; i++) {
      res += calc(i, t, t * 10 - 1);
      res %= mod;
      t *= 10;
    }
    res += calc(r, t, R);
  }
  res %= mod;
  cout << res << endl;
}