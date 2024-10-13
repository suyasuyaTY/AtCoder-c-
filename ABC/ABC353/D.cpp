#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

using mint = atcoder::modint998244353;

int calc_keta(long long x) {
  int res = 0;
  while (x > 0) {
    x /= 10;
    res += 1;
  }
  return res;
}

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  mint res = 0;
  for (int i = 0; i < N; i++) {
    res += i * A[i];
  }
  vector<int> keta(11, 0);
  for (int i = N - 1; i >= 0; i--) {
    for (int j = 1; j <= 10; j++) {
      res = res + mint::raw(A[i]) * mint(10).pow(j) * mint::raw(keta[j]);
    }
    keta[calc_keta(A[i])] += 1;
  }
  cout << res.val() << endl;
}