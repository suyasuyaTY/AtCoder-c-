#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int N, Q;
  cin >> N;
  vector<int> A(N, 0);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());
  cin >> Q;
  rep(i, Q){
    int b;
    cin >> b;
    auto it = lower_bound(A.begin(), A.end(), b);
    if(it == A.begin()) cout << *it - b << endl;
    else if(it == A.end()) cout << b - *(it - 1) << endl;
    else cout << min(*it - b, b - *(it - 1))  << endl;
  }
  return 0;
}