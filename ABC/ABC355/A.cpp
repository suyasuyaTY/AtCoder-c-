#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A == B)
    cout << -1 << endl;
  else {
    cout << 6 - A - B << endl;
  }
}