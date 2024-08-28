#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<long long> X(N + 1, 1 << 60);
  cin >> X[1];
  vector<pair<int, long long>> S(0), T(0);
  vector<vector<int>> A(N + 1), B(N + 1);
  for (int i = 0; i < M; i++) {
    int a, b;
    long long s, t;
    cin >> a >> b >> s >> t;
    S.emplace_back(a, s);
    T.emplace_back(b, t);
    A[a].push_back(i);
    B[b].push_back(i);
  }
  vector<vector<pair<int, int>>> P(N + 1);
  for (int i = 1; i <= N; i++) {
    for (int b : B[i]) {
      for (int a : A[i]) {
        if (T[b].second <= S[a].second) {
          P[i].emplace_back(a, b);
          cout << a << ' ' << b << endl;
        }
      }
    }
  }
  for (int i = 1; i <= N; i++) {
    for(auto p: P[i]){
      
    }
  }
}