#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long LL;

const int MAX_SIZE = 200 + 10;
int a[MAX_SIZE];
int main() {
  int n;
  cin >> n;
  rep(i, 0, n - 1) cin >> a[i];
  sort(a, a + n);
  auto p = unique(a, a + n) - a;
  rep(i, 0, p - 1) cout << a[i] << endl;
  return 0;
}