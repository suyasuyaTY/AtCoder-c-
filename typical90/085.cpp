#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  long long K;
  cin >> K;
  vector<long long> factors;
  for (int i = 1; i <= 1e6; i++) {
    if (K % i == 0)
      factors.push_back(i);
  }
  int res = 0;
  for (int i = 0; i < static_cast<int>(factors.size()); i++) {
    for (int j = i; j < static_cast<int>(factors.size()); j++) {
      long long k = K / factors[i] / factors[j];
      if (k < factors[j])
        break;
      if (K % factors[i] == 0 && (K / factors[i]) % factors[j] == 0)
        res += 1;
    }
  }
  cout << res << endl;
}