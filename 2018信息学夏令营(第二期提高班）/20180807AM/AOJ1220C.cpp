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
  int n;
  cin >> n;
  set<int> v;
  int readint() {
    int t;
    cin >> t;
    return t;
  }
  5 1 while (n--) v.insert(readint());
  for (auto e : v) cout << e << " ";
  cout << endl;
  return 0;
}