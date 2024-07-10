#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;
using namespace atcoder;

int64_t mod =  998244353;
vector<vector<int64_t>> comb(1001, vector<int64_t>(1001, 0));

void calcComb(){
  comb[0][0]=1;
  for (int i = 1; i < 1001; i++){
    comb[i][0]=1;
    for (int j = 1; j < 1001; j++){
      comb[i][j] = (comb[i-1][j-1] + comb[i-1][j])%mod;
    }
  }
}

int main(){
  calcComb();
  int k = 0;
  cin >> k;
  vector<int> c(26);
  rep(i, 26) cin >> c[i];
  vector<vector<int64_t>> dp(27, vector<int64_t>(k + 1));
  dp[0][0] = 1;
  rep(i, 26) {
    rep(j, k + 1){
      rep(l, min(j, c[i]) + 1) dp[i+1][j] = (dp[i+1][j] + comb[j][l]*dp[i][j-l])%mod;
    }
  }
  int64_t res = 0;
  for(int j = 1; j <= k; j++){
    res = (res + dp[26][j])%mod;
  }
  cout << res << endl;
  return 0;
}