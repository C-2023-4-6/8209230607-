#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int index = -1; 
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);
    for (int i = 0; i <= s2Len - s1Len; i++) {
        bool found = true;
        for (int j = 0; j < s1Len; j++) {
            if (s1[j] != s2[i + j]) {
                found = false;
                break;
            }
        }
        if (found) {
            index = i;
            break;
        }
    }

    return index;
}
int main() {
    char s1[100];
    char s2[100];
    cout << "请输入字符串s1：";
    cin.getline(s1, 100);
    cout << "请输入字符串s2：";
    cin.getline(s2, 100);
    int result = indexof(s1, s2);
    if (result == -1) {
        cout << "s1不是s2的子串" <<"-1" << endl;
    }
    else {
        cout << "s1是s2的子串，第一次匹配的下标为：" << result << endl;
    }

    return 0;
}
