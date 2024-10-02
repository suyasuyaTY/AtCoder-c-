#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int64_t A, B, C;
  cin >> A >> B >> C;
  int64_t k = gcd(gcd(A, B), C);
  cout << (A + B + C) / k - 3<< endl;
  return 0;
}