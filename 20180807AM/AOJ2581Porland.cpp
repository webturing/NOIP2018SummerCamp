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
bool number(string tok) {
  double d;
  istringstream iss(tok);
  if (iss >> d)
    return true;
  else
    return false;
}
int main() {
  vector<string> toks;
  for (string tok; cin >> tok;) toks.push_back(tok);
  reverse(toks.begin(), toks.end());
  stack<double> st;
  for (auto tok : toks) {
    if (number(tok)) {
      istringstream iss(tok);
      double temp;
      iss >> temp;
      st.push(temp);
    } else {
      double a = st.top();
      st.pop();
      double b = st.top();
      st.pop();
      double ans;
      switch (tok[0]) {
        case '+':
          ans = a + b;
          break;
        case '-':
          ans = a - b;
          break;
        case '*':
          ans = a * b;
          break;
        case '/':
          ans = a / b;
          break;
      }
      st.push(ans);
    }
  }
  cout << fixed << setprecision(2) << st.top() << endl;
  return 0;
}