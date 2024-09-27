#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<vector<int>> X(N, vector<int>(M));
  for (int i = 0; i < M; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> X[i][j];
    }
  }
  for(int i=0;i<M;i++){
    int tmp=0;
    for(int j=0;j<N;j++){
      tmp += X[j][i];
    }
    if(tmp <A[i]){
      cout <<"No\n";
      return 0;
    }
  }
  cout << "Yes\n";
}