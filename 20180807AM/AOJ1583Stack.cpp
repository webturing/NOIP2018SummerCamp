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
bool check(const string& exp) {
  stack<char> st;
  for (auto c : exp) {
    if (strchr("([{", c) != nullptr) {
      st.push(c);
    } else if (c == ')') {
      if (st.empty() || st.top() != '(') return false;
      st.pop();
    } else if (c == ']') {
      if (st.empty() || st.top() != '[') return false;
      st.pop();
    } else if (c == '}') {
      if (st.empty() || st.top() != '{') return false;
      st.pop();
    }
  }
  return st.empty();
}
int main() {
  for (string exp; cin >> exp;)
    if (check(exp))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  return 0;
}