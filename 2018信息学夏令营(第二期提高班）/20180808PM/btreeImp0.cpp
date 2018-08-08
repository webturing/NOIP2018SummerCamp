#include <bits/stdc++.h>
using namespace std;

struct BTree {
  int a[16];
  BTree() {
    for (int i = 0; i < 16; i++) a[i] = i * 10;
  }
  int getLeft(int i) {
    if (i < 8)
      return i << 1;
    else
      return -1;
  }
  int getRight(int i) {
    if (i < 8) return (i << 1) + 1;
    return -1;
  }
  void preVisit(int i) {
    cout << a[i] << " ";
    int left = getLeft(i);
    int right = getRight(i);
    if (left != -1) preVisit(left);
    if (right != -1) preVisit(right);
  }
  void midVist(int i) {

    int left = getLeft(i);
    int right = getRight(i);
    if (left != -1) midVist(left);
    cout << a[i] << " ";
    if (right != -1) midVist(right);
  }
  void postVist(int i) {
    int left = getLeft(i);
    int right = getRight(i);
    if (left != -1) postVist(left);
    if (right != -1) postVist(right);
    cout << a[i] << " ";
  }
};
int main() {
  BTree bt;
  bt.preVisit(1);
  cout << endl;
  bt.midVist(1);
  cout << endl;
  bt.postVist(1);
  cout << endl;
  return 0;
}

