#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int Y;
  cin >> Y;
  if (Y % 4 != 0) {
    cout << 365 << endl;
  } else if (Y % 100 != 0) {
    cout << 366 << endl;
  } else if (Y % 400 != 0) {
    cout << 365 << endl;
  } else {
    cout << 366 << endl;
  }
}