#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

vector<int> dx = {2, 1, -1, -2, -2, -1, 1, 2}, dy = {1, 2, 2, 1, -1, -2, -2, -1};

int main() {
  long long N, M;
  cin >> N >> M;
  long long res = N * N;
  set<pair<int, int>> not_install;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    if (!not_install.contains(make_pair(a, b))) {
      not_install.emplace(a, b);
      res -= 1;
    }
    for (int j = 0; j < 8; j++) {
      int next_a = a + dy[j], next_b = b + dx[j];
      if (not_install.contains(make_pair(next_a, next_b)))
        continue;
      if (next_a < 0 || next_a >= N || next_b < 0 || next_b >= N)
        continue;
      not_install.emplace(next_a, next_b);
      res -= 1;
    }
  }
  cout << res << endl;
}