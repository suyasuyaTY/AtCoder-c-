#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const long long mod = 1e9 + 7;

int main() {
  int N;
  cin >> N;
  vector<vector<long long>> A(N, vector<long long>(6)), B(N, vector<long long>(6));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> A[i][j];
    }
  }
  for (int j = 0; j < 6; j++) {
    B[0][j] = A[0][j];
  }
  for (int i = 1; i < N; i++) {
    for (int j = 0; j < 6; j++) {
      for (int k = 0; k < 6; k++) {
        B[i][j] = (B[i][j] + B[i - 1][k] * A[i][j]) % mod;
      }
    }
  }
  long long res = 0;
  for (int j = 0; j < 6; j++) {
    res += B[N - 1][j];
    res %= mod;
  }
  cout << res << endl;
}