#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  for(int i = 0; i < N - 2; i++){
    if(S[i] == "sweet" && S[i + 1] == "sweet"){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}