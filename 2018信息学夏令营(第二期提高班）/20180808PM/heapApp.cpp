#include <cstdio>
#include <queue>
#include <cstring>
#include <iostream>
using namespace std;

struct T {
  int a;
};

priority_queue<T> q;
bool operator<(T a, T b) { return a.a > b.a; }

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int t;
    scanf("%d", &t);
    q.push((T) {t});
  }
  while (q.size()) {
    printf("%d ", q.top().a);
    q.pop();
  }
  return 0;
}