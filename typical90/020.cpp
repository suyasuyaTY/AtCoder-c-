#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

uint64_t pow(uint64_t a, uint64_t n){
  uint64_t r = 1;
  while (n != 0)
  {
    if(n % 2 == 1) r *= a;
    a *= a;
    n /= 2;
  }
  return r;
}

int main(){
  uint64_t a, b, c;
  cin >> a >> b >> c;
  if(a < pow(c, b)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}