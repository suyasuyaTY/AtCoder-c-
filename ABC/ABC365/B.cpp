#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> A;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.emplace_back(a, i + 1);
  }
  sort(A.begin(), A.end());
  cout << A[N - 2].second << endl;
}