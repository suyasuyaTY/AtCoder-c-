#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
    M -= H[i];
    if (M < 0) {
      cout << i << endl;
    } else if (M == 0) {
      cout << i + 1 << endl;
    } else {
      continue;
    }
    break;
  }
  if (M > 0) {
    cout << N << endl;
  }
}