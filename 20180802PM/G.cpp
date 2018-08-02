#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000;
int A[26] = {1};
void fill() {
  for (int i = 1; i < 26; i++) A[i] = (A[i - 1] * i) % MOD;
}
int main(int argc, char const *argv[]) {
  fill();
  // copy(A, A + 25, ostream_iterator<int>(cout, " "));
  // cout << endl;
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= 25 && i <= n; i++) {
    sum = (sum + A[i]) % MOD;
  }
  cout << sum << endl;
  return 0;
}

/**************************************************************
    Problem: 1232
    User: webturing
    Language: C++
    Result: 正确
    Time:0 ms
    Memory:1712 kb
****************************************************************/