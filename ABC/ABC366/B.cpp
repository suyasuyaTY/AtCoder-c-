#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M = -1;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    M = max(M, (int)S[i].size());
    if ((int)S[i].size() < M) {
      S[i] += string(M - (int)S[i].size(), '*');
    }
  }
  for (int i = 0; i < M; i++) {
    for (int j = N - 1; j >= 0; j--) {
      if ((int)S[j].size() < i + 1)
        break;
      cout << S[j][i];
    }
    cout << endl;
  }
}