#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<string>;

int main(){
    Graph S(8,string());
    for(int i=0;i<8;i++){
        cin>>S[i];
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(S[i][j]=='*'){
                char a='a'+j;
                cout<<a<<8-i<<endl;
            }
        }
    }
    return 0;
}