#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, W;
  cin >> N >> W;
  vector<vector<int>> A(N, vector<int>(W, 0));
  rep(i, N) {
    rep(j, W) cin >> A[i][j];
  }
  vector<int> row_sum(N, 0), column_sum(W, 0);
  rep(i, N) {
    int sum = 0;
    rep(j, W) sum += A[i][j];
    row_sum[i] = sum;
  }
  rep(i, W) {
    int sum = 0;
    rep(j, N) sum += A[j][i];
    column_sum[i] = sum;
  }
  rep(i, N) {
    rep(j, W) cout << row_sum[i] + column_sum[j] - A[i][j] << ' ';
    cout<<'\n';
  }
  return 0;
}