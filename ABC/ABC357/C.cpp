#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

vector<int> l = {1, 3, 9, 27, 81, 243, 729};

void make_carpet(int Level, int x, int y, vector<string> &C) {
  if (Level == 0) {
    C[x][y] = '#';
    return;
  }
  for (int i = 0; i < 9; i++) {
    if (i == 4)
      continue;
    make_carpet(Level - 1, x + l[Level - 1] * (i / 3), y + l[Level - 1] * (i % 3), C);
  }
}

int main() {
  int N;
  cin >> N;
  vector<string> C(l[N], string(l[N], '.'));
  make_carpet(N, 0, 0, C);
  for (int i = 0; i < l[N]; i++) {
    cout << C[i] << endl;
  }
}