#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int Q;
  cin >> Q;
  vector<int> Up, Down;
  for (int i = 0; i < Q; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 1)
      Up.push_back(x);
    if (t == 2)
      Down.push_back(x);
    if (t == 3) {
      if (x <= static_cast<int>(Up.size())) {
        cout << Up[static_cast<int>(Up.size()) - x] << endl;
      } else {
        cout << Down[x - static_cast<int>(Up.size()) - 1] << endl;
      }
    }
  }
}