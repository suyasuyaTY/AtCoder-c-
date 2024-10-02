#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, mod = 1e9 + 7;
  cin >> N;
  string s, tmp = "atcoder";
  cin >> s;
  vector<int64_t> dp(8, 0);
  dp[0] = 1;
  for(const auto &ch : s){
    for(int i = 0; const auto &t: tmp){
      if(ch == t){
        dp[i + 1] += dp[i];
        dp[i + 1] %= mod;
      }
      i++;
    }
  }
  cout << dp[7] << endl;
  return 0;
}