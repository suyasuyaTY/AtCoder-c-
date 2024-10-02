#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  int64_t res = 0;
  rep(i, N){
    res += abs(A[i] - B[i]);
  }
  if(res <= K && (res - K) % 2 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}