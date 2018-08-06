#include <bits/stdc++.h>
using namespace std;
int main() {
  int a[50];
  a[1] = a[2] = 1;
  a[3] = 2;
  for (int i = 4; i <= 41; i++) a[i] = a[i - 1] + a[i - 3];
  int T;
  cin >> T;
  while (T--) {
    int m;
    cin >> m;
    cout << a[m] << endl;
  }
  return 0;
}

/**************************************************************
    Problem: 1236
    User: webturing
    Language: C++
    Result: 正确
    Time:0 ms
    Memory:1712 kb
****************************************************************/