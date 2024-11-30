#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N;
  cin >> N;
  vector<int> count(10, 0);
  for (int i = 0; i < 6; i++) {
    count[N % 10] += 1;
    N /= 10;
  }
  if (count[1] == 1 && count[2] == 2 && count[3] == 3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}