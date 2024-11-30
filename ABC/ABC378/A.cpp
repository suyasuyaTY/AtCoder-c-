#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

using int64 = int64_t;

int main() {
  vector<int> A(4);
  rep(i, 4) cin >> A[i];
  sort(A.begin(), A.end());
  if (A[0] == A[1]) {
    if (A[2] == A[3])
      cout << 2 << endl;
    else
      cout << 1 << endl;
  } else if (A[1] == A[2] || A[2] == A[3])
    cout << 1 << endl;
  else
    cout << 0 << endl;
}