#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> K(N);
  rep(i, N) cin >> K[i];
  int sum = 0;
  rep(i, N) sum += K[i];
  int res = sum;
  for (int i = 0; i < (1 << (N - 1)); i++) {
    int tmp = 0;
    for (int j = 0; j < N - 1; j++) {
      if (i & (1 << j)) {
        tmp += K[j];
      }
    }
    res = min(res, max(tmp, sum - tmp));
  }
  cout << res << endl;
}