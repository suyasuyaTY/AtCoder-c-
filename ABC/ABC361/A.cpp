#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, K, X, A;
  cin >> N >> K >> X;
  for(int i = 0; i < N; i++){
    cin >> A;
    cout << A << ' ';
    if(i == K - 1) cout << X << ' ';
  }
  cout << endl;
  return 0;
}