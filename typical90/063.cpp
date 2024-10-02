#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> P(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> P[i][j];
    }
  }
  int res = 0;
  for (int i = 1; i <= (1 << H) - 1; i++) {
    vector<int> C(H * W, 0);
    int h = 0;
    for (int j = 0; j < H; j++) {
      if (i >> j & 1)
        h += 1;
    }
    for (int j = 0; j < W; j++) {
      int c = 0;
      for (int k = 0; k < H; k++) {
        if ((i >> k & 1) == 0)
          continue;
        if (c == 0)
          c = P[k][j];
        else if (c == P[k][j])
          continue;
        else {
          c = -1;
          break;
        }
      }
      if (c > 0)
        C[c - 1] += 1;
    }
    for (int j = 0; j < H * W; j++) {
      res = max(res, h * C[j]);
    }
  }
  cout << res << endl;
}