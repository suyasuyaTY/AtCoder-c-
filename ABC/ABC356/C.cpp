#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int calc_keys(int n, int N) {
  int k = 0;
  for (int j = 0; j < N; j++) {
    if ((n >> j) & 1) {
      k += 1;
    }
  }
  return k;
}

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  vector<int> A(M, 0);
  vector<char> R(M);
  for (int i = 0; i < M; i++) {
    int c;
    cin >> c;
    for (int j = 0; j < c; j++) {
      int a;
      cin >> a;
      a--;
      A[i] |= (1 << a);
    }
    cin >> R[i];
  }
  int res = 0;
  for (int i = 0; i < (1 << N); i++) {
    bool judge = true;
    for (int j = 0; j < M; j++) {
      if (calc_keys(i & A[j], N) >= K && R[j] == 'o')
        continue;
      else if (calc_keys(i & A[j], N) < K && R[j] == 'x')
        continue;
      else {
        judge = false;
        break;
      }
    }
    if (judge)
      res += 1;
  }
  cout << res << endl;
}