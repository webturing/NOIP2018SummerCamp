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
  vector<int> v;
  while (n--) {
    int t = readint();
    if (find(v.begin(), v.end(), t) == v.end()) v.push_back(t);
  }
  sort(v.begin(), v.end());
  for (auto e : v) cout << e << " ";
  cout << endl;
  return 0;
}