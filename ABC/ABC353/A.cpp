#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  int res = -1;
  for (int i = 0; i < N; i++) {
    cin >> H[i];
    if (res == -1 && i > 0 && H[0] < H[i]) {
      res = i + 1;
    }
  }
  cout << res << endl;
}