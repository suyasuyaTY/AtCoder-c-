#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> P_idx(N), used(N, 0);
  for (int i = 0; i < N; i++) {
    int p;
    cin >> p;
    p--;
    P_idx[p] = i;
  }
  priority_queue<int, vector<int>> que_max;
  priority_queue<int, vector<int>, greater<int>> que_min;

  for (int i = 0; i < K; i++) {
    que_max.push(P_idx[i]);
    que_min.push(P_idx[i]);
  }
  int res = N;
  for (int i = 0; i < N - K + 1; i++) {
    int idx_max = que_max.top(), idx_min = que_min.top();
    while (used[idx_max] == 1) {
      que_max.pop();
      idx_max = que_max.top();
    }
    while (used[idx_min] == 1) {
      que_min.pop();
      idx_min = que_min.top();
    }
    res = min(res, idx_max - idx_min);
    if (i < N - K) {
      used[P_idx[i]] = 1;
      que_max.push(P_idx[i + K]);
      que_min.push(P_idx[i + K]);
    }
  }
  cout << res << endl;
}