#include<bits/stdc++.h>
#include<atcoder/all>

using namespace std;

using Graph=vector<vector<int>>;

int main(){
    int N;
    cin>>N;
    vector<string> W(N,string()),word={"and","not","that","the","you"};
    for(int i=0;i<N;i++){
        cin>>W[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<word.size();j++){
            if(W[i]==word[j]){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}