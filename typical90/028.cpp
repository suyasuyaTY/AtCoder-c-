#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int>> plane(1004, vector<int>(1004, 0));
  rep(i, N){
    int lx, ly, rx, ry;
    cin >> lx >> ly >> rx >> ry;
    plane[ly][lx] += 1;
    plane[ly][rx] += -1;
    plane[ry][lx] += -1;
    plane[ry][rx] += 1;
  }
  for(int i = 0; i < 1003; i++){
    for(int j = 0; j < 1004; j++){
      plane[j][i + 1] += plane[j][i];
    }
  }
  for(int i = 0; i < 1003; i++){
    for(int j = 0; j < 1004; j++){
      plane[i + 1][j] += plane[i][j];
    }
  }
  vector<int> res(N + 1, 0);
  for(int i = 0; i < 1004; i++){
    for(int j = 0; j < 1004; j++){
      res[plane[i][j]] += 1;
    }
  }
  for(int i = 1; i <= N; i++){
    cout << res[i] << endl;
  }
  return 0;
}