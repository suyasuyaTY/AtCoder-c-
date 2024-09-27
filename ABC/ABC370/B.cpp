#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      cin >> A[i][j];
    }
  }
  int x = 1;
  for (int i = 1; i <= N; i++) {
    if (x >= i) {
      x = A[x][i];
    } else {
      x = A[i][x];
    }
  }
  cout << x << endl;
}