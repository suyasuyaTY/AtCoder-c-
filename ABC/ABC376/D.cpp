#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;

  Graph G(N);

  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    G[a-1].push_back(b-1);
  }

  vector<int> dist(N, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(0);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int nv : G[v]) {
      if (nv == 0) {
        cout << dist[v] + 1 << endl;
        return 0;
      }
      if (dist[nv] != -1)
        continue;  // すでに発見済みの頂点は探索しない

      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  cout << -1 << endl;
  return 0;
}