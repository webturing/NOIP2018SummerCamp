#include <iostream>
using namespace std;
//用素数筛法求1到1000000之间的素数
const int M = 1000000;
bool isprime[M + 1];
int main(void) {
  isprime[0] = isprime[1] = false;
  for (int i = 2; i <= M; i++) isprime[i] = true;  //数组初始化
  for (int i = 2; i * i <= M; ++i)
    if (isprime[i] == true)
      for (int j = i * i; j <= M; j += i) isprime[j] = false;  //核心程序

  int n;
  cin >> n;
  int sum = 0;
  if (n >= 3) ++sum;
  for (int i = 3; i + 2 <= n; i += 2)
    if (isprime[i] && isprime[i + 2]) ++sum;
  cout << sum << endl;
  return 0;
}

/**************************************************************
    Problem: 1231
    User: webturing
    Language: C++
    Result: 正确
    Time:20 ms
    Memory:2688 kb
****************************************************************/