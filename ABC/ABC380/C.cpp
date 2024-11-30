#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  vector<size_t> idxs(3, S.size());
  int k = 0;
  bool is_1block = false;
  for (size_t i = 0; i < S.size(); i++) {
    if (is_1block && S[i] == '0') {
      is_1block = false;
      if (k == K - 1)
        idxs[0] = i;
      if (k == K)
        idxs[2] = i;
    }
    if (!is_1block && S[i] == '1') {
      is_1block = true;
      k += 1;
      if (k == K)
        idxs[1] = i;
    }
  }
  for (size_t i = 0; i < idxs[0]; i++) {
    cout << S[i];
  }
  for (size_t i = idxs[1]; i < idxs[2]; i++) {
    cout << S[i];
  }
  for (size_t i = idxs[0]; i < idxs[1]; i++) {
    cout << S[i];
  }
  for (size_t i = idxs[2]; i < S.size(); i++) {
    cout << S[i];
  }
  cout << endl;
}