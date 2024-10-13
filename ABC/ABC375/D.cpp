#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S;
  cin >> S;
  int N = static_cast<int>(S.size());
  vector<long long> char_count(26, 0);
  vector<vector<int>> char_last(26);
  vector<vector<long long>> dp(26, vector<long long>(N + 1));
  for (int i = 1; i <= N; i++) {
    int c = S[i - 1] - 'A';
    for (int j = 0; j < 26; j++) {
      dp[j][i] = dp[j][i - 1] + char_count[j];
    }
    char_last[c].push_back(i - 1);
    char_count[c] += 1;
  }
  long long res = 0;
  for (int i = 0; i < 26; i++) {
    for (int j : char_last[i]) {
      res += dp[i][j];
    }
  }
  cout << res << endl;
}