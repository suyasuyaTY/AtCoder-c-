#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;
int64_t INF = 1LL << 60;

struct Edge
{
  int to;
  int64_t cost;
};

using Pair = pair<int64_t, int>;

void Dijkstra(const vector<int64_t> A, const vector<vector<Edge>> &graph, vector<int64_t> &dists, int startIndex){
  priority_queue<Pair, vector<Pair>, greater<Pair>> q;
  q.emplace((dists[startIndex] = A[startIndex]), startIndex);
  while (!q.empty())
  {
    const int64_t dist = q.top().first;
    const int from = q.top().second;
    q.pop();

    if(dists[from] < dist) continue;

    for(const auto &edge: graph[from]){
      const int64_t d = dist + edge.cost + A[edge.to];
      if(d < dists[edge.to]){
        q.emplace((dists[edge.to] = d), edge.to);
      }
    }
  }
}

int main(){
  int N, M;
  cin >> N >> M;
  vector<int64_t> A(N);
  vector<vector<Edge>> graph(N, vector<Edge>(0));
  rep(i, N) cin >> A[i];
  rep(i, M){
    int u, v;
    int64_t b;
    cin >> u >> v >> b;
    u--;v--;
    graph[u].emplace_back(Edge(v, b));
    graph[v].emplace_back(Edge(u, b));
  }
  vector<int64_t> dists(N, INF);
  Dijkstra(A, graph, dists, 0);
  for(int i = 1; i < N; i++){
    cout << dists[i] << ' ';
  }
  cout << endl;
  return 0;
}