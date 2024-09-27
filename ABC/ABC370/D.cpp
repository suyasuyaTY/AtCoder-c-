#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int H, W, Q;
  cin >> H >> W >> Q;
  vector<vector<int>> Wall(H, vector<int>(W, 1));
  for (int i = 0; i < Q; i++) {
    int r, c;
    cin >> r >> c;
    r--;
    c--;
    if (Wall[r][c] == 1)
      Wall[r][c] = 0;
    else {
      for (int j = r - 1; j >= 0; j--) {
        if (Wall[j][c] == 1) {
          Wall[j][c] = 0;
          break;
        }
      }
      for (int j = r + 1; j < H; j++) {
        if (Wall[j][c] == 1) {
          Wall[j][c] = 0;
          break;
        }
      }
      for (int j = c - 1; j >= 0; j--) {
        if (Wall[r][j] == 1) {
          Wall[r][j] = 0;
          break;
        }
      }
      for (int j = c + 1; j < W; j++) {
        if (Wall[r][j] == 1) {
          Wall[r][j] = 0;
          break;
        }
      }
    }
  }
  int res = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      res += Wall[i][j];
    }
  }
  cout << res << endl;
}