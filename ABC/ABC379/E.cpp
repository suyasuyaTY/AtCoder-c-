#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int64_t N;
  cin >> N;
  string S;
  cin >> S;
  vector<int64_t> sum_S(N + 1, 0);
  for (int64_t i = 1; i <= N; i++) {
    sum_S[i] += sum_S[i - 1];
    sum_S[i] += i * static_cast<int64_t>(S[i - 1] - '0');
  }
  vector<int64_t> res(N + 10, 0);
  for (int i = 0; i < N; i++) {
    res[i] = sum_S[N - i];
  }
  for (int i = 0; i < N + 10; i++) {
    res[i + 1] += res[i] / 10;
    res[i] %= 10;
  }
  bool is_zero = true;
  for (int i = N + 9; i >= 0; i--) {
    if (is_zero && res[i] == 0)
      continue;
    else {
      cout << res[i];
      is_zero = false;
    }
  }
  cout << endl;
}