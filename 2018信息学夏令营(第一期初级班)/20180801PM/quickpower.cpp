#include <iostream>
using namespace std;
const int M = 10;
int power_poor(int a, int n) {  // O(n)œﬂ–‘À„∑®
  int s = 1;
  for (int i = 0; i < n; i++) s = (s * a) % M;
  return s;
}
int power_quick(int a, int n) {  // O(log(n))
  a %= M;
  if (n == 0) return 1;
  if (n == 1) return a;
  if (n % 2 == 0) {
    int b = a * a % M;
    return power_quick(b, n / 2);
  } else {
    int b = a * a % M;
    return (power_quick(b, n / 2) * a) % M;
  }
}
int main() {
  int a = 3;
  int n = 200000000;

  //	cout<<power_poor(a,n)<<endl;
  cout << power_quick(a, n) << endl;
}
