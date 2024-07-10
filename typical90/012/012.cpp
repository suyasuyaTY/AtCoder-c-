#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  int Q;
  cin >> Q;
  atcoder::dsu g(H*W);
  vector<vector<int>> m(H, vector<int>(W, 0));
  rep(i, Q){
    int t;
    cin >> t;
    if(t == 1){
      int r, c;
      cin >> r >> c;
      r--;c--;
      m[r][c] = 1;
      if(r > 0 && m[r - 1][c] == 1) g.merge((r-1)*W + c, r*W + c);
      if(r < H - 1&& m[r + 1][c] == 1) g.merge((r+1)*W + c, r*W + c);
      if(c > 0 && m[r][c - 1] == 1) g.merge(r*W + c - 1, r*W + c);
      if(c < W - 1&& m[r][c + 1] == 1) g.merge(r*W + c + 1, r*W + c);
    }
    else{
      int ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      ra--;ca--;rb--;cb--;
      if(m[ra][ca] == 1 && m[rb][cb] == 1 && g.same(ra*W + ca, rb*W + cb)) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}