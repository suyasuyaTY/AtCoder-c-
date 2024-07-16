#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N, 0)), B(N, vector<int>(N, 0));
  rep(i, N){
    rep(j, N){
      cin >> A[i][j];
    }
  }
  int M;
  cin >> M;
  rep(i, M){
    int x, y;
    cin >> x >> y;
    x--;y--;
    B[x][y] = 1;
    B[y][x] = 1;
  }
  vector<int> v;
  for(int i = 0; i < N; i++){
    v.emplace_back(i);
  }
  int ans = 1e9;
  do{
    int time = 0;
    for(int i = 0; i < N; i++){
      if(i < N -1 && B[v[i]][v[i+1]]){
        time = -1;
        break;
      }
      time += A[v[i]][i];
    }
    if(time == -1) continue;
    ans = min(ans, time);
  }while(next_permutation(v.begin(), v.end()));
  if(ans == 1e9) cout << -1 << endl;
  else{
    cout<< ans << endl;
  }
  return 0;
}