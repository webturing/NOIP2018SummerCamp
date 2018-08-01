#include <iostream>
using namespace std;
int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
int lcm(int a, int b) { return a * b / gcd(a, b); }
int main() {
  int n;
  while (cin >> n) {
    int s = 1;
    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;
      s = lcm(s, t);
    }
    cout << s << endl;
  }
  return 0;
}
