#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int N;

void print(vector<int> &A) {
  for (int i = 0; i < N; i++) {
    cout << A[i] << ' ';
  }
  cout << endl;
}

void mat_mul(vector<int> &A, vector<int> &B, vector<int> &C) {
  for (int i = 0; i < N; i++)
    C[i] = B[A[i]];
}

void mat_pow2(vector<int> &X, long long k, vector<int> &r) {
  for (int i = 0; i < N; i++)
    r[i] = i;
  while (k > 0) {
    if (k % 2 == 1) {
      vector<int> tmp(N);
      mat_mul(r, X, tmp);
      swap(r, tmp);
    }
    vector<int> tmp(N);
    mat_mul(X, X, tmp);
    swap(X, tmp);
    k /= 2;
  }
}

int main() {
  long long K;
  cin >> N >> K;
  vector<int> X(N), A(N), C(N), R(N);
  rep(i, N) {
    cin >> X[i];
    X[i] -= 1;
  }
  rep(i, N) {
    cin >> A[i];
  }
  mat_pow2(X, K, C);
  for (int i = 0; i < N; i++) {
    R[i] = A[C[i]];
  }
  print(R);
}