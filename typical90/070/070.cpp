#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> X(N), Y(N);
  for (int i = 0; i < N; i++) {
    cin >> X[i] >> Y[i];
  }
  sort(X.begin(), X.end());
  sort(Y.begin(), Y.end());
  long long tmp_X = 0, tmp_Y = 0, res_X = 1e18, res_Y = 1e18;
  for (int i = 0; i < N; i++) {
    tmp_X += abs(X[i] - X[0]);
  }
  res_X = min(res_X, tmp_X);
  for (int i = 1; i < N; i++) {
    tmp_X += abs(X[i] - X[i - 1]) * i;
    tmp_X -= abs(X[i] - X[i - 1]) * (N - i);
    res_X = min(res_X, tmp_X);
  }
  for (int i = 0; i < N; i++) {
    tmp_Y += abs(Y[i] - Y[0]);
  }
  res_Y = min(res_Y, tmp_Y);
  for (int i = 1; i < N; i++) {
    tmp_Y += abs(Y[i] - Y[i - 1]) * i;
    tmp_Y -= abs(Y[i] - Y[i - 1]) * (N - i);
    res_Y = min(res_Y, tmp_Y);
  }
  cout << res_X + res_Y << endl;
}