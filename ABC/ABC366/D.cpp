#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<vector<int>>> A(N + 1, vector<vector<int>>(N + 1, vector<int>(N + 1, 0)));
  rep(i, N) {
    rep(j, N) {
      rep(k, N) {
        cin >> A[i + 1][j + 1][k + 1];
      }
    }
  }
  rep(i, N + 1) {
    rep(j, N + 1) {
      rep(k, N) {
        A[i][j][k + 1] += A[i][j][k];
      }
    }
  }
  rep(i, N + 1) {
    rep(j, N + 1) {
      rep(k, N) {
        A[i][k + 1][j] += A[i][k][j];
      }
    }
  }
  rep(i, N + 1) {
    rep(j, N + 1) {
      rep(k, N) {
        A[k + 1][i][j] += A[k][i][j];
      }
    }
  }
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int lx, rx, ly, ry, lz, rz;
    cin >> lx >> rx >> ly >> ry >> lz >> rz;
    lx--;
    ly--;
    lz--;
    cout << A[rx][ry][rz] - A[rx][ry][lz] - A[rx][ly][rz] - A[lx][ry][rz] + A[rx][ly][lz] + A[lx][ry][lz] +
                A[lx][ly][rz] - A[lx][ly][lz]
         << endl;
  }
}