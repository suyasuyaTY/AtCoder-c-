#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  vector<int> X(N, N), Y(N, N), Z(2, N), t(T);
  rep(i, T) cin >> t[i];
  rep(i, T) {
    int a = t[i];
    a--;
    X[a / N] -= 1;
    Y[a % N] -= 1;
    if (a % (N + 1) == 0) {
      Z[0] -= 1;
    }
    if (a % (N - 1) == 0 && a != N * N - 1 && a != 0) {
      Z[1] -= 1;
    }
    if (X[a / N] == 0 || Y[a % N] == 0 || Z[0] == 0 || Z[1] == 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}