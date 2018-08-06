#include <iostream>
using namespace std;

const int M = 1000000 + 10;
typedef unsigned long long LL;
LL q[M];

void work(int a, int n) {
  q[1] = a;
  int two = 1, three = 1, rear = 2;
  while (rear <= n) {
    LL t1 = 2 * q[two] + 1, t2 = 3 * q[three] + 1;
    LL t = min(t1, t2);
    if (t1 < t2)
      two++;
    else
      three++;
    if (t != q[rear - 1]) q[rear++] = t;
  }
  cout << q[n] << endl;
}

int main() {
  int a, n;
  while (cin >> a >> n) work(a, n);
  return 0;
}
