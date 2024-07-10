#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, T;
  cin >> N >> T;
  string s;
  cin >> s;
  vector<int> X(N, 0);
  rep(i, N) cin >> X[i];
  vector<int> R(0), L(0);
  for(int i = 0; i < N; i++){
    if(s[i] == '1'){
      R.push_back(X[i]);
      L.push_back(X[i] + T);
    }
  }
  sort(R.begin(), R.end());
  sort(L.begin(), L.end());
  int64_t res = 0;
  for(int i = 0; i < N; i++){
    if(s[i] == '1'){
      continue;
    }
    res += upper_bound(R.begin(), R.end(), X[i]) - R.begin();
    res -= lower_bound(L.begin(), L.end(), X[i] - T) - L.begin();
  }
  cout << res << endl;
  return 0;
}