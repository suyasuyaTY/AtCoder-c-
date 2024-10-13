#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

bool p(long long x, long long K, vector<long long> &A) {
  long long piece = 0, size = 0;
  for (int i = 1; i < static_cast<int>(A.size()); i++) {
    size += A[i] - A[i - 1];
    if (size >= x) {
      piece += 1;
      size = 0;
    }
  }
  return piece >= K + 1;
}

int main() {
  long long N, L, K;
  cin >> N >> L >> K;
  vector<long long> A(N + 2);
  rep(i, N) cin >> A[i + 1];
  A[0] = 0, A[N + 1] = L;
  long long lb = -1, ub = L + 1;
  while (ub - lb > 1) {
    long long mid = (ub + lb) / 2;
    if (p(mid, K, A))
      lb = mid;
    else
      ub = mid;
  }
  cout << lb << endl;
}