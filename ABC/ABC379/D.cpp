#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int Q;
  cin >> Q;
  queue<int64_t> trees;
  int64_t day = 0;
  while (Q--) {
    int q;
    cin >> q;
    if (q == 1) {
      trees.push(day);
    }
    if (q == 2) {
      int64_t t;
      cin >> t;
      day += t;
    }
    if (q == 3) {
      int64_t h;
      cin >> h;
      int res = 0;
      while (!trees.empty()) {
        int64_t tree = trees.front();
        if (day - tree >= h) {
          res += 1;
          trees.pop();
        } else
          break;
      }
      cout << res << endl;
    }
  }
}