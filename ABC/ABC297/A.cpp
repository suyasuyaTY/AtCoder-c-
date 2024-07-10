#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N,D;
    cin>>N>>D;
    vector<int> T(N+1,0);
    for(int i=1;i<=N;i++){
        cin>>T[i];
    }
    for(int i=2;i<=N;i++){
        if(T[i]-T[i-1]<=D){
            cout<<T[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}