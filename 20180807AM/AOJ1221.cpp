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
  map<string, int> mp;
  int tot = 0;
  for (string word; cin >> word; ++tot) mp[word]++;
  cout << tot << endl;
  for (auto pr : mp) cout << pr.first << ":" << pr.second << endl;
  return 0;
}