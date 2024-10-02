#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int o_count = 0, x_count = 0, i = 0, j = -1;
  long long res = 0;
  for (; i < N; i++) {
    while ((o_count <= 0 || x_count <= 0) && j < N) {
      j++;
      if (S[j] == 'o')
        o_count += 1;
      else
        x_count += 1;
    }
    if (o_count > 0 && x_count > 0) {
      res += N - j;
    }
    if (S[i] == 'o')
      o_count -= 1;
    else
      x_count -= 1;
  }
  cout << res << endl;
}