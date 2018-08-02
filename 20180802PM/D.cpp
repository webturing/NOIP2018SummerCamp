#include <iostream>
#include <cstdio>
using namespace std;

int Gcd(int x, int y) { return y ? Gcd(y, x % y) : x; }

int Lcm(int x, int y) { return x * y / Gcd(x, y); }
int main() {
  int group;
  while (cin >> group) {
    int a[group], s = 1;
    for (int i = 0; i <= group - 1; i++) {
      cin >> a[i];
      s = Lcm(s, a[i]);
    }
    cout << s << endl;
  }
  return 0;
}

/**************************************************************
    Problem: 1229
    User: webturing
    Language: C++
    Result: 正确
    Time:0 ms
    Memory:1712 kb
****************************************************************/