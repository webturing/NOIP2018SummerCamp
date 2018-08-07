#include <iostream>
using namespace std;
struct Node {  //单链表的实现
  int data;
  struct Node* next;
};
struct List {
  Node* head = NULL;
  int size = 0;
  void append(Node* node) {  //头插法
    node->next = head;
    head = node;
    ++size;
  }
  void append(int x) {
    Node* node = new Node;
    node->data = x;
    node->next = NULL;
    append(node);
  }
  void insertAfter(Node* pos, Node* ele) {
    Node* c = pos->next;
    c->next = ele;
    ele->next = c;
    ++size;
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