#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<char> H(Q);
  vector<int> T(Q);
  rep(i, Q) cin >> H[i] >> T[i];
  int l = 1, r = 2, res = 0;
  for (int i = 0; i < Q; i++) {
    if (l < r) {
      if (H[i] == 'L') {
        if (1 <= T[i] && T[i] <= l) {
          res += l - T[i];
        } else if (l < T[i] && T[i] < r) {
          res += T[i] - l;
        } else {
          res += l + N - T[i];
        }
        l = T[i];
      } else {
        if (1 <= T[i] && T[i] < l) {
          res += T[i] + N - r;
        } else if (l < T[i] && T[i] <= r) {
          res += r - T[i];
        } else {
          res += T[i] - r;
        }
        r = T[i];
      }
    } else {
      if (H[i] == 'L') {
        if (1 <= T[i] && T[i] < r) {
          res += T[i] + N - l;
        } else if (r < T[i] && T[i] <= l) {
          res += l - T[i];
        } else {
          res += T[i] - l;
        }
        l = T[i];
      } else {
        if (1 <= T[i] && T[i] <= r) {
          res += r - T[i];
        } else if (r < T[i] && T[i] < l) {
          res += T[i] - r;
        } else {
          res += r + N - T[i];
        }
        r = T[i];
      }
    }
  }
  cout << res << endl;
}