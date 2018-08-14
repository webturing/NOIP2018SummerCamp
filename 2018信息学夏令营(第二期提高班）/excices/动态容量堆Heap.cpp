#include <bits/stdc++.h>
using namespace std;
struct Heap {
  int _size;
  int *data;
  Heap(int _size = 10) : _size(_size) {
    data = new int[_size];
    data[0] = 0;
  }
  ~Heap() { delete[] data; }
  friend ostream &operator<<(ostream &os, Heap &h) {
    for (int i = 1; i <= h.size(); i++) {
      os << h.data[i] << " ";
    }
    return os;
  }
  inline int &size() const { return data[0]; }
  inline bool empty() const { return data[0] == 0; }
  inline int left(int i) const { return 2 * i <= size() ? 2 * i : -1; }
  inline int right(int i) const { return 2 * i + 1 <= size() ? 2 * i + 1 : -1; }
  inline int parent(int i) const { return i > 1 ? data[i >> 1] : 1; }
  inline int top() const { return size() ? data[1] : -1; }
  void push(int x) {
    if (size() == _size) {
      _size <<= 1;
      int *data2 = new int[_size];
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
