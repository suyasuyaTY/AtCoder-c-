#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> P_1(N + 1, 0), P_2(N + 1, 0);

  for(int i = 0; i < N; i++){
    int c, p;
    cin >> c >> p;

    if(c == 1) {
      P_1[i + 1] = P_1[i] + p;
      P_2[i + 1] = P_2[i];
    }
    else {
      P_1[i + 1] = P_1[i];
      P_2[i + 1] = P_2[i] + p;
    }
  }

  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    int l, r;
    cin >> l >> r;
    cout << P_1[r] - P_1[l - 1] << ' ' << P_2[r] - P_2[l - 1] << endl;
  }
  return 0;
}