#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

using int64 = int64_t;

int main() {
  int N;
  cin >> N;
  vector<int> Q(N + 1), R(N + 1);
  rep(i, N) cin >> Q[i + 1] >> R[i + 1];
  int T;
  cin >> T;
  rep(i, T) {
    int64 t, d;
    cin >> t >> d;
    int64 x = (d / Q[t]) * Q[t];
    if (x + R[t] < d)
      cout << x + Q[t] + R[t] << endl;
    else
      cout << x + R[t] << endl;
  }
}