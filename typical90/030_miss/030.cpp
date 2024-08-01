#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

vector<int> primes;

void calc_primes(int N){
  vector<bool> is_prime(N / 2 + 1, true);
  for(int i = 2; i <= N / 2; i++){
    if(is_prime[i]){
      for(int j = 2*i; j <= N / 2; j += i){
        is_prime[j] = false;
      }
      primes.emplace_back(i);
    }
  }
}

int main(){
  int N, K;
  cin >> N >> K;
  calc_primes(N);
  cout << primes.size() << endl;
  return 0;
}