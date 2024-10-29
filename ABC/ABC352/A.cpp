#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  if ((X < Z && Z < Y) || (Y < Z && Z < X))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}