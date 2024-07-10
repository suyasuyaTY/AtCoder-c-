#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

template <typename T>
vector<T> prime_factor(T n) {
    vector<T> ret;
    for (T i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        while (n % i == 0) {
            n /= i;
            ret.push_back(i);
        }
    }
    if (n != 1) ret.push_back(n);
    return ret;
}

int main(){
    int64_t N,M,X,Y;
    cin>>N>>M;
    X=M;
    while (sqrt(X)<=N){
        vector<int64_t> X_factor=prime_factor<int64_t>(X);
        if(X_factor.size()==1){
            if(X<=N){
                cout<<X<<endl;
                return 0;
            }
        }
        else{
            
        }
    }
    
    return 0;
}