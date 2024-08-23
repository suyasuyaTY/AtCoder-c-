#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  vector<int> Dx(D + 1), Dy(D + 1);
  long long dx = 0, dy = 0;
  for (int i = 0; i < N; i++) {
    dx += x[i] - x[0];
    dy += y[i] - y[0];
  }

  if (dx <= D) {
    for (int i = dx; i <= D; i += N) {
      Dx[i] += 1;
    }
  }
  if (dy <= D) {
    for (int i = dy; i <= D; i += N) {
      Dy[i] += 1;
    }
  }

  for (int i = 1; i < N; i++) {
    for (int j = x[i - 1] + 1; j <= x[i]; j++) {
      dx += -N + 2 * i;
      if (dx <= D)
        Dx[dx] += 1;
    }
  }
  if (dx <= D) {
    for (int i = dx + N; i <= D; i += N) {
      Dx[i] += 1;
    }
  }

  for (int i = 1; i < N; i++) {
    for (int j = y[i - 1] + 1; j <= y[i]; j++) {
      dy += -N + 2 * i;
      if (dy <= D)
        Dy[dy] += 1;
    }
  }
  if (dy <= D) {
    for (int i = dy + N; i <= D; i += N) {
      Dy[i] += 1;
    }
  }
  vector<int> sum_Dx(D + 1), sum_Dy(D + 1);
  sum_Dx[0] = Dx[0];
  sum_Dy[0] = Dy[0];
  for (int i = 0; i < D; i++) {
    sum_Dx[i + 1] = sum_Dx[i] + Dx[i + 1];
    sum_Dy[i + 1] = sum_Dy[i] + Dy[i + 1];
  }
  long long res = 0;
  for (int i = 0; i <= D; i++) {
    res += Dx[i] * sum_Dy[D - i];
  }
  cout << res << endl;
}