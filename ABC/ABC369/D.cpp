#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<long long> XP_0(N + 1, -1), XP_1(N + 1, -1);
  XP_0[0] = 0;
  for (int i = 0; i < N; i++) {
    XP_0[i + 1] = XP_0[i];
    if (XP_1[i] != -1) {
      XP_0[i + 1] = max(XP_0[i + 1], XP_1[i] + 2 * A[i]);
    }
    XP_1[i + 1] = XP_1[i];
    if (XP_0[i] != -1) {
      XP_1[i + 1] = max(XP_1[i + 1], XP_0[i] + A[i]);
    }
  }
  cout << max(XP_0[N], XP_1[N]) << endl;
}