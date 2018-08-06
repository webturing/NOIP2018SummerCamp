#include<iostream>
#include<cmath>

using namespace std;

bool primer(int n) {//O(sqrt(n)/2)
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int flag = 1;
    int m = sqrt(n);
    for (int c = 3; c <= m; c += 2) {
        if (n % c == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int n = 1000000007;

    if (primer(n))
        cout << "It is a primer." << endl;
    else
        cout << "It is a compositor" << endl;
    return 0;
}
