#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long LL;
int readint() {
  int t;
  cin >> t;
  return t;
}
int main() {
  for (int n, m; cin >> n >> m;) {
    int *a = new int[n + 1];
    rep(i, 1, n) a[i] = 1;
    int start = 0;
    while (count(a + 1, a + n, 1) > 1) {
      rep(i, 1, m)
      do {
        start++;
        if (start == n + 1) start = 1;
      } while (a[start] == 0);
      a[start] = 0;
      copy(a + 1, a + n, ostream_iterator<int>(cout, " "));
      cout << endl;
    }
    rep(i, 1, n) {
      if (a[i]) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}