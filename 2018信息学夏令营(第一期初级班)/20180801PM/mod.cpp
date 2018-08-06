#include <iostream>
using namespace std;
int main() {
  int a = 3;
  int n = 1997;
  int s = 1;
  for (int i = 1; i <= n; i++) {
    s = (s * a) % 10;
  }
  cout << s << endl;
  return 0;
}
