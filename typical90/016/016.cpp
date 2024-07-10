#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int64_t N;
  int64_t A, B, C;
  cin >> N >> A >> B >> C;
  int64_t ans = 10000;
  for(int64_t i = 0; i < 10000; i++){
    for(int64_t j = 0; j < 10000 - i; j++){
      if(N - A*i - B*j >= 0 && (N - A*i - B*j)%C == 0) ans = min(ans, i + j + (N - A*i - B*j)/C); 
    }
  }
  cout << ans << endl; 
  return 0;
}