#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

const long long LINF = 1e18;

int main() {
  int N;
  cin >> N;
  vector<pair<int, long long>> Mura(N + 1);
  Mura[0].first = -1e9 - 1;
  for (int i = 1; i <= N; i++) {
    cin >> Mura[i].first;
  }
  for (int i = 1; i <= N; i++) {
    cin >> Mura[i].second;
  }
  for (int i = 1; i <= N; i++) {
    Mura[i].second += Mura[i - 1].second;
  }
  int Q;
  cin >> Q;
  while (Q--) {
    int l, r;
    cin >> l >> r;
    auto iter1 = lower_bound(Mura.begin(), Mura.end(), make_pair(l, 0LL));
    auto iter2 = lower_bound(Mura.begin(), Mura.end(), make_pair(r + 1, 0LL));
    cout << (iter2 - 1)->second - (iter1 - 1)->second << endl;
  }
}