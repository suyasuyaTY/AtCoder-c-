#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int i = 0;
  for (char c : S) {
    while (c != T[i])
      i += 1;
    cout << ++i << ' ';
  }
  cout << endl;
}