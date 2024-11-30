#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N, D;
  cin >> N >> D;
  string S;
  cin >> S;
  int cookie = 0;
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == '@') {
      S[i] = '.';
      cookie += 1;
    }
    if (cookie == D) {
      break;
    }
  }
  cout << S << endl;
}