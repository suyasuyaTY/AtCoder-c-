#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

using Graph = vector<vector<int>>;

vector<bool> seen;

void dfs_1(const Graph &G, int v, vector<int> &order) {
  seen[v] = true;
  for (auto next_v : G[v]) {
    if (seen[next_v])
      continue;
    dfs_1(G, next_v, order);
  }
  order.push_back(v);
}

long long dfs_2(const Graph &G, int v) {
  long long res = 1;
  seen[v] = true;
  for (auto next_v : G[v]) {
    if (seen[next_v])
      continue;
    res += dfs_2(G, next_v);
  }
  return res;
}

int main() {
  int N, M;
  cin >> N >> M;
  Graph G(N), G_inv(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G_inv[b].push_back(a);
  }
  seen.assign(N, false);
  vector<int> last_order;
  for (int i = 0; i < N; i++) {
    if (seen[i])
      continue;
    dfs_1(G, i, last_order);
  }
  seen.assign(N, false);
  long long res = 0;
  reverse(last_order.begin(), last_order.end());
  for (auto v : last_order) {
    if (seen[v])
      continue;
    long long tmp = dfs_2(G_inv, v);
    res += tmp * (tmp - 1) / 2;
  }
  cout << res << endl;
}