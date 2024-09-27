#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int M;
  cin >> M;
  vector<int> A(11, 0);
  A[0] = 1;
  for (int i = 1; i <= 10; i++) {
    A[i] = A[i - 1] * 3;
  }
  vector<int> res;
  for (int i = 0; i < 20; i++) {
    for (int j = 10; j >= 0; j--) {
      if (M >= A[j]) {
        M -= A[j];
        res.push_back(j);
        break;
      }
    }
  }
  cout << res.size() << endl;
  for (int r : res) {
    cout << r << ' ';
  }
  cout << endl;
}