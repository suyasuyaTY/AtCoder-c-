#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, count = 0;
  cin >> N;
  string s;
  rep(i, N){
    cin >> s;
    if(s == "Takahashi"){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}