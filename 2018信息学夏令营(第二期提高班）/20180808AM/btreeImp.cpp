#include <bits/stdc++.h>
using namespace std;
struct BTree {
  BTree *lchild;
  BTree *rchild;
  char data;

  static BTree *BuildTree(char *pre, char *in, int n) {

    char *p;
    int k;
    if (n <= 0) return NULL;
    BTree *s = new BTree();
    s->data = *pre;
    for (p = in; p < in + n; p++) {
      if (*p == *pre) break;
    }
    k = p - in;
    s->lchild = BuildTree(pre + 1, in, k);
    s->rchild = BuildTree(pre + k + 1, p + 1, n - k - 1);
    return s;
  }
  void inOrder() {
    if (this->lchild != NULL) {
      this->lchild->inOrder();
    }
    cout << this->data;
    if (this->rchild != NULL) {
      this->rchild->inOrder();
    }
  }
  void postOrder() {
    if (this->lchild != NULL) {
      this->lchild->postOrder();
    }
    if (this->rchild != NULL) {
      this->rchild->postOrder();
    }
    cout << this->data;
  }
};
int main() {
  char pre[1000], in[1000];
  while (cin >> pre >> in) {
    BTree *bt = BTree::BuildTree(pre, in, strlen(pre));
    bt->postOrder();
    cout << endl;
  }
}