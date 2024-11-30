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
  for (int i = 0; i < N; i++) {
    if (S[i] == '@') {
      cookie += 1;
    }
  }
  cout << N - (cookie - D) << endl;
}