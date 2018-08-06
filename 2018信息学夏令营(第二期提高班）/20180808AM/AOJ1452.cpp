#include <bits/stdc++.h>
using namespace std;
struct BTree {
  BTree *lchild;
  BTree *rchild;
  char data;
};
BTree *BuildTree(char *pre, char *in, int n) {
  BTree *s;
  char *p;
  int k;
  if (n <= 0) return NULL;
  s = (BTree *)malloc(sizeof(BTree));
  s->data = *pre;
  for (p = in; p < in + n; p++) {

    if (*p == *pre) break;
  }
  k = p - in;
  s->lchild = BuildTree(pre + 1, in, k);
  s->rchild = BuildTree(pre + k + 1, p + 1, n - k - 1);
  return s;
}
string s;
int k = 0;
void inOrder(BTree *t) {
  if (t->lchild != NULL) {

    cout << "(";
    inOrder(t->lchild);
    cout << ")";
  }
  cout << t->data;
  if (t->rchild != NULL) {

    cout << "(";
    inOrder(t->rchild);
    cout << ")";
  }
}

int main() {

  char pre[1000], in[1000];
  int t;
  cin >> t;
  while (t--) {
    cin >> pre >> in;
    BTree *t;
    t = BuildTree(pre, in, strlen(pre));
    inOrder(t);
    cout << endl;
  }
  return 0;
}