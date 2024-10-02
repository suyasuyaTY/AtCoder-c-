#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  if(H == 1 || W == 1) cout << H * W << endl;
  cout << ((H + 1) / 2) * ((W + 1) / 2) << endl;
  return 0;
}