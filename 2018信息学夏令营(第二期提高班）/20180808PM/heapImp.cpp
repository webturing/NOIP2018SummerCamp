#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

const int MAXN = 100000 + 10;
int n, cnt = 0;
int heap[MAXN];

void push(int x) {
  heap[++cnt] = x;
  int now = cnt;
  while (now >= 1) {
    int fa = now / 2;
    if (heap[fa] > heap[now]) {
      swap(heap[fa], heap[now]);
      now /= 2;
    } else
      break;
  }
}

void pop() {
  heap[1] = heap[cnt];
  cnt--;
  int now = 1;
  while (now * 2 <= cnt) {
    int l = now * 2, r = now * 2 + 1;
    if (heap[l] < heap[now]) {
      if (heap[r] < heap[now] && heap[r] < heap[l]) swap(l, r);
      swap(heap[l], heap[now]);
      now = l;
    } else if (heap[r] < heap[now]) {
      swap(heap[r], heap[now]);
      now = r;
    } else
      break;
  }
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int t;
    scanf("%d", &t);
    push(t);
  }
  while (n--) {
    printf("%d ", heap[1]);
    pop();
  }
  return 0;
}