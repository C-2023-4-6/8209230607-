#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int i = 0;  
    int j = 0;  
    while (s2[j] != '\0') {
        if (s1[i] == s2[j]) {  
            i++;
            j++;
            if (s1[i] == '\0') {  
                return j - i;
            }
        }
        else {
            i = 0;  
            j++;
        }
    }
    return -1; 
}
int main() {
    const int MAX_SIZE = 100;
    char s1[MAX_SIZE];
    char s2[MAX_SIZE];
    cout << "请输入字符串 s1：" << endl;
    cin.getline(s1, MAX_SIZE);
    cout << "请输入字符串 s2：" << endl;
    cin.getline(s2, MAX_SIZE);
    int index = indexOf(s1, s2);
    if (index != -1) {
        cout << "s1 是 s2 的子串，起始下标为 " << index << endl;
    }
    else {
        cout << "s1 不是 s2 的子串" << endl;
    }
    return 0;
}
