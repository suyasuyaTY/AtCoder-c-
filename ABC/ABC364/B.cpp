#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int H, W, x, y;
  cin >> H >> W;
  cin >> y >> x;
  vector<string> C(H);
  rep(i, H) cin >> C[i];
  string X;
  cin >> X;
  for(char c: X){
    if(c == 'L' && x > 1 && C[y - 1][x - 2] == '.'){
      x = x - 1;
    }
    if(c == 'R' && x < W && C[y - 1][x] == '.'){
      x = x + 1;
    }
    if(c == 'U' && y > 1 && C[y - 2][x - 1] == '.'){
      y = y - 1;
    }
    if(c == 'D' && y < H && C[y][x - 1] == '.'){
      y = y + 1;
    }
  }
  cout << y << ' ' << x << endl;
  return 0;
}