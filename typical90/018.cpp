#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;
static const double pi = 3.141592653589793;


int main(){
  double T;
  double L, X, Y;
  cin >> T >> L >> X >> Y;
  int Q;
  cin >> Q;
  for(int i=0; i < Q; i++){
    double e;
    cin >> e;
    double Y_e = -L*sin((e/T)*2*pi)/2, Z_e = L/2 - L*cos((e/T)*2*pi)/2;
    cout << fixed << setprecision(10) << atan(Z_e/sqrt(X*X + (Y - Y_e)*(Y - Y_e)))*180/pi << endl;
  }
  return 0;
}