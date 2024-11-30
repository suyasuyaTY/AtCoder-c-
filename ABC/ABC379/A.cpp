#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N;
  cin >> N;
  cout << N % 100 * 10 + N / 100 << ' ' << N % 10 * 100 + N / 10 << endl;
}