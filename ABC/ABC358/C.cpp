#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
  int N,M;
  cin >> N >>M;
  vector<int> S(N,0);
  for(int i=0;i<N;i++){
    string s;
    cin>>s;
    for(int j=0;j<M;j++){
      if(s[j]=='o'){
        S[i] |= (1<<j);
      }
    }
  }
  int res=N+1;
  for(int n=0;n<(1<<N);n++){
    int tmp=0,count=0;
    for(int m=0;m<N;m++){
      if((n>>m) & 1){
        count ++;
        tmp |= S[m];
      }
    }
    if(tmp == (1<<M)-1){
      res = min(res, count);
    }
  }
  cout << res <<endl;
  return 0;
}