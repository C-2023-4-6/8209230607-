#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int b = -1;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i++) {
        int a = 0;
        for (int j = 0; j < len1; j++) {
            if (s1[ j] != s2[j+i]) {
                a = -1;
                break;
            }
        }
        if (a == 0) {
            b = i;
            break;
        }
    }
    return b;
}

int main() {
    char char1[] = "welcome";
    char char2[] = "We welcome you!";
    char char3[] = "We invite you!";

    cout << indexOf(char1, char2) << "\n";
    cout << indexOf(char1, char3) << "\n";

    return 0;
}