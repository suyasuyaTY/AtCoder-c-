#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, res = 0;
  cin >> N;
  vector<int> A(N), W(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> W[i];
  vector<vector<int>> M(N, vector<int>(0));
  for (int i = 0; i < N; i++) {
    M[A[i] - 1].push_back(W[i]);
  }
  for (int i = 0; i < N; i++) {
    if (M[i].size() <= 1) continue;
    sort(M[i].begin(), M[i].end());
    for (int j = 0; j < static_cast<int>(M[i].size()) - 1; j++) {
      res += M[i][j];
    }
  }
  cout << res << endl;
  return 0;
}