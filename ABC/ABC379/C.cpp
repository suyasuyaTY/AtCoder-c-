#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  uint64_t N, M;
  cin >> N >> M;
  vector<int64_t> X(M), A(M);
  rep(i, M) cin >> X[i];
  rep(i, M) cin >> A[i];
  vector<pair<int64_t, int64_t>> rook;
  rep(i, M) {
    rook.emplace_back(X[i], A[i]);
  }
  sort(rook.begin(), rook.end());
  int64_t rooks = 0;
  for (int i = 0; i < M; i++) {
    if (rook[i].first > rooks + 1) {
      cout << -1 << endl;
      return 0;
    }
    rooks += rook[i].second;
  }
  if (rooks != N) {
    cout << -1 << endl;
    return 0;
  }
  uint64_t res = N * (N - 1) / 2;
  for (int i = 0; i < M; i++) {
    res -= (rook[i].first - 1) * rook[i].second;
  }
  cout << res << endl;
}