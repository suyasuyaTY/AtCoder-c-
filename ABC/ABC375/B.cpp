#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

long double dist(long long dx, long long dy) {
  return sqrtl(dx * dx + dy * dy);
}

int main() {
  int N;
  cin >> N;
  vector<long long> X(N + 2), Y(N + 2);
  for (int i = 1; i <= N; i++) {
    cin >> X[i] >> Y[i];
  }
  long double res = 0;
  for (int i = 0; i <= N; i++) {
    res += dist(X[i + 1] - X[i], Y[i + 1] - Y[i]);
  }
  cout << std::fixed << std::setprecision(32) << res << endl;
}