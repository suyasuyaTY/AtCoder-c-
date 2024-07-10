#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

bool not_palindrome(const string &a){
    for(int i = 0; const auto &c : a){
      if(c != a[a.size() - i - 1]) return true;
      i++;
    }
    return false;
  }

int main() {
  int64_t N, K;
  cin >> N >> K;

  string S;
  cin >> S;

  // はじめ、AでもBでもない数字で埋めておく
  map<string, int64_t> dp = {{string(K - 1, 'C'), 1}};

  for (const auto &c: S){
    // 末尾に一文字追加する
    // 'A'を追加する場合と'B'を追加する場合を合併しK文字の文字列を作成し、その文字列ができるよい文字列の数を保存
    map<string, int64_t> tmp;
    for(const auto &[s, v]: dp){
      if(c != 'B'){
        tmp[s + 'A'] = v;
      }
      if(c != 'A'){
        tmp[s + 'B'] = v;
      }
    }

    // dpテーブルを削除
    dp.clear();

    // K文字の文字列が回文でなければ先頭を削って追加する
    for(const auto &[s, v]: tmp){
      if (not_palindrome(s)){
        string t = s.substr(1);
        if (dp.contains(t)){
          dp[t] += v;
          dp[t] %= 998244353;
        }
        else{
          dp[t] = v;
        }
      }
    }
  }

  int64_t res = 0;
  for(const auto &[s, v]: dp){
    res += v;
    res %= 998244353;
  }
  cout << res << endl;
}