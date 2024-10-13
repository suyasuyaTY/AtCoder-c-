#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

using Graph = vector<vector<int>>;

int N;

void bfs(int s, Graph &g, vector<int> &d) {
  d[s] = 0;
  queue<int> q;
  q.push(s);
  while (!q.empty()) {
    int n = q.front();
    q.pop();
    for (int next : g[n]) {
      if (d[next] != -1)
        continue;
      d[next] = d[n] + 1;
      q.push(next);
    }
  }
}

int main() {
  cin >> N;
  Graph g(N + 1, vector<int>(0));
  rep(i, N - 1) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> d(N + 1, -1);
  bfs(1, g, d);
  int v = 0, max_d = 0;
  for (int i = 1; i <= N; i++) {
    if (d[i] > max_d) {
      v = i;
      max_d = d[i];
    }
  }
  d.assign(N + 1, -1);
  bfs(v, g, d);
  max_d = 0;
  for (int i = 1; i <= N; i++) {
    max_d = max(max_d, d[i]);
  }
  cout << max_d + 1 << endl;
}