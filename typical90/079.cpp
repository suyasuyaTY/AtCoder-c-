#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> B[i][j];
    }
  }
  long long res = 0;
  for (int i = 0; i < H - 1; i++) {
    for (int j = 0; j < W - 1; j++) {
      int d = B[i][j] - A[i][j];
      res += abs(d);
      A[i][j] += d;
      A[i][j + 1] += d;
      A[i + 1][j] += d;
      A[i + 1][j + 1] += d;
    }
  }
  if (A[H - 1][W - 1] == B[H - 1][W - 1]) {
    cout << "Yes\n";
    cout << res << endl;
  } else {
    cout << "No\n";
  }
}