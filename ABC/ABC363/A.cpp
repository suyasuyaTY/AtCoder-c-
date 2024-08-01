#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int R;
  cin >> R;
  cout << (R / 100 + 1) * 100 - R << endl;
  return 0;
}