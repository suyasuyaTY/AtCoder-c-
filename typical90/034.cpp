#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  map<int, int> B;
  int j = 0, res = -1, size = 0;
  for(int i = 0; i < N; i++){
    if(!B.contains(A[i])) {
      B[A[i]] = 1;
      size += 1;
    }
    else {
      if(B[A[i]] == 0) size += 1;
      B[A[i]] += 1;
    }
    if(size <= K){
      res = max(res, i - j + 1);
    }
    else{
      while(size > K){
        B[A[j]] -= 1;
        if(B[A[j]] == 0) size -= 1;
        j++;
      }
    }
  }
  cout << res << endl;
  return 0;
}