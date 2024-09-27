#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  int res = 0;
  for (int i = 0; i < static_cast<int>(S.size()) - 2; i++) {
    if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
      res += 1;
    }
  }
  while (Q--) {
    int x;
    char c;
    cin >> x >> c;
    x--;
    for (int i = max(0, x - 2); i < min(static_cast<int>(S.size()) - 2, x + 1); i++) {
      if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
        res -= 1;
      }
    }
    S[x] = c;
    for (int i = max(0, x - 2); i < min(static_cast<int>(S.size()) - 2, x + 1); i++) {
      if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
        res += 1;
      }
    }
    cout << res << endl;
  }
}