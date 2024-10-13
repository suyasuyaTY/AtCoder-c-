#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<tuple<int, int, int>> C(N);
  for (int i = 0; i < N; i++) {
    int a, c;
    cin >> a >> c;
    C[i] = make_tuple(a, c, i + 1);
  }
  sort(C.begin(), C.end());
  int c_min = get<1>(C[N - 1]), res = N;
  vector<int> ans;
  ans.push_back(get<2>(C[N - 1]));
  for (int i = N - 2; i >= 0; i--) {
    if (c_min < get<1>(C[i]))
      res -= 1;
    else {
      ans.push_back(get<2>(C[i]));
      c_min = get<1>(C[i]);
    }
  }
  cout << res << endl;
  sort(ans.begin(), ans.end());
  for (int i = 0; i < res; i++) {
    cout << ans[i] << ' ';
  }
  cout << endl;
}