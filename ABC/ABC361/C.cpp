#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());
  int res = 1e9;
  for(int i = 0; i <= K; i++){
    res = min(res, A[N - K + i - 1] - A[i]);
  }
  cout << res << endl;
  return 0;
}