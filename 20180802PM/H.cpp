#include <iostream>
#include <stdio.h>
#define maxn 100001
using namespace std;
int num[maxn] = {0};
int main() {
  int n;
  num[2] = 2;
  num[1] = 1;
  num[0] = 1;
  for (int i = 3; i < maxn; i++) {
    num[i] = (num[i - 1] * (4 * i - 2) / (i + 1)) % 10007;
  }
  while (cin >> n) {
    if (n % 2 == 0)
      cout << 0 << endl;
    else {
      if (n == 1)
        cout << 1 << endl;
      else
        cout << num[(n - 1) / 2] << endl;
    }
  }
  return 0;
}

/**************************************************************
    Problem: 1233
    User: webturing
    Language: C++
    Result: 正确
    Time:0 ms
    Memory:2104 kb
****************************************************************/