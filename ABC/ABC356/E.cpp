#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(1e6 + 1, 0), B(1e6 + 1, 0);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A[a] += 1;
  }
  for (int i = 1; i <= 1e6; i++) {
    B[i] = B[i - 1] + A[i];
  }
  long long res = 0;
  for (int i = 1; i <= 1e6; i++) {
    int base = i, mul = 2;
    res -= A[i] * (A[i] - 1) / 2 + A[i];
    while (true) {
      if (base * mul <= 1e6) {
        res += (B[base * mul - 1] - B[base * (mul - 1) - 1]) * (mul - 1) * A[i];
        mul += 1;
      } else {
        res += (B[1e6] - B[base * (mul - 1) - 1]) * (mul - 1) * A[i];
        break;
      }
    }
  }
  cout << res << endl;
}