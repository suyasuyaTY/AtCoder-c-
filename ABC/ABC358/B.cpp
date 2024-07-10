#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
  int N, A;
  cin >> N >> A;
  vector<int> T(N+1, 0);
  for(int i=1;i<=N;i++){
    cin >> T[i];
  }
  int t=0;
  for(int i=1;i<=N;i++){
    if(t<=T[i]){
      t=T[i]+A;
    }
    else{
      t += A;
    }
    cout << t <<endl;
  }
  return 0;
}