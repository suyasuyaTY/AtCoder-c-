#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N;
  cin >> N;
  string S, T;
  cin >> S;
  T = string(N / 2, '1') + "/" + string(N / 2, '2');
  if (S == T) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}