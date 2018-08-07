#include <bits/stdc++.h>
using namespace std;
/**
数组栈的实现

*/
struct Stack {
  int MAX_SIZE = 4;               //栈的最大容量可以调整
  int *data = new int[MAX_SIZE];  //栈的存储
  int size = 0;                   //栈的元素容量
  void push(int x) {              //压栈操作
    if (size == MAX_SIZE) {  //扩容操作是动态数据结构实现的关键技术
      MAX_SIZE *= 2;
      int *p = new int[MAX_SIZE];
      for (int i = 0; i < size; i++) p[i] = data[i];
      data = p;
    }
    data[size++] = x;
  }
  void pop() {  //出栈操作
    if (size > 0) {
      --size;
    }
  }
  int top() {  //查询栈顶元素
    if (size > 0) return data[size - 1];
    return -1;
  }
  void disp() {
    for (int i = 0; i < size; i++) cout << data[i] << " ";
    cout << endl;
  }
};
int main() {
  Stack st;
  for (int i = 0; i < 100; i++) {
    st.push(i);
    st.disp();
  }
  for(int i=0;i<100;i++){
  	st.pop();
  	st.disp();
  }
}