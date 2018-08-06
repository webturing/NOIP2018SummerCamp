#include <iostream>
#include <string>
using namespace std;
int a[1024];
int b[1024];
void createtree(string s, int c[]) {
  int len = s.length();
  for (int i = 0; i < len; i++) {
    int temp = s[i] - '0';
    for (int j = 1; j <= 1023;) {
      if (c[j] == -1) {
        c[j] = temp;
        break;

      } else if (c[j] > temp)
        j = j * 2;
      else {
        j = j * 2 + 1;
      }
    }
  }
}
int main() {
  int n, i;
  string s;
  string t;
  while (cin >> n && n) {
    for (i = 0; i < 1024; i++) a[i] = -1;
    cin >> s;
    createtree(s, a);
    while (n--) {
      for (i = 0; i < 1024; i++) b[i] = -1;
      cin >> t;
      createtree(t, b);
      for (i = 0; i < 1024; i++)
        if (a[i] != b[i]) break;
      if (i == 1024)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
  return 0;
}