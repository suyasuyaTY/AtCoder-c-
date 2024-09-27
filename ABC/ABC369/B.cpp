#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, l = 0, r = 0, res = 0;
  cin >> N;
  int a;
  string s;
  for (int i = 0; i < N; i++) {
    cin >> a >> s;
    if (s == "L") {
      if (l != 0)
        res += abs(l - a);
      l = a;
    } else {
      if (r != 0)
        res += abs(r - a);
      r = a;
    }
  }
  cout << res << endl;
}