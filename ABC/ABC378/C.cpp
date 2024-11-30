#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1), B(N + 1, -1);
  rep(i, N) cin >> A[i + 1];
  map<int, int> dict;
  for (int i = 1; i <= N; i++) {
    if (!dict.contains(A[i]))
      dict[A[i]] = i;
    else {
      B[i] = dict[A[i]];
      dict[A[i]] = i;
    }
  }
  for (int i = 1; i <= N; i++) {
    cout << B[i] << ' ';
  }
  cout << endl;
}