#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node* next, *prev;
  Node(int data = 0, Node* next = NULL, Node* prev = NULL)
      : data(data), next(next), prev(prev) {}
};
struct List {
  Node* head, *tail;
  int size;
  List() {
    head = new Node();
    tail = new Node();
    head->next = tail;
    tail->prev = head;
    size = 0;
  }
  friend ostream& operator<<(ostream& os, List& q) {
    Node* p = q.head->next;
    while (p != q.tail) {
      os << p->data << " ";
      p = p->next;
    }
    return os;
  }
  void push_first(Node* node) { insert(head, node, head->next); }
  void push_last(Node* node) { insert(tail->prev, node, tail); }
  void insert(Node* p, Node* q, Node* r) {
    p->next = q;
    q->prev = p;
    q->next = r;
    r->prev = q;
    ++size;
  }
  void remove(Node* q) {
    if (size == 0) return;
    Node* p = q->prev;
    Node* r = q->next;
    p->next = r;
    --size;
  }
};
int main(int argc, char const* argv[]) {
  List ls;
  cout << ls << endl;
  for (int i = 0; i < 10; i++) {
    ls.push_first(new Node(i + 1));
    cout << ls << endl;
  }
  return 0;
}