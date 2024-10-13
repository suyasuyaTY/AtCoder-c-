#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N / 2; i++) {
    for (int j = 0; j < (i + 1) % 4; j++) {
      for (int k = 0; k < N - 2 * i - 1; k++) {
        swap(A[i][i + k], A[i + k][N - i - 1]);
        swap(A[i][i + k], A[N - i - 1][N - i - 1 - k]);
        swap(A[i][i + k], A[N - i - 1 - k][i]);
      }
    }
  }
  for (int i = 0; i < N; i++) {
    cout << A[i] << endl;
  }
}