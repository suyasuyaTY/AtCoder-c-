#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N;
    int64_t ave=0,sum=0,plus_1=0,count=0;
    cin>>N;
    vector<int64_t> P(N);
    for(int i=0;i<N;i++){
        cin>>P[i];
        sum+=P[i];
    }
    sort(P.begin(),P.end());
    ave=sum/N;
    plus_1=sum-ave*N;
    for(int i=0;i<N;i++){
        if(i<N-plus_1){
            count+=abs(ave-P[i]);
        }
        else{
            count+=abs(P[i]-(ave+1));
        }
    }
    cout<<count/2<<endl;
    return 0;
}