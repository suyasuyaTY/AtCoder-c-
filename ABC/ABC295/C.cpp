#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N,a,answer=0;
    cin>>N;
    map<int,int> A;
    for(int i=0;i<N;i++){
        cin>>a;
        A[a]+=1;
        if(A[a]>=2){
            A[a]-=2;
            answer+=1;
        }
    }
    cout<<answer<<endl;
    return 0;
}