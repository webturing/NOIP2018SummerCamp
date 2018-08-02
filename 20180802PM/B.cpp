#include <stdio.h>
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
  int N;
  scanf("%d", &N);
  while (N--) {
    int n, m;
    scanf("%d%d", &n, &m);
    int t = gcd(n, m);
    int s = n * m / t;
    printf("%d %d\n", t, s);
  }
  return 0;
}

/**************************************************************
    Problem: 1227
    User: webturing
    Language: C++
    Result: 正确
    Time:0 ms
    Memory:1092 kb
****************************************************************/