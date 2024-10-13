#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, T = 0;
  cin >> N;
  vector<string> M(N);
  for (int i = 0; i < N; i++) {
    string s;
    int c;
    cin >> s >> c;
    T += c;
    M[i] = s;
  }
  sort(M.begin(), M.end());
  cout << M[T % N] << endl;
}