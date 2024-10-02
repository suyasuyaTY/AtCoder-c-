#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<long long> A(N), D(N - 1);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  long long res = 0;
  for (int i = 0; i < N - 1; i++) {
    D[i] = A[i + 1] - A[i];
    res += abs(D[i]);
  }
  for (int i = 0; i < Q; i++) {
    int l, r, v;
    cin >> l >> r >> v;
    l--;
    r--;
    if (l > 0) {
      res = res - abs(D[l - 1]) + abs(D[l - 1] + v);
      D[l - 1] += v;
    }
    if (r < N - 1) {
      res = res - abs(D[r]) + abs(D[r] - v);
      D[r] += -v;
    }
    cout << res << endl;
  }
}