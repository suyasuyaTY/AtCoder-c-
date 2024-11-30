#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int res = 0;
  for (size_t i = 0; i < S.size(); i++) {
    if (S[i] != '/')
      continue;
    int count1 = 0, count2 = 0;
    for (int j = i - 1; j >= 0; j--) {
      if (S[j] == '1')
        count1 += 1;
      else 
      break;
    }
    for (size_t j = i + 1; j < S.size(); j++) {
      if (S[j] == '2')
        count2 += 1;
      else
        break;
    }
    
    res = max(res, min(count1, count2) * 2 + 1);
  }
  cout << res << endl;
}