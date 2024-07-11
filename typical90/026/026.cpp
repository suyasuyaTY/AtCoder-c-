#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int MAX_NODE = 1e5;

int N;
vector<vector<int>> g(MAX_NODE, vector<int>(0));
vector<int> dist(MAX_NODE, -1);
vector<int> ans0(0), ans1(0);

void dfs(int N){
  int start = 0;
  dist[start] = 0;
  stack<int> s;
  s.push(start);
  while (!s.empty())
  {
    int node = s.top();s.pop();
    int d = dist[node];
    for(const int nex: g[node]){
      if(dist[nex] != -1) continue;
      s.push(nex);
      dist[nex] = d + 1;
    }
  }
  for(int i = 0; i < N; i++){
    if(dist[i] % 2 == 0) ans0.push_back(i);
    else ans1.push_back(i);
  }
}

int main(){
  int N;
  cin >> N;
  rep(i, N - 1){
    int a, b;
    cin >> a >> b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  dfs(N);
  if(ans0.size() < ans1.size()) ans0.swap(ans1);
  for(int i = 0; i < N / 2; i++){
    cout << ans0[i] + 1<< ' ';
  }
  cout << endl;
  return 0;
}