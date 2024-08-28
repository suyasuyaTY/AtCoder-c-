#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<set<int>> G(N + 1, set<int>());
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    G[a].insert(b);
    G[b].insert(a);
  }
  int res = N;
  stack<int> s;
  vector<int> V(N + 1, 0);
  for (int i = 1; i <= N; i++) {
    if (G[i].size() == 1)
      s.push(i);
  }
  for (int i = 0; i < K; i++) {
    int v;
    cin >> v;
    V[v] += 1;
  }
  while (!s.empty()) {
    int p = s.top();
    s.pop();
    if (V[p] == 1)
      continue;
    for (int np : G[p]) {
      res -= 1;
      G[np].erase(p);
      if (G[np].size() == 1)
        s.push(np);
    }
  }
  cout << res << endl;
}