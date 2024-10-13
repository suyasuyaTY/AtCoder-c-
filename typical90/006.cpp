#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  vector<vector<int>> next_c(26, vector<int>(N + 1, N));
  for (int i = N - 1; i >= 0; i--) {
    for (int j = 0; j < 26; j++) {
      if (S[i] == 'a' + j)
        next_c[j][i] = i;
      else
        next_c[j][i] = next_c[j][i + 1];
    }
  }
  string answer = "";
  int index = 0;
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < 26; j++) {
      if (next_c[j][index] <= N - K + i) {
        answer += ('a' + j);
        index = next_c[j][index] + 1;
        break;
      }
    }
  }
  cout << answer << endl;
}