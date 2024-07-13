#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int R, G, B;
  cin >> R >> G >> B;
  string C;
  cin >> C;
  if(C == "Red") cout << min(G, B) << endl;
  if(C == "Green") cout << min(R, B) << endl;
  if(C == "Blue") cout << min(G, R) << endl;
  return 0;
}