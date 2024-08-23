#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  long long K;
  cin >> N >> K;
  vector<int> M(100001, 0);
  for (int i = 0; i < 100001; i++) {
    int n = i, next = i;
    while (n > 0) {
      next += n % 10;
      n /= 10;
    }
    M[i] = next % 100000;
  }
  vector<int> D(100001, -1);
  D[N] = 0;
  int p = N, count = 0;
  while (true) {
    if (count == K) {
      cout << p << endl;
      return 0;
    }
    p = M[p];
    count += 1;
    if (D[p] != -1)
      break;
    D[p] = count;
  }
  K = (K - D[p]) % (count - D[p]);
  count = 0;
  while (true) {
    if (count == K) {
      cout << p << endl;
      return 0;
    }
    p = M[p];
    count += 1;
    D[p] = count;
  }
}