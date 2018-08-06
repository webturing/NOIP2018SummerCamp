#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n = 1993;
  //	while(n>=10)n=n/10;//method1
  char s[100];
  sprintf(s, "%d", n);
  //	puts(s);
  //	putchar(s[0]);
  double y = log10(n);  //
  y = y - (int)y;
  double z = pow(10, y);
  cout << z << endl;

  return 0;
}
