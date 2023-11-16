#include <iostream>
using namespace std;
int main() {
    char A;
    float a, b;
    cout << "请输入数字：" << endl;
    cin >> a;
    cout << "请输入：+、-、*、/、%：" << endl;
    cin >> A;
    cout << "请输入数字：" << endl;
    cin >> b;
    switch (A) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;

    case '/':
        if (b == 0) {
            cout << "除数为零" << endl;
        }
        else {
            cout << a << " / " << b << " = " << a / b;
        }
        break;

    case '%':
        if (b == 0) {
            cout << "除数为零" << endl;
        }
        else {
            cout << a << " % " << b << " = " << int(a)%int(b);
        }
        break;
    default:
        cout << "运算符无效" << endl;
        break;
    }
    system("pause");
    return 0;
}