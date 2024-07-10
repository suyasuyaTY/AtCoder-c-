#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N,x=0;
    cin>>N;
    vector<int> P(N,0);
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    for(int i=1;i<N;i++){
        x=max(x,P[i]-P[0]+1);
    }
    cout<<x<<endl;
    return 0;
}