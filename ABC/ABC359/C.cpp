#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

using vector2D = pair<int64_t, int64_t>;

int main(){
  vector2D S, T;
  cin >> S.first >> S.second >> T.first >> T.second;
  
  if((S.first + S.second)%2 == 1) --S.first;
  if((T.first + T.second)%2 == 1) --T.first;

  vector2D D = {abs(S.first - T.first), abs(S.second - T.second)};
  
  cout << (D.second + max(D.first, D.second)) / 2 <<endl;
  return 0;
}