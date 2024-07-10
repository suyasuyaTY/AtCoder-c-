#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    string S;
    cin>>S;
    int b1=-1,b2=-1,r1=-1,r2=-1,k=-1;
    for(int i=0;i<8;i++){
        if(S[i]=='B' && b1==-1) b1=i;
        else if(S[i] =='B' && b2==-1) b2=i;
        if(S[i]=='R' && r1==-1) r1=i;
        else if(S[i] =='R' && r2==-1) r2=i;
        if(S[i]=='K') k=i;
    }
    if((b2-b1)%2==1 && r1<k && k<r2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}