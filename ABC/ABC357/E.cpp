#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  long long N;
  cin >> N;
  vector<long long> A(N + 1, 0);
  for (long long i = 1; i <= N; i++) {
    cin >> A[i];
  }
  vector<long long> check(N + 1, -1), res(N + 1, 0);
  for (long long i = 1; i <= N; i++) {
    if (check[i] >= 0)
      continue;
    long long p = i, d = 0;
    while (check[p] == -1) {
      check[p] = d;
      p = A[p];
      d += 1;
    }
    if (res[p] == 0) {
      long long cycle = d - check[p];
      long long s = i, sabun = 0;
      while (s != p) {
        res[s] = check[p] + cycle - sabun;
        s = A[s];
        sabun += 1;
      }
      res[s] = cycle;
      s = A[p];
      while (s != p) {
        res[s] = cycle;
        s = A[s];
      }
    } else {
      long long s = i, sabun = 0;
      while (s != p) {
        res[s] = d + res[p] - sabun;
        s = A[s];
        sabun += 1;
      }
    }
  }
  cout << reduce(res.begin(), res.end()) << endl;
}