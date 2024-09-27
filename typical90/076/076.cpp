#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  long long sum = 0;
  for (int i = 0; i < N; i++)
    sum += A[i];
  long long obt;
  if (sum % 10 == 0)
    obt = sum / 10;
  else {
    cout << "No" << endl;
    return 0;
  }
  int start = 0, end = 0;
  long long tmp = 0;
  while (start < N) {
    while (tmp < obt) {
      tmp += A[end % N];
      end += 1;
    }
    if (tmp == obt) {
      cout << "Yes" << endl;
      return 0;
    }
    tmp -= A[start % N];
    start += 1;
  }
  cout << "No" << endl;
}