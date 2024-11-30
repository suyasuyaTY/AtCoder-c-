#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int N, M;

int ans = 0;

void dfs(int i, vector<int> &res, bool is_print) {
  if (i == N) {
    if (is_print) {
      for (int j = 1; j <= N; j++) {
        cout << res[j] << ' ';
      }
      cout << endl;
    } else {
      ans += 1;
    }
    return;
  }
  for (int s = res[i] + 10; s + 10 * (N - i - 1) <= M; s++) {
    res[i + 1] = s;
    dfs(i + 1, res, is_print);
  }
}

int main() {
  cin >> N >> M;
  vector<int> res(N + 1);
  res[0] = -9;
  dfs(0, res, false);
  cout << ans << endl;
  dfs(0, res, true);
}