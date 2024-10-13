#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  long long dx = A - A % 4, dy = B - B % 2;
  A -= dx, B -= dy, C -= dx, D -= dy;
  if (A < 0)
    A += 4, C += 4;
  if (B < 0)
    B += 2, D += 2;

  long long res = 0, MX = (C + 3) / 4, MY = (D + 1) / 2;
  res += 2 * 4 * MX * MY;
  // 上の隙間を引く
  if (MY * 2 - D == 1) {
    res -= 4 * MX;
  }
  // 右の隙間を引く
  if (MX * 4 - C == 1) {
    res -= 1 * MY;
  } else if (MX * 4 - C == 2) {
    res -= 2 * MY;
  } else if (MX * 4 - C == 3) {
    res -= 5 * MY;
  }
  // 左の隙間を引く
  if (A == 1) {
    res -= 3 * MY;
  } else if (A == 2) {
    res -= 6 * MY;
  } else if (A == 3) {
    res -= 7 * MY;
  }
  //下の隙間を引く
  if (B == 1) {
    res -= 4 * MX;
  }
  // 左下の穴を足す
  if (B == 1) {
    if (A == 1) {
      res += 2;
    } else if (A == 2) {
      res += 3;
    } else if (A == 3) {
      res += 3;
    }
  }
  // 右下の穴を足す
  if (B == 1) {
    if (MX * 4 - C == 1) {
      res += 1;
    } else if (MX * 4 - C == 2) {
      res += 1;
    } else if (MX * 4 - C == 3) {
      res += 2;
    }
  }
  // 右上の穴を足す
  if (MY * 2 - D == 1) {
    if (MX * 4 - C == 1) {
      res += 0;
    } else if (MX * 4 - C == 2) {
      res += 1;
    } else if (MX * 4 - C == 3) {
      res += 3;
    }
  }
  // 左上の穴を足す
  if (MY * 2 - D == 1) {
    if (A == 1) {
      res += 1;
    } else if (A == 2) {
      res += 3;
    } else if (A == 3) {
      res += 4;
    }
  }
  cout << res << endl;
}