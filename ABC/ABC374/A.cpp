#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S;
  cin >> S;
  int n = static_cast<int>(S.size());
  if (n >= 3 && S[n - 3] == 's' && S[n - 2] == 'a' && S[n - 1] == 'n') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}