#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int64_t op(int64_t a, int64_t b) {return max(a, b);}
int64_t e() {return -1; }

int main(){
  int W, N;
  cin >> W >> N;
  vector<int64_t> worth(W + 1, -1);
  worth[0] = 0;
  for(int i = 0; i < N; i++){
    int l, r;
    int64_t v;
    cin >> l >> r >> v;
    vector<int64_t> next_worth(W + 1, 0);
    rep(j, W + 1) next_worth[j] = worth[j];
    atcoder::segtree<int64_t, op, e> seg(worth);
    rep(j, W + 1){
      int cl = max(0, j - r), cr = max(0, j - l + 1);
      if(cl == cr) continue;
      int64_t val = seg.prod(cl, cr);
      if(val != -1) next_worth[j] = max(next_worth[j], val + v);
    }
    worth.swap(next_worth);
  }
  cout << worth[W] << endl;
  return 0;
}