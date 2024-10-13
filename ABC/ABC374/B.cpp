#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int n = static_cast<int>(S.size()), m = static_cast<int>(T.size());
  if (n < m) {
    int res = n + 1;
    for (int i = 0; i < n; i++) {
      if (S[i] != T[i]) {
        res = i + 1;
        break;
      }
    }
    cout << res << endl;
  } else if (n > m) {
    int res = m + 1;
    for (int i = 0; i < m; i++) {
      if (S[i] != T[i]) {
        res = i + 1;
        break;
      }
    }
    cout << res << endl;
  } else {
    int res = 0;
    for (int i = 0; i < n; i++) {
      if (S[i] != T[i]) {
        res = i + 1;
        break;
      }
    }
    cout << res << endl;
  }
}