#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  string s, t, u;
  cin >> s >> t;
  for(int w = 1; w < static_cast<int>(s.size()); w++){
    for(int c = 1; c <= w; c++){
      u = "";
      for(int i = c - 1; i < static_cast<int>(s.size()); i += w){
        u.push_back(s[i]);
      }
      if(t == u) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }cout << "No" << endl;
  return 0;
}