#include <iostream>
#include <cassert>
using namespace std;

int getPower(int p, int n) {
  int ret = 0;
  int t = p;
  while (t <= n) {
    ret += n / t;
    t *= p;
  }
  return ret;
}
int remove25(int n) {
  while (n % 2 == 0) n /= 2;
  while (n % 5 == 0) n /= 5;
  return n;
}
int main() {
  assert(getPower(5, 25) == 6);
  assert(remove25(1250) == 1);
  int n;
  cin >> n;
  int p = 1;
  for (int i = 2; i <= n; i++) {
    int j = remove25(i);
    p = (p * j) % 10;
  }
  int x = getPower(2, n) - getPower(5, n);
  while (x--) p = (p * 2) % 10;
  cout << p << endl;
}