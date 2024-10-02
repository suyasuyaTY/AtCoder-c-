#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> P(26);
  for (int i = 0; i < 26; i++) {
    P[S[i] - 'A'] = i;
  }
  int res = 0;
  for (int i = 1; i < 26; i++) {
    res += abs(P[i] - P[i - 1]);
  }
  cout << res << endl;
}