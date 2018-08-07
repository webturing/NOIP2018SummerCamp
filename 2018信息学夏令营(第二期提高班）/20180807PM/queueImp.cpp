#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 10000;
struct Queue {
  int data[MAX_SIZE];
  int head = 0, tail = 0;
  void disp() {
    for (int i = head; i < tail; i++) cout << data[i] << " ";
    cout << endl;
  }
  int size() { return tail - head; }
  bool empty() { return head == tail; }
  void push(int x) { data[tail++] = x; }
  void pop() {
    if (size()) ++head;
  }
};
int main() {
  Queue q;
  q.disp();
  for (int i = 0; i < 10; i++) {
    q.push(i);
    q.disp();
  }
  return 0;
}