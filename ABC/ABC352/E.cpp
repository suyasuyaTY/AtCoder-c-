#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

struct cost_idx {
  long long cost;
  int idx;

  bool operator<(const cost_idx &other) const {
    return (cost < other.cost);
  }
};

int main() {
  int N, M;
  cin >> N >> M;
  vector<cost_idx> C(M);
  vector<vector<int>> A(M, vector<int>(0));
  for (int i = 0; i < M; i++) {
    int k;
    cin >> k >> C[i].cost;
    C[i].idx = i;
    for (int j = 0; j < k; j++) {
      int a;
      cin >> a;
      a--;
      A[i].push_back(a);
    }
  }
  sort(C.begin(), C.end());

  long long sum = 0;

  atcoder::dsu u(N);
  for (int i = 0; i < M; i++) {
    long long cost = C[i].cost;
    int idx = C[i].idx;
    int s = A[idx][0];
    for (const auto &t : A[idx]) {
      if (!u.same(s, t)) {
        u.merge(s, t);
        sum += cost;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    if (!u.same(0, i)) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << sum << endl;
}