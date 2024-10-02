#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

struct Edge {
  int to;
  long long weight;
  Edge(int t, long long w) : to(t), weight(w) {
  }
};

using Graph = vector<vector<Edge>>;

vector<bool> seen;
vector<long long> X;

void both_dfs(const Graph &G, const Graph &H, int v) {
  seen[v] = true;

  for (auto next : G[v]) {
    if (seen[next.to])
      continue;
    X[next.to] = X[v] + next.weight;
    both_dfs(G, H, next.to);
  }

  for (auto next : H[v]) {
    if (seen[next.to])
      continue;
    X[next.to] = X[v] - next.weight;
    both_dfs(G, H, next.to);
  }
}

int main() {
  int N, M;
  cin >> N >> M;

  Graph G(N), H(N);
  for (int i = 0; i < M; i++) {
    int from, to;
    long long weight;
    cin >> from >> to >> weight;
    from--, to--;
    G[from].emplace_back(to, weight);
    H[to].emplace_back(from, weight);
  }

  seen.assign(N, false);
  X.assign(N, 0);

  for (int i = 0; i < N; i++) {
    both_dfs(G, H, i);
  }

  for (auto x : X) {
    cout << x << ' ';
  }
  cout << endl;
}