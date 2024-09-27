#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    if (a < b) {
      if (A[b] == 1)
        A[b] = -1;
      else if (A[b] == 0)
        A[b] = 1;
    } else if (a > b) {
      if (A[a] == 1)
        A[a] = -1;
      else if (A[a] == 0)
        A[a] = 1;
    }
  }
  int res = 0;
  for (int i = 0; i < N; i++) {
    if (A[i] == 1)
      res += 1;
  }
  cout << res << endl;
}