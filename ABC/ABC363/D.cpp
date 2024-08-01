#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int64_t powint64(int64_t a, int b){
  int64_t ret = 1;
  while (b > 0){
    if(b & 1) ret *= a;
    b >>= 1;
    if(b <= 0) break;
    a *= a; 
  }
  return ret;
}

void make_answer(int64_t N, int k, int keta, string &s){
  if(N <= 0) return;
  int t = N / powint64(10, (keta - 1) / 2 - k);
  s[k] = t + '0';
  s[keta- k - 1] = t + '0';
  make_answer(N - t * powint64(10, (keta - 1) / 2 - k), k + 1, keta, s);
}

int main(){
  int64_t N;
  cin >> N;
  if(N == 1) {
    cout << 0 << endl;
    return 0;
  }
  N -= 2;
  int keta = 1;
  while(true){
    int64_t tmp = N - 9LL * powint64(10, (keta - 1) / 2);
    if(tmp < 0) break;
    N = tmp;
    keta += 1;
  }
  string s(keta, '0');
  int t = N / powint64(10, (keta - 1) / 2);
  s[0] = t + 1 + '0';
  s[keta - 1] = t + 1 + '0';
  make_answer(N - t * powint64(10, (keta - 1) / 2), 1, keta, s);
  cout << s << endl;
  return 0;
}