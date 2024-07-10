#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N,answer=0;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    vector<int> cycle(N,-1);
    set<int> route;
    for(int i=0;i<N;i++){
        int p=i;
        while(!route.count(p) && cycle[p]==-1){
            route.insert(p);
            p=A[p]-1;
        }
        while(cycle[p]==-1){
            route.erase(p);
            cycle[p]=1;
            p=A[p]-1;
        }
        if(!route.empty()){
            for(int r:route){
                cycle[r]=0;
            }
        }
        route.clear();
    }
    for(int i=0;i<N;i++){
        if(cycle[i]==1){
            answer+=1;
        }
    }
    cout<<answer<<endl;
    return 0;
}