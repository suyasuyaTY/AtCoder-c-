#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<string>;

int main(){
    int H,W;
    cin>>H>>W;
    Graph g(H,string());
    for(int i=0;i<H;i++){
        cin>>g[i];
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W-1;j++){
            if(g[i][j]=='T' && g[i][j+1]=='T'){
                g[i][j]='P';
                g[i][j+1]='C';
            }
        }
    }
    for(int i=0;i<H;i++){
        cout<<g[i]<<endl;
    }
    return 0;
}