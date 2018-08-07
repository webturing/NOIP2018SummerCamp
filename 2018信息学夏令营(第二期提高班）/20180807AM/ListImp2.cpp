#include <iostream>
using namespace std;
struct Node {  //双向链表的实现
  int data;
  struct Node* next, *prev;
};
struct List {
  Node* head = NULL;
  Node* tail = NULL;
  int size = 0;
  void append(Node* node) {  //头插法
                             // TODO
  }
  void append(int x) {
    // TODO
  }
  void insertAfter(Node* pos, Node* ele) {
    // TODO
  }
  void disp() {
    Node* p = head;
    while (p != NULL) {
      cout << p->data << " ";
      p = p->next;
    }
    cout << endl;
  }
};
int main() {
  List ls;
  ls.disp();
  for (int i = 0; i < 10; i++) {
    ls.append(i);
    ls.disp();
}}