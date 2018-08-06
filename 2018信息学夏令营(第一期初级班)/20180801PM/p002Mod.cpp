#include<bits/stdc++.h>

using namespace std;

inline int safe_mod(int a, int b) {
    b = abs(b);
    int c = a % b;
    if (c < 0)c += b;
    return c;
}

int main() {
    cout << 17 % 7 << endl;
    cout << -17 % 7 << endl;//bugs
    cout << safe_mod(17, 7) << endl;
    cout << safe_mod(-17, 7) << endl;
    return 0;
}