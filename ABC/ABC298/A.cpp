#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    bool good=false;
    int N;
    string S;
    cin>>N>>S;
    for(int i=0;i<N;i++){
        if(S[i]=='o'){
            good=true;
        }
        if(S[i]=='x'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(good) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}