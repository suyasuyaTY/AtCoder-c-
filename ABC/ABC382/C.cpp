#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  vector<int> C(2 * 1e5 + 1, N + 1);
  for (int i = 0; i < N; i++) {
    C[A[i]] = min(i + 1, C[A[i]]);
  }
  for (int i = 1; i <= 2 * 1e5; i++) {
    C[i] = min(C[i - 1], C[i]);
  }
  for (int i = 0; i < M; i++) {
    if (C[B[i]] == N + 1) {
      cout << -1 << endl;
    } else {
      cout << C[B[i]] << endl;
    }
  }
}