#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const int MAX_H = 3010;
const int MAX_W = 3010;

int H, W;
vector<string> S(MAX_H);
vector<int> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
vector<vector<bool>> seen(MAX_H, vector<bool>(MAX_W));
vector<vector<bool>> is_leaf(MAX_H, vector<bool>(MAX_W));

bool in_fid(int y, int x) {
  return 0 <= y && y < H && 0 <= x && x < W;
}

void main() {
  cin >> H >> W;
  rep(i, H) cin >> S[i];
  rep(i, H) rep(j, W) {
    if (S[i][j] == '#')
      continue;
    bool flag = false;
    rep(k, 4) {
      int ny = i + dy[k];
      int nx = j + dx[k];
      if (in_fid(ny, nx) && fid[ny][nx] == '#')
        flag = true;
    }
    if (flag)
      nei[i][j] = true;
  }
  int res = 1;
  rep(i, H) {
    rep(j, W) {
      if (S[i][j] == '#' || seen[i][j] || is_leaf[i][j])
        continue;
      queue<pair<int, int>> que;
      que.push({i, j});
      int cnt = 0;
      set<pair<int, int>> st;
      while (!que.empty()) {
        auto [y, x] = que.front();
        que.pop();

        if (S[y][x] == '#')
          assert(false);

        if (is_leaf[y][x]) {
          st.insert({y, x});
          continue;
        }

        if (seen[y][x])
          continue;
        seen[y][x] = true;
        cnt++;

        rep(k, 4) {
          int ny = y + dy[k];
          int nx = x + dx[k];
          if (in_fid(ny, nx))
            que.push({ny, nx});
        }
      }
      res = max(res, cnt);
    }
  }
  cout << res << endl;
}