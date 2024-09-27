#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), d(N - 1);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N - 1; i++) {
    d[i] = A[i + 1] - A[i];
  }
  long long res = N;
  int l = 1, D = 1e9;
  for (int i = 0; i < N - 1; i++) {
    if (D == 1e9) {
      D = d[i];
    } else if (D == d[i]) {
      l += 1;
    } else {
      res += (l + 1) * l / 2;
      D = 1e9;
      l = 1;
    }
  }
  res += (l + 1) * l / 2;
  cout << res << endl;
}