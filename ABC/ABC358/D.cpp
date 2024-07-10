#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> A(N, 0), B(M, 0);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  for(int i=0;i<M;i++){
    cin>>B[i];
  }
  sort(A.begin(),A.end());
  sort(B.begin(),B.end());
  int a=0;
  int64_t res=0;
  for(int b=0;b<M;b++){
    while(a < N){
      if(A[a] < B[b]){
        a++;
      }
      else{break;}
    }
    if(a == N){
      cout << -1 <<endl;
      exit(0);
    }
    res += A[a];
    a++;
  }
  cout << res <<endl;
  return 0;
}