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
#define LOCAL
int main() {
  int n;
  cin >> n;
  queue<int> v;
  while (n--) v.push(readint());
  while (v.size() > 1) {
    int cur = v.front();
    cout << cur << " ";
    v.pop();
    v.push(v.front());
    v.pop();
  }
  cout << v.front() << endl;
  return 0;
}