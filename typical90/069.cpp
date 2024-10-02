#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

long long mod = 1e9 + 7;

long long mypow(long long x, long long n) {
  long long res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}

int main() {
  long long n, k;
  cin >> n >> k;
  if (n == 1)
    cout << k << endl;
  else if (n == 2)
    cout << k * (k - 1) % mod << endl;
  else {
    cout << (k * (k - 1) % mod) * mypow((k - 2), n - 2) % mod << endl;
  }
}