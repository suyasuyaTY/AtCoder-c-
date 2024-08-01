#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, T, P;
  cin >> N >> T >> P;
  vector<int> L(N);
  rep(i, N) cin >> L[i];
  sort(L.begin(), L.end(), greater<int>{});
  cout << max(0, T - L[P - 1]) << endl;
  return 0;
}