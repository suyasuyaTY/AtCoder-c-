#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  vector<int> A(9), B(8);
  rep(i, 9) cin >> A[i];
  rep(i, 8) cin >> B[i];
  int sum_A = 0, sum_B = 0;
  rep(i, 9) sum_A += A[i];
  rep(i, 8) sum_B += B[i];
  cout << ((sum_B > sum_A) ? 0 : sum_A - sum_B + 1) << endl;
}