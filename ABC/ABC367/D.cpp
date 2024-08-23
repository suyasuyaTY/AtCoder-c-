#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(2 * N);
  rep(i, N) cin >> A[i];
  map<int, int> m;
  for (int i = 0; i < M; i++)
    m[i] = 0;
  for (int i = 1; i < N; i++) {
    B[i] += B[i - 1] + A[i - 1];
    B[i] %= M;
    m[B[i]] += 1;
  }
  long long res = 0;
  for (int i = 0; i < N; i++) {
    if (i > 0)
      m[B[i]] -= 1;
    res += m[B[i]];
    B[i + N] += B[i + N - 1] + A[(i + N - 1) % N];
    B[i + N] %= M;
    m[B[i + N]] += 1;
  }
  cout << res << endl;
}