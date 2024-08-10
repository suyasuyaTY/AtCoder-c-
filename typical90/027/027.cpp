#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> users;
  rep(i, N) {
    string user;
    cin >> user;
    if (users.contains(user))
      continue;
    users.insert(user);
    cout << i + 1 << endl;
  }
  return 0;
}