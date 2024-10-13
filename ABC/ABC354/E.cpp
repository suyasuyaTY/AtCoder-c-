#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int N;

bool is_second_winner(int k, vector<vector<int>> &pair, vector<int> &dp) {
  if (dp[k] == 0)
    return false;
  if (dp[k] == 1)
    return true;
  for (int i = 0; i < N; i++) {
    if (k & (1 << i)) {
      for (int j : pair[i]) {
        if (k & (1 << j)) {
          if (is_second_winner(k & ~(1 << i) & ~(1 << j), pair, dp)) {
            dp[k] = 0;
            return false;
          }
        }
      }
    }
  }
  dp[k] = 1;
  return true;
}

int main() {
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }
  vector<vector<int>> pair(N);
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (A[i] == A[j] || B[i] == B[j]) {
        pair[i].push_back(j);
        pair[j].push_back(i);
      }
    }
  }
  vector<int> dp((1 << N), -1);
  if (is_second_winner((1 << N) - 1, pair, dp)) {
    cout << "Aoki" << endl;
  } else {
    cout << "Takahashi" << endl;
  }
}