#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;
using Pair = pair<int64_t, int>;
struct Edge{
  int to;
  int64_t cost;
};


vector<int64_t> Dijkstra(int N, int s, vector<vector<Edge>> &G){
  vector<int64_t> d(N, 1e16);
  d[s] = 0;
  priority_queue<Pair, vector<Pair>, greater<Pair>> q;
  q.emplace(0, s);
  while (!q.empty()){
    const int64_t distance = q.top().first;
    const int from = q.top().second;
    q.pop();
    if(d[from] < distance) continue;
    for(const auto &edge: G[from]){
      const int64_t d_next = distance + edge.cost;
      if(d_next < d[edge.to]) q.emplace((d[edge.to] = d_next), edge.to);
    }
  }
  return d;
}

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<Edge>> G(N, vector<Edge>(0));
  int a, b, c;
  rep(i, M){
    cin >> a >> b >> c;
    a--;b--;
    G[a].push_back(Edge(b, c));
    G[b].push_back(Edge(a, c));
  }
  vector<int64_t> d_1 = Dijkstra(N, 0, G), d_N = Dijkstra(N, N - 1, G);
  for(int i = 0; i < N; i++){
    cout << d_1[i] + d_N[i] << endl;
  }
  return 0;
}