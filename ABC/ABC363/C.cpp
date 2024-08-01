#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

bool check(int n, int k, const string &s){
  for(int i = 0; i < n - k + 1; i++){
    bool is_palindrome = true;
    for(int j = 0; j < k; j++){
      if(s[i + j] != s[i + k - j - 1]){
        is_palindrome = false;
        break;
      }
    }
    if(is_palindrome) return false;
  }
  return true;
}

int main(){
  int N, K;
  cin >> N >> K;
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  set<string> res;
  do{
    if(res.contains(s)) continue;
    if(check(N, K, s)){
      res.insert(s);
    }
  }while(next_permutation(s.begin(), s.end()));
  cout << res.size() << endl;
  return 0;
}