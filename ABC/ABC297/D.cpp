#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int64_t gcd(int64_t A,int64_t B){
    if(A==B){
        return 0;
    }
    else if(A>B){
        if(A%B==0) return A/B-1;
        else return A/B+gcd(B,A%B);
    }
    else{
        if(B%A==0) return B/A-1;
        return B/A+gcd(A,B%A);
    }
}

int main(){
    int64_t A,B;
    cin>>A>>B;
    cout<<gcd(A,B)<<endl;
    return 0;
}