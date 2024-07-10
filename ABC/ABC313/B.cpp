#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N,M,a,b,x=-1;
    cin>>N>>M;
    vector<int> P(N,1);
    for(int i=0;i<M;i++){
        cin>>a>>b;
        P[--b]=0;
    }
    for(int i=0;i<N;i++){
        if(x==-1 && P[i]==1) x=i+1;
        else if(x!=-1 && P[i]==1) x=-1;
    }
    cout<<x<<endl;
    return 0;
}