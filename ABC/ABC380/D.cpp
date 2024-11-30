#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  string S;
  cin >> S;
  int Q;
  cin >> Q;
  vector<int64_t> K(Q);
  rep(i, Q) cin >> K[i];
  int64_t N = static_cast<int64_t>(S.size());
  for (int i = 0; i < Q; i++) {
    int64_t k = K[i] - 1;
    int64_t q = k / N, r = k % N;
    if (bitset<64>(q).count() % 2 == 0) {
      cout << S[r] << ' ';
    } else {
      if (islower(S[r])) {
        cout << static_cast<char>(S[r] - 32) << ' ';
      } else {
        cout << static_cast<char>(S[r] + 32) << ' ';
      }
    }
  }
  cout << endl;
}