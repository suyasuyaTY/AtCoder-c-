#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];
  vector<vector<int>> dp(N + 1, vector<int>(S + 1, 0));
  dp[0][0] = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= S; j++) {
      if (j + A[i] <= S)
        dp[i + 1][j + A[i]] += dp[i][j];
      if (j + B[i] <= S)
        dp[i + 1][j + B[i]] += dp[i][j];
    }
  }
  if (dp[N][S] == 0) {
    cout << "Impossible" << endl;
    return 0;
  }
  string res(N, ' ');
  int money = S;
  for (int i = N - 1; i >= 0; i--) {
    if (money - A[i] >= 0 && dp[i][money - A[i]] != 0) {
      res[i] = 'A';
      money -= A[i];
      continue;
    }
    if (money - B[i] >= 0 && dp[i][money - B[i]] != 0) {
      res[i] = 'B';
      money -= B[i];
    }
  }
  cout << res << endl;
}