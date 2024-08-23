#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int Q;
  cin >> Q;
  int res = 0;
  vector<int> X(1e6 + 1, 0);
  for (int i = 0; i < Q; i++) {
    int q, x;
    cin >> q;
    if (q == 1) {
      cin >> x;
      if (X[x]++ == 0)
        res += 1;
    }
    if (q == 2) {
      cin >> x;
      if (--X[x] == 0)
        res -= 1;
    }
    if (q == 3) {
      cout << res << endl;
    }
  }
}