#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  string S;
  cin >> S;
  vector<int> count(26, 0);
  if (S.size() % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }
  for (size_t i = 0; i < S.size(); i += 2) {
    if (S[i] != S[i + 1] || count[S[i] - 26] > 0) {
      cout << "No" << endl;
      return 0;
    }
    count[S[i] - 26] += 2;
  }
  cout << "Yes" << endl;
}