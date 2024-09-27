#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> isFirstMan(N + 1, 0);
  while (M--) {
    int a;
    char b;
    cin >> a >> b;
    if (isFirstMan[a] || b == 'F') {
      cout << "No" << endl;
      continue;
    }
    isFirstMan[a] = 1;
    cout << "Yes" << endl;
  }
}