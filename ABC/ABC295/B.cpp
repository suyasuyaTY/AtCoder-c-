#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<string>;

int R,C;

void bomb(int x,int y,int p,Graph &B){
    B[y][x]='.';
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(B[i][j]=='#' && abs(i-y)+abs(j-x)<=p){
                B[i][j]='.';
            }
        }
    }
}

int main(){
    cin>>R>>C;
    Graph B(R,string());
    for(int i=0;i<R;i++){
        cin>>B[i];
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(B[i][j]-'0'>0 && B[i][j]-'0'<10){
                bomb(j,i,B[i][j]-'0',B);
            }
        }
    }
    for(int i=0;i<R;i++){
        cout<<B[i]<<endl;
    }
    return 0;
}