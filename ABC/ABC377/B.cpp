#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  vector<string> S(8);
  rep(i, 8) cin >> S[i];
  int res = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      bool check = true;
      for (int x = 0; x < 8; x++) {
        if (S[i][x] == '#')
          check = false;
      }
      for (int y = 0; y < 8; y++) {
        if (S[y][j] == '#')
          check = false;
      }
      if (check)
        res += 1;
    }
  }
  cout << res << endl;
}