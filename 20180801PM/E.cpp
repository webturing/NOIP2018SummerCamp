#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    double n;
    cin >> n;
    double y = n * log10(n);
    y = fmod(y, 1.0);
    double z = pow(10, y);
    cout << (int)z << endl;
  }
  return 0;
}
