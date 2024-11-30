#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), idxs(N + 1, -1);
  rep(i, N) cin >> A[i];
  int idx = 0, start = 0;
  int res = 0, len = 0;
  while (idx < N - 1) {
    for (int i = idx; i < N - 1; i += 2) {
      if (A[i] != A[i + 1]) {
        res = max(res, len);
        len = 0;
        if (i >= 1 && A[i - 1] == A[i]) {
          idx = i - 1;
          start = i - 1;
        } else {
          idx = i + 1;
          start = i + 1;
        }
        break;
      } else if (idxs[A[i]] >= start) {
        res = max(res, len);
        len = i - idxs[A[i]];
        idx = i + 2;
        start = idxs[A[i]] + 2;
        idxs[A[i]] = i;
      } else {
        len += 2;
        res = max(res, len);
        idxs[A[i]] = i;
      }
    }
  }
  cout << res << endl;
}