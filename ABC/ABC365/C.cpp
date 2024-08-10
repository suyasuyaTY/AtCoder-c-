#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

bool check(long long x, int N, long long M, vector<long long> &A) {
  for (int i = 0; i < N; i++) {
    M -= min(x, A[i]);
  }
  return M >= 0;
}

int main() {
  int N;
  long long M;
  cin >> N >> M;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  long long lb = 0, ub = 2 * 1e14 + 2;
  while (ub - lb > 1) {
    long long mid = (ub + lb) / 2;
    if (check(mid, N, M, A))
      lb = mid;
    else
      ub = mid;
  }
  if (ub == 2 * 1e14 + 2)
    cout << "infinite" << endl;
  else
    cout << lb << endl;
}