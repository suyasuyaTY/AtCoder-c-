#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;
  string s, t;
  cin >> s >> t;
  s += "..";
  t += "..";
  map<string, pair<int, int>> dict;
  dict[s] = make_pair(0, N);
  queue<string> q;
  q.push(s);
  while (!q.empty())
  {
    string tmp = q.front();q.pop();
    int count, k;
    tie(count, k) = dict[tmp];
    for(int i = 0; i <= N; i++){
      if(i >= k - 1 && i <= k + 1) continue;
      string tmp1(tmp);
      tmp1.at(k) = tmp.at(i);
      tmp1.at(k + 1) = tmp.at(i + 1);
      tmp1.at(i) = '.';
      tmp1.at(i + 1) = '.';
      if(!dict.contains(tmp1)){
        dict[tmp1] = make_pair(count + 1, i);
        q.push(tmp1);
      }
    }
  }
  if(dict.contains(t)) cout << dict[t].first << endl;
  else cout << -1 << endl;
  return 0;
}