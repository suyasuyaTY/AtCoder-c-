#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S, res = "";
  cin >> S;
  for (char c : S) {
    if (c != '.') {
      res.push_back(c);
    }
  }
  cout << res << endl;
}