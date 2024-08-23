#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  if (T > A && T > N - T) {
    cout << "Yes" << endl;
  } else if (A > T && A > N - A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}