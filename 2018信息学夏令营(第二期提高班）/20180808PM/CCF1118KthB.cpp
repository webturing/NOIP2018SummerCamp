#include <bits/stdc++.h>
using namespace std;
int readint() {
  int x;
  cin >> x;
  return x;
}
int main(int argc, char const *argv[]) {
  int n, k, ans5;
  cin >> n >> k;
  priority_queue<int> v;
  while (n--) v.push(readint());
  while (--k) {
    v.pop();
  }
  cout << ans << endl;
  return 0;
}