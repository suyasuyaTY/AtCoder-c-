#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;
const int64_t mint=998244353;

int main(){
    int64_t Q,a,b,answer=1,d=1;
    cin>>Q;
    vector<int64_t> r(Q+2,1);
    for(int i=2;i<Q+2;i++){
        r[i]=(r[i-1]*10)%mint;
    }
    queue<int> q;q.push(1);
    for(int i=0;i<Q;i++){
        cin>>a;
        if(a==1){
            cin>>b;
            q.push(b);
            answer=(answer*10+b)%mint;
            d++;
        }
        else if(a==2){
            b=q.front();q.pop();
            answer=((answer-b*r[d])%mint+mint)%mint;
            d--;
        }
        else{
            cout<<answer<<endl;
        }
    }
    return 0;
}