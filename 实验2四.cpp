#include <iostream>
using namespace std;
int main() {
    char A;
    float a, b;
    cout << "���������֣�" << endl;
    cin >> a;
    cout << "�����룺+��-��*��/��%��" << endl;
    cin >> A;
    cout << "���������֣�" << endl;
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
            cout << "����Ϊ��" << endl;
        }
        else {
            cout << a << " / " << b << " = " << a / b;
        }
        break;

    case '%':
        if (b == 0) {
            cout << "����Ϊ��" << endl;
        }
        else {
            cout << a << " % " << b << " = " << int(a)%int(b);
        }
        break;
    default:
        cout << "�������Ч" << endl;
        break;
    }
    system("pause");
    return 0;
}