#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<long long> X(N), Y(N);
  rep(i, N) cin >> X[i] >> Y[i];
  vector<vector<long long>> dist(N, vector<long long>(N));
  set<long long> S;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(i == j) continue;
      long long d = (X[i] - X[j])*(X[i] - X[j]) + (Y[i] - Y[j])*(Y[i] - Y[j]);
      dist[i][j] = d;
      dist[j][i] = d;
      S.insert(d);
    }
  }
  vector<long long> res_candidate;
  for(long long d: S) res_candidate.push_back(d);
  sort(res_candidate.begin(), res_candidate.end());
  int lb = -1, ub = static_cast<int>(res_candidate.size());
  while(ub - lb > 1){
    int mid = (ub + lb) / 2;
    long long d = res_candidate[mid];
    
  }
  return 0;
}