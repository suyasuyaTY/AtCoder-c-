#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  long long a = -1e9, b = -1e9;
  rep(i, N) {
    long long n;
    cin >> n;
    a = max(a, n);
  }
  rep(i, N) {
    long long n;
    cin >> n;
    b = max(b, n);
  }
  cout << a + b << endl;
}