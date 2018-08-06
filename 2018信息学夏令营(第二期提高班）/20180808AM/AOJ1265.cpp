#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define MaxSize 100
typedef char ElemType;
typedef struct BiNode {
  ElemType data;
  struct BiNode *Lchild, *Rchild;
} BiNode, *BiTree;  ///二叉树的链式存储结构

int Search_Num(ElemType Num, ElemType *Str, int len) {
  for (int i = 0; i < len; ++i)
    if (Str[i] == Num) return i;
}  ///查找一个元素在数组中的位置

void PostOrderTraverse(BiTree T) {
  if (T != NULL) {
    PostOrderTraverse(T->Lchild);
    PostOrderTraverse(T->Rchild);
    cout << T->data;
  }
}  ///二叉树的后序遍历

BiTree Resume_BiTree(ElemType *Pre_Order, ElemType *In_Order, int len) {
  if (len <= 0) return NULL;
  BiTree temp = new BiNode;
  temp->data = *Pre_Order;
  int index = Search_Num(*Pre_Order, In_Order, len);
  temp->Lchild = Resume_BiTree(Pre_Order + 1, In_Order, index);
  temp->Rchild = Resume_BiTree(Pre_Order + index + 1, In_Order + index + 1,
                               len - index - 1);
  return temp;
}  ///已知先序遍历和中序遍历还原二叉树

int main() {
  ElemType *Pre_Order = new ElemType[MaxSize];
  ElemType *In_Order = new ElemType[MaxSize];
  while (cin >> Pre_Order >> In_Order) {
    BiTree Tree = Resume_BiTree(Pre_Order, In_Order, strlen(In_Order));
        PostOrderTraverse(Tree);
        cout<<endl;
    }
    return 0;
}