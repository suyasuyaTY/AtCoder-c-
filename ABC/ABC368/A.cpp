#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  for (int i = 0; i < N; i++) {
    cout << A[(N - K + i) % N] << ' ';
  }
  cout << endl;
}