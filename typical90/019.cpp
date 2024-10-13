#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const long long INF = 1e10;

vector<vector<long long>> dp(401, vector<long long>(401, INF));

long long calc_cost(int l, int r, vector<long long> &A) {
  if (dp[l][r] != INF) {
    return dp[l][r];
  }
  if (l == r) {
    return dp[l][r] = 0;
  }
  for (int i = l + 2; i < r; i += 2) {
    dp[l][r] = min(dp[l][r], calc_cost(l, i, A) + calc_cost(i, r, A));
  }
  dp[l][r] = min(dp[l][r], calc_cost(l + 1, r - 1, A) + abs(A[l] - A[r - 1]));
  return dp[l][r];
}

int main() {
  int N;
  cin >> N;
  vector<long long> A(2 * N);
  for (int i = 0; i < 2 * N; i++) {
    cin >> A[i];
  }
  cout << calc_cost(0, 2 * N, A) << endl;
}