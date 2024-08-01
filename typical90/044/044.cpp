#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int index = 0;
  rep(i, Q){
    int t, x, y;
    cin >> t >> x >> y;
    x--;y--;
    if(t == 1){
      swap(A[(index + x) % N], A[(index + y) % N]);
    }
    if(t == 2) index = (index + N - 1) % N;
    if(t == 3){
      cout << A[(index + x) % N] << endl;
    }
  }
  return 0;
}