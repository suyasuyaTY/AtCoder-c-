#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int dist(int dx, int dy){
  return dx*dx+dy*dy;
}

int main(){
  int xa, xb, xc, ya, yb, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  int d_ab = dist(xa-xb, ya-yb), d_bc = dist(xb-xc, yb-yc), d_ca = dist(xc-xa, yc-ya);
  if(d_ab == d_bc + d_ca || d_bc == d_ab + d_ca || d_ca == d_ab + d_bc){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}