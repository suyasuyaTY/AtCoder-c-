#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N;
    cin>>N;
    Graph A(N,vector<int>(N)),B(N,vector<int>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>B[i][j];
        }
    }
    bool same1=true,same2=true,same3=true,same4=true;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j]==1 &&B[i][j]==0) same1=false; 
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j]==1 && B[N-j-1][i]==0) same2=false;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j]==1 && B[N-i-1][N-j-1]==0) same3=false;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j]==1 && B[j][N-i-1]==0)  same4=false;
        }
    }
    if(same1 || same2 || same3 || same4) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}