#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<long long> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];
  priority_queue<pair<long long, int>> C;
  rep(i, N) {
    C.emplace(B[i], i);
  }
  long long res = 0;
  for (int i = 0; i < K; i++) {
    long long point = C.top().first;
    int index = C.top().second;
    C.pop();
    res += point;
    if (index < N) {
      C.emplace(A[index] - B[index], N + index);
    }
  }

  cout << res << endl;
}