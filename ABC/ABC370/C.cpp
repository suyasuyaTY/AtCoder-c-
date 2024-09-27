#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int N = static_cast<int>(S.size());
  vector<int> A(N);
  int res = N;
  for (int i = 0; i < N; i++) {
    if (S[i] < T[i])
      A[i] = -1;
    else if (S[i] > T[i])
      A[i] = 1;
    else
      res -= 1;
  }
  cout << res << endl;
  for (int i = 0; i < N; i++) {
    if (A[i] != 1)
      continue;
    S[i] = T[i];
    cout << S << endl;
  }
  for (int i = N - 1; i >= 0; i--) {
    if (A[i] != -1)
      continue;
    S[i] = T[i];
    cout << S << endl;
  }
}