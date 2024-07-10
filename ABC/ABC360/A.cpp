#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  string s;
  cin >> s;
  for(int i = 0; i < 3; i++){
    if(s[i] == 'R'){
      cout << "Yes" << endl;
      break;
    }
    if(s[i] == 'M'){
      cout << "No"  << endl;
      break;
    }
  }
  return 0;
}