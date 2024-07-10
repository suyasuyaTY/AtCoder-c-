#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
#include<atcoder/all>

using namespace std;

int main(){
  int64_t N, H;
  cin >> N;

  // A_i(1<= i <= N)が初めて0より大きくなる時の(高さ, 個数)を管理
  vector<pair<int64_t, int64_t>> rectangles;

  // 1 + Σ 高さ * 個数
  int64_t res = 1;

  for(int i = 0; i < N; i++){
    cin >> H;
    // 高さはH、はじめのX_j = Hとなる個数は1
    int64_t count = 1;

    // Hより低いものがある限り更新
    while(!empty(rectangles) && rectangles.back().first <= H){
      const auto &[h, c] = rectangles.back();

      // 合計から h * cを引いて
      res -= h * c;
      // 個数を増やして
      count += c;
      // 列から取り除く
      rectangles.pop_back();
    }

    // 合計にH * countを足す
    res += H * count;
    rectangles.emplace_back(H, count);
    cout << res << ' ';
  }
  cout << endl;
  return 0;
}