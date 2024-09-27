#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
    H[i] -= 1;
  }
  vector<int> H_Index(N);
  for (int i = 0; i < N; i++) {
    H_Index[H[i]] = i;
  }
  vector<int> res(N, 0);
  res[0] += 1;
  res[H_Index[N - 1]] -= 1;
  set<int> A;
  A.insert(H_Index[N - 1]);
  for (int i = N - 2; i >= 0; i--) {
    decltype(A)::iterator it = A.lower_bound(H_Index[i]);
    if (it == A.begin()) {
      res[0] += 1;
    } else {
      it--;
      res[*(it)] += 1;
    }
    res[H_Index[i]] -= 1;
    A.insert(H_Index[i]);
  }
  for (int i = 1; i < N; i++) {
    res[i] += res[i - 1];
  }
  for (int i = 0; i < N; i++) {
    cout << res[i] << ' ';
  }
  cout << endl;
}