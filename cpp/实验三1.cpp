#include <iostream>
using namespace std;

int lijun1(int a, int b) {
    for (int i = a; i > 0; i--) {
        if ((a % i == 0) && (b % i == 0)) {
            return i;
        }
    }
}

int lijun2(int a, int b) {
    for (int i = 1; ; i++) {
        if ((i % a == 0) && (i % b == 0)) {
            return i;
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << "最大公约数：" << lijun1(m, n) << endl;
    cout << "最小公倍数：" << lijun2(m, n) << endl;

    return 0;
}
