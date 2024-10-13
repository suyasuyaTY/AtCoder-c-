#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int res = 0, wait = 0;
  for (int i = 0; i < N; i++) {
    if (wait + A[i] > K) {
      res += 1;
      wait = A[i];
    } else {
      wait += A[i];
    }
  }
  if (wait > 0)
    res += 1;
  cout << res << endl;
}