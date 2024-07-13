#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int64_t mod = 998244353;

int main(){
  int N;
  cin >> N;
  vector<int> A(N + 1);
  rep(i, N) cin >> A[i + 1];
  // 公差の数は高々3160通りなので次元圧縮する
  priority_queue<int, vector<int>, greater<int>> q;
  for(int i = 1; i <= N; i++){
    for(int j = i + 1; j <= N; j++){
      q.emplace(A[j]- A[i]);
    }
  }
  int cnt = 0;
  map<int, int> tolerances;
  vector<int> inv_tolerances;
  while(!q.empty()){
    int tolerance = q.top();q.pop();
    if(!tolerances.contains(tolerance)) {
      tolerances[tolerance] = cnt;
      inv_tolerances.emplace_back(tolerance);
      cnt++;
    }
  }

  int size_of_tolerances = tolerances.size();

  vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(N + 1, vector<int>(size_of_tolerances, 0)));
  // dp[i][j][k]: A[1]~A[i]を使用して、長さj、公差kの部分列の個数
  // 長さ1の部分列は公差が出せないのでdpに含めない
  // 長さ2の部分列を初期値としてdpに入れる
  for(int i = 1; i <= N; i++){
    for(int j = i + 1; j <= N; j++){
      dp[j][2][tolerances[A[j] - A[i]]] += 1;
    }
  }
  // 長さ3以上の部分列を求める
  //dp[i][j][k] += dp[l][j - 1][k] (if A[i] - A[l] == k)
  for(int i = 3; i <= N; i++){
    for(int j = 3; j <= i; j++){
      for(int k = 0; k < size_of_tolerances; k++){
        for(int l = j - 1; l < i; l++){
          if(A[i] - A[l] == inv_tolerances[k]){
            dp[i][j][k] += dp[l][j - 1][k];
            dp[i][j][k] %= mod;
          }
        }
      }
    }
  }
  // 長さ1の部分列はN個
  cout << N << ' ';
  for(int i = 2; i <= N; i++){
    int64_t res = 0;
    for(int j = i; j <= N; j++){
      for(int k = 0; k < size_of_tolerances; k++){
        res += dp[j][i][k];
        res %= mod;
      }
    }
    cout << res << ' ';
  }
  cout << endl;
  return 0;
}