#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

using Point = pair<int, int>;

int INF = 1e9;

int main(){
  int H, W;
  cin>> H >> W;
  Point r, c;
  cin>> r.first >> c.first;
  cin>> r.second >> c.second;
  vector<string> S(H);

  rep(i, H) cin>> S[i];

  vector<vector<int>> rev(H, vector<int>(W, INF));
  rev[r.first - 1][c.first - 1] = -1;
  vector<int> dx = {1, 0, -1, 0};
  vector<int> dy = {0, 1, 0, -1};
  queue<Point> q;
  q.emplace(r.first,c.first);
  while (!q.empty())
  {
    Point from = q.front();
    q.pop();

    int cost = rev[from.first - 1][from.second - 1];
    
    for(int i = 0; i < 4; i++){
      for(int k = 1;; k++){
        Point next = {from.first + k * dx[i], from.second + k * dy[i]};
        if(next.first>= 1 && next.first <= H && next.second >= 1 && next.second <= W && S[next.first - 1][next.second - 1] == '.'){
          if(rev[next.first - 1][next.second - 1] < cost + 1) break;
          rev[next.first - 1][next.second - 1] = cost + 1;
          q.emplace(next);
        }
        else break;
      }
    }
  }

  cout << rev[r.second - 1][c.second - 1] << endl;
  return 0;
}