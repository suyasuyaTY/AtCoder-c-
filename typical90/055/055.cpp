#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
int P, Q;

int main() {
  int N;
  cin >> N >> P >> Q;
  vector<long long> A(N);
  rep(i, N) {
    cin >> A[i];
    A[i] %= P;
  }
  long long res = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        for (int l = k + 1; l < N; l++) {
          for (int m = l + 1; m < N; m++) {
            if (A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q)
              res += 1;
          }
        }
      }
    }
  }
  cout << res << endl;
}