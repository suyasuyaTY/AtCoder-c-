#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  int res = 0, teeth = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'O')
      teeth += 1;
    else
      teeth = 0;
    if (teeth >= K) {
      teeth = 0;
      res += 1;
    }
  }
  cout << res << endl;
}