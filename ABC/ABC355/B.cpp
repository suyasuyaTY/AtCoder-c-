#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> C(N + M);
  rep(i, N) {
    int a;
    cin >> a;
    C[i] = make_pair(a, 0);
  }
  rep(i, M) {
    int b;
    cin >> b;
    C[N + i] = make_pair(b, 1);
  }
  sort(C.begin(), C.end());
  rep(i, N + M - 1) {
    if (C[i].second == C[i + 1].second && C[i].second == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}