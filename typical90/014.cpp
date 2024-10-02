#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int64_t res = 0;
  rep(i, N) res += abs(A[i] - B[i]);
  cout << res << endl;
  return 0;
}