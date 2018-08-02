#include <stdio.h>
int isprime(int n) {  // O(sqrt(n)/2)
  if (n == 2) return 1;
  if (n < 2 || n % 2 == 0) return 0;
  for (int c = 3; c * c <= n; c += 2)
    if (n % c == 0) return 0;
  return 1;
}
int main() {
  int n;
  while (cin >> n) {
    int p = n / 2;
    if (p % 2 == 0) --p;
    while (p >= 3) {  // O((n-3)/4)
      int q = n - p;
      if (isprime(p) && isprime(q)) {
        printf("%d %d\n", p, q);
        break;
      }
      p -= 2;
    }
  }
  return 0;
}