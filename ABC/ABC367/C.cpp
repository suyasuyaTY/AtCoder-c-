#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int N, K;

void check(int i, int m, vector<int> &res, vector<int> &R) {
  if (i == N) {
    if (m % K != 0)
      return;
    for (int j = 0; j < N; j++) {
      cout << res[j] << ' ';
    }
    cout << endl;
    return;
  }
  for (int j = 1; j <= R[i]; j++) {
    res[i] = j;
    check(i + 1, m + j, res, R);
  }
}

int main() {
  cin >> N >> K;
  vector<int> R(N), res(N);
  rep(i, N) cin >> R[i];
  check(0, 0, res, R);
}