#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const long long mod = 998244353;

int main() {
  long long N, M;
  cin >> N >> M;
  long long res = 0;
  for (long long i = 1; i <= M; i *= 2) {
    if ((M & i) == 0)
      continue;
    long long cycle = N / (i * 2), rem = N % (i * 2);
    res += cycle * i;
    res %= mod;
    if (rem + 1 - i > 0)
      res += rem + 1 - i;
    res %= mod;
  }
  cout << res << endl;
}