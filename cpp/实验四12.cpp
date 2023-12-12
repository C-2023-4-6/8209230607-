#include <iostream>
#include <cstring>
using namespace std;

int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    for (int i = 0; i < len; i++) {
        int digitValue = 0;
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            digitValue = hexString[i] - '0';
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            digitValue = hexString[i] - 'A' + 10;
        }
        result = result * 16 + digitValue;
    }
    return result;
}

int main() {
    char s[100];
    cout << "请输入十六进制字符串：";
    cin.getline(s, 100);
    int decimalValue = parseHex(s);
    cout << "转换后的十进制值为：" << decimalValue << endl;
    return 0;
}
