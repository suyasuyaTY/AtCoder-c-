#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N;
    int64_t X;
    cin>>N>>X;
    vector<int64_t> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    for(int i=0;i<N;i++){
        int Y=A[i]-X;
        if(binary_search(A.begin(),A.end(),Y)){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}