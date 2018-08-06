#include<bits/stdc++.h>

using namespace std;

/**
 * 注意数据类型的范围
 * @return
 */
int main() {
    cout << 1 * 1 << endl;
    cout << 11 * 11 << endl;
    cout << 111 * 111 << endl;
    cout << 1111 * 1111 << endl;
    cout << 11111 * 11111 << endl;
    cout << 111111 * 111111 << endl;//overflow bug here
    cout << 1LL * 1111111 * 1111111 << endl;
    cout << 1LL * 11111111 * 11111111 << endl;
    cout << 1LL * 111111111 * 111111111 << endl;
    cout << 1LL * 1111111111 * 1111111111 << endl;
    cout << 1LL * 11111111111 * 11111111111 << endl;//overflow bug here
    return 0;
}