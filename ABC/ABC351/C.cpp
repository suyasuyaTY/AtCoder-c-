#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  rep(i, N) cin >> A[i];
  int res = 0;
  vector<long long> B(N);
  rep(i, N) {
    res += 1;
    B[res - 1] = A[i];
    while (res > 1) {
      if (B[res - 1] != B[res - 2])
        break;
      B[res - 2] += 1;
      res -= 1;
    }
  }
  cout << res << endl;
}