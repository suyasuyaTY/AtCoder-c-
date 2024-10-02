#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(3, vector<int>(46, 0));
  rep(i, 3) {
    rep(j, N) {
      int k;
      cin >> k;
      k %= 46;
      A[i][k] += 1;
    }
  }
  long long res = 0;
  for (int i = 0; i < 46; i++) {
    for (int j = 0; j < 46; j++) {
      for (int k = 0; k < 46; k++) {
        if ((i + j + k) % 46 == 0) {
          res += A[0][i] * A[1][j] * A[2][k];
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}