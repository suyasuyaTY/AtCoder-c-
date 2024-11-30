#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int64_t res = 0;
int H, W, K;
vector<int> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
vector<vector<bool>> seen;

void dfs(const vector<string> &S, int x, int y, int k) {
  if (k == 0) {
    res += 1;
    return;
  }

  seen[y][x] = true;

  for (int i = 0; i < 4; i++) {
    int next_x = x + dx[i], next_y = y + dy[i];
    if (next_x < 0 || next_x >= W || next_y < 0 || next_y >= H)
      continue;
    if (!seen[next_y][next_x] && S[next_y][next_x] == '.') {
      dfs(S, next_x, next_y, k - 1);
    }
  }
  seen[y][x] = false;
}

int main() {
  cin >> H >> W >> K;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  seen.assign(H, vector<bool>(W, false));
  for (int x = 0; x < W; x++) {
    for (int y = 0; y < H; y++) {
      if (S[y][x] == '.')
        dfs(S, x, y, K);
    }
  }
  cout << res << endl;
}