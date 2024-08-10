#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  //0: グー,　1: パー、2: チョキ
  vector<vector<int>> dp(N + 1, vector<int>(3, 0));
  for (int i = 1; i <= N; i++) {
    if (S[i - 1] == 'R') {
      dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]);
      dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + 1;
    }
    if (S[i - 1] == 'P') {
      dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]);
      dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
    }
    if (S[i - 1] == 'S') {
      dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + 1;
      dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]);
    }
  }
  cout << max(max(dp[N][0], dp[N][1]), dp[N][2]) << endl;
}