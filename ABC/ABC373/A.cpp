#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  vector<string> S(12);
  int res = 0;
  rep(i, 12) {
    cin >> S[i];
    if (i + 1 == static_cast<int>(S[i].size()))
      res += 1;
  }
  cout << res << endl;
}