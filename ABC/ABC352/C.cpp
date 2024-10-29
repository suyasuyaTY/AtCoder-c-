#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  long long res = 0;
  long long d = 0;
  for (int i = 0; i < N; i++) {
    long long a, b;
    cin >> a >> b;
    res += a;
    d = max(d, b - a);
  }
  res += d;
  cout << res << endl;
}