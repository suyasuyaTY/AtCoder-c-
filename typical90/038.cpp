#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int64_t powpow(int64_t x, int64_t n){
  if(n == 0) return 1;
  int64_t val = powpow(x, n / 2);
  val *= val;
  if (n % 2 == 1) val *= x;
  return val;
}

int main(){
  int64_t A, B;
  cin >> A >> B;

  int64_t M = gcd(A, B);

  int64_t Am = A / M;

  int64_t res = 0;
  if(__builtin_mul_overflow(Am, B, &res)) {
    cout << "Large" << endl;
  }
  else{
    if(res > powpow(10, 18)) cout << "Large" << endl;
    else cout << res << endl;
  }
  return 0;
}