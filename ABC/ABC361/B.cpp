#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

bool check(int l1, int r1, int l2, int r2){
  return !(r1 <= l2 || r2 <= l1);
}

int main(){
  vector<int> c1(6), c2(6);
  for(int i = 0; i < 6; i++){
    cin >> c1[i];
  }
  for(int i = 0; i < 6; i++){
    cin >> c2[i];
  }
  if(check(c1[0], c1[3], c2[0], c2[3]) && check(c1[1], c1[4], c2[1], c2[4]) && check(c1[2], c1[5], c2[2], c2[5])){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
} 