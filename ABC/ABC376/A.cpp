#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, C;
  cin >> N >> C;
  vector<int> T(N);
  rep(i, N) cin >> T[i];
  int res = 1, t = T[0];
  for (int i = 1; i < N; i++) {
    if (T[i] - t >= C) {
      res += 1;
      t = T[i];
    }
  }
  cout << res << endl;
}
