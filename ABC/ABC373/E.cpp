#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

vector<long long> min_vote;

int main() {
  long long N, M, K, rest;
  cin >> N >> M >> K;
  rest = K;
  vector<int> A(N), B(N);
  rep(i, N) {
    cin >> A[i];
    B[i] = A[i];
    rest -= A[i];
  }
  sort(B.begin(), B.end());
  min_vote.assign(N, 0);
  for (int i = N - M + 1; i < N; i++) {
    min_vote[i] = min_vote[i - 1] + (B[i] - B[i - 1]) * (i - N + M);
  }
  for (int i = 0; i < N; i++) {
    if (A[i] + rest < B[N - M]) {
      cout << -1 << ' ';
      continue;
    }
    long long lb = 0, ub = rest;
    while (ub - lb > 0) {
      long long x = (lb + ub) / 2;
      long long i_get = A[i] + x;
      auto iter = lower_bound(B.begin(), B.end(), i_get);
      int d = iter - B.begin();
      if (min_vote[d] + (i_get - B[d]) * (d - N + M + 1) <= i_get) {
        ub = x;
      } else {
        lb = x + 1;
      }
    }
    cout << ub << ' ';
  }
  cout << endl;
}