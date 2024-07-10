#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N;
    cin>>N;
    string S;
    cin>>S;
    for(int i=0;i<N-1;i++){
        if(S[i]==S[i+1]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}