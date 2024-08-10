#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using Fp = atcoder::modint998244353;

int main() {
  int64_t n;
  int k;
  cin >> n >> k;

  const Fp p = Fp(2 * (n - 1)) / Fp(n).pow(2);
  const Fp q = Fp(2) / Fp(n).pow(2);
  Fp d = 1;
  for (int i = 0; i < k; i++) {
    d = (1 - q - p) * d + q;
  }

  const Fp u = Fp(n + 2) / 2;
  cout << (d + u * (1 - d)).val() << endl;
  return 0;
}