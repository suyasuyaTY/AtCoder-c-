#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> L(N), R(N);
  int64_t sum = 0;
  rep(i, N){
    cin >> L[i] >> R[i];
    sum += L[i];
  }
  // 不可能
  if(sum > 0){
    cout << "No" << endl;
    return 0;
  }
  // 初期値の時点で終わり
  if(sum == 0){
    cout << "Yes" << endl;
    for(int i = 0; i < N; i++){
      cout << L[i] << ' ';
    }
    cout << endl;
    return 0;
  }
  int i = 0;
  for(; i < N; i++){
    sum += R[i] - L[i];
    if(sum >= 0){
      cout << "Yes" << endl;
      break;
    }
  }
  // 不可能
  if(i == N){
    cout << "No" << endl;
    return 0;
  }
  // 0~i-1まではR[i], iはR[i]-sum, i+1~N-1まではL[i]
  for(int j = 0; j < i; j++){
    cout << R[j] << ' ';
  }
  cout << R[i] - sum << ' ';
  for(int j = i + 1; j < N; j++){
    cout << L[j] << ' ';
  }
  cout << endl;
  return 0;
}