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
//#define LOCAL
int main() {
  for (int n, m; cin >> n >> m;) {
    list<int> v; /*STL链表效率高*/
    rep(i, 1, n) v.push_back(i);
    auto p = v.begin();
    while (v.size() > 1) {
      rep(i, 1, m - 1) {
        ++p;
        if (p == v.end()) p = v.begin();
      }
      p = v.erase(p);
      if (p == v.end()) p = v.begin();

#ifdef LOCAL
      copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
      cout << endl;
#endif
    }
    cout << *v.begin() << endl;
  }
  return 0;
}