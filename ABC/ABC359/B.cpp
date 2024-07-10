#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, count = 0;
  cin >> N;
  vector<int> A(2*N, 0);
  rep(i, 2*N) cin >> A[i];
  rep(i,2*N-2){
    if(A[i] == A[i+2]){
      count++;
    }
  }
  cout << count <<endl;
  return 0;
}