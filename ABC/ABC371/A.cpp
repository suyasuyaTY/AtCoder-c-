#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  char a, b, c;
  cin >> a >> b >> c;
  if (a == '>' && b == '<' && c == '<') {
    cout << 'A' << endl;
  }
  if (a == '<' && b == '>' && c == '>') {
    cout << 'A' << endl;
  }
  if (a == '<' && b == '<' && c == '<') {
    cout << 'B' << endl;
  }
  if (a == '>' && b == '>' && c == '>') {
    cout << 'B' << endl;
  }
  if (a == '<' && b == '<' && c == '>') {
    cout << 'C' << endl;
  }
  if (a == '>' && b == '>' && c == '<') {
    cout << 'C' << endl;
  }
}