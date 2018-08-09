#include <bits/stdc++.h>
using namespace std;
struct Heap {
  int capacity = 2;
  int *data = new int[capacity];
  Heap() { data[0] = 0; }
  friend ostream &operator<<(ostream &os, Heap &h) {
    // os << h.data[0] << ":";
    for (int i = 1; i <= h.size(); i++) {
      os << h.data[i] << " ";
    }
    return os;
  }
  inline int &size() { return data[0]; }
  inline bool empty() { return data[0] == 0; }
  inline int left(int i) {
    if (2 * i <= size())
      return 2 * i;
    else
      return -1;
  }
  inline int right(int i) {
    if (2 * i + 1 <= size())
      return 2 * i + 1;
    else
      return -1;
  }
  inline int parent(int i) {
    if (i > 1) return data[i >> 1];
    return -1;
  }
  int top() {
    if (data[0] > 0)
      return data[1];
    else
      return -1;
  }
  void push(int x) {
    if (size() == capacity) {
      capacity <<= 1;
      int *data2 = new int[capacity];
      for (int i = 0; i <= size(); i++) data2[i] = data[i];
      delete[] data;
      data = data2;
    }
    data[++size()] = x;
    int cur = size();
    while (cur > 1 && data[cur] < data[cur >> 1]) {
      swap(data[cur], data[cur >> 1]);
      cur >>= 1;
    }
  }
  void pop() {
    if (empty()) return;
    swap(data[1], data[size()]);
    --size();
    int cur = 1;
    while (2 * cur <= size()) {
      if (data[cur] <= min(data[left(cur)], data[right(cur)])) return;
      if (data[left(cur)] < data[right(cur)]) {
        swap(data[cur], data[left(cur)]);
        cur = left(cur);
      } else {
        swap(data[cur], data[right(cur)]);
        cur = right(cur);
      }
    }
  }
};
int main(int argc, char const *argv[]) {
  Heap h;
  cout << h << endl;
  for (int i = 0; i < 10; i++) {
    h.push(rand() % 100);
    cout << h << endl;
  }
  while (h.size()) {
    h.pop();
    cout << h << endl;
  }
  return 0;
}
