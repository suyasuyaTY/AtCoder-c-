#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const long long mod = 1e9 + 7;

int main() {
  int N, L;
  cin >> N >> L;
  vector<long long> dp(N + 1, 0);
  dp[0] = 1;
  for (int i = 1; i <= N; i++) {
    dp[i] += dp[i - 1];
    if (i >= L)
      dp[i] += dp[i - L];
    dp[i] %= mod;
  }
  cout << dp[N] << endl;
}