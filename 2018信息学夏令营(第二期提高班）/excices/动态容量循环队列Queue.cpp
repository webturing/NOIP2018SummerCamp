#include <bits/stdc++.h>
using namespace std;
struct Queue {
  int capacity = 10;
  int *data = new int[capacity];
  int _size = 0;
  int head = 0, tail = 0;
  inline int size() const { return _size; }
  inline int next(int i) const { return (i + 1) % capacity; }
  inline bool empty() const { return size() == 0; }
  friend ostream &operator<<(ostream &os, const Queue &q) {
    for (int i = q.head; i != q.tail; i = q.next(i)) os << q.data[i] << " ";
    return os;
  }
  void push(int x) {
    if (size() == capacity) {
      capacity <<= 1;
      int *data2 = new int[capacity];
      for (int i = 0; i < capacity / 2; i++) data2[i] = data[i];
      delete[] data;
      data = data2;
    }
    data[tail] = x;
    tail = next(tail);
    ++_size;
  }
  void pop() {
    if (empty()) return;
    head = next(head);
    --_size;
  }
  int top() const {
    if (empty()) return -1;
    return data[head];
  }
  int back() const {
    if (empty()) return -1;
    return data[(tail + capacity - 1) % capacity];
  }
};

int main() {
  Queue q;
  for (int i = 0; i < 10; i++) {
    q.push(rand() % 100);
    cout << q << endl;
  }
  while (q.size()) {
    q.pop();
    cout << q << endl;
  }
}