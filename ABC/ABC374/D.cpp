#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

struct line {
  int edge1_x;
  int edge1_y;
  int edge2_x;
  int edge2_y;
};

double calc_time(int x, int y, double v) {
  return sqrt(x * x + y * y) / v;
}

int main() {
  int N;
  double S, T;
  cin >> N >> S >> T;
  vector<line> L;
  vector<int> order;
  rep(i, N) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    L.emplace_back(a, b, c, d);
    order.push_back(i);
  }
  double res = 30000;
  do {
    for (int i = 0; i < (1 << N); i++) {
      int x = 0, y = 0;
      double d = 0;
      for (int j = 0; j < N; j++) {
        if (i & (1 << order[j])) {
          d += calc_time(L[order[j]].edge2_x - x, L[order[j]].edge2_y - y, S);
          d += calc_time(L[order[j]].edge2_x - L[order[j]].edge1_x, L[order[j]].edge2_y - L[order[j]].edge1_y, T);
          x = L[order[j]].edge1_x, y = L[order[j]].edge1_y;
        } else {
          d += calc_time(L[order[j]].edge1_x - x, L[order[j]].edge1_y - y, S);
          d += calc_time(L[order[j]].edge2_x - L[order[j]].edge1_x, L[order[j]].edge2_y - L[order[j]].edge1_y, T);
          x = L[order[j]].edge2_x, y = L[order[j]].edge2_y;
        }
      }
      res = min(res, d);
    }
  } while (next_permutation(order.begin(), order.end()));
  cout << std::fixed << setprecision(15) << res << endl;
}