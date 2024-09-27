#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  string S;
  cin >> S;
  int big = 0, small = 0;
  for (char c : S) {
    if (isupper(c)) {
      big += 1;
    } else {
      small += 1;
    }
  }
  if (big > small) {
    transform(S.begin(), S.end(), S.begin(), ::toupper);
  } else {
    transform(S.begin(), S.end(), S.begin(), ::tolower);
  }
  cout << S << endl;
}