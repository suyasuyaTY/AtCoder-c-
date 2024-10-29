#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;
 long long res = M * (M + 1) / 2;
  vector<pair<int, int>> sections;
  rep(i, N) {
    int l, r;
    cin >> l >> r;
    sections.emplace_back(l, r);
  }
  sort(sections.begin(), sections.end());
  int idx = N - 2, min_r = sections[N - 1].second;
  for (int l = sections[N - 1].first; l > 0; l--) {
    while (idx >= 0 && sections[idx].first == l) {
      min_r = min(min_r, sections[idx].second);
      idx -= 1;
    }
    res -= M - min_r + 1;
  }
  cout << res << endl;
}