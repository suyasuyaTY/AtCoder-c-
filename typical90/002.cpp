#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int N;

void generate_parentheses(int i, int r, string &s){
  if(r < 0) return;
  if(i == N && r == 0) {
    cout << s << '\n';
    return;
  }
  if(i == N && r != 0) return;
  s[i] = '(';
  generate_parentheses(i + 1, r + 1, s);
  s[i] = ')';
  generate_parentheses(i + 1, r - 1, s);
  return;
}

int main(){
  cin >> N;
  string s("", N);
  generate_parentheses(0, 0 , s);
  return 0;
}