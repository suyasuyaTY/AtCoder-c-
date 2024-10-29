#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N - 1);
  rep(i, N) cin >> A[i];
  rep(i, N - 1) cin >> B[i];
  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());
  int x = -1, j = 0;
  for (int i = 0; i < N; i++) {
    if (j == N - 1) {
      x = A[i];
      continue;
    }
    if (A[i] <= B[j]) {
      j += 1;
      continue;
    } else if (x != -1) {
      cout << -1 << endl;
      return 0;
    } else {
      x = A[i];
    }
  }
  cout << x << endl;
}