#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  vector<int> A;
  string S;
  cin >> S;
  int count = 0;
  for (size_t i = 1; i < S.size(); i++) {
    if (S[i] == '-') {
      count += 1;
    } else {
      A.push_back(count);
      count = 0;
    }
  }
  for (auto x : A) {
    cout << x << ' ';
  }
  cout << endl;
}