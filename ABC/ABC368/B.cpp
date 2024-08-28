#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int res = 0;
  while (true) {
    int count = 0;
    for (int i = 0; i < N; i++) {
      if (A[i] > 0)
        count += 1;
    }
    if (count <= 1)
      break;
    sort(A.begin(), A.end(), greater<int>{});
    A[0] -= 1;
    A[1] -= 1;
    res += 1;
  }
  cout << res << endl;
}