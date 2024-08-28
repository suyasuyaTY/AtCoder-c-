#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> H(N);
  rep(i, N) cin >> H[i];
  long long T = 0;
  for (int i = 0; i < N; i++) {
    if (T % 3 == 1) {
      if (H[i] == 1) {
        H[i] = 0;
        T += 1;
      } else {
        H[i] -= 4;
        T += 2;
      }
    } else if (T % 3 == 2) {
      H[i] -= 3;
      T += 1;
    }
    if (H[i] <= 0)
      continue;
    T = T + (H[i] / 5) * 3 + (H[i] % 5 <= 2 ? H[i] % 5 : 3);
  }
  cout << T << endl;
}