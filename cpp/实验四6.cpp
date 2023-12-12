#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    int len = strlen(s);
    int x[100] = {};

    for (int i = 0; i < len; i++) {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
            x[i] = (int)s[i] - 65;
        else if ((int)s[i] >= 97 && (int)s[i] <= 122)
            x[i] = (int)s[i] - 97;
    }

    for (int i = 0; i < 26; i++)
        counts[i] = 0;

    int size = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 26; j++) {
            if (x[i] == j)
                counts[j]++;
        }
    }

    for (int i = 1; i < 26; i++) {
        if (counts[i] != 0)
            cout << char(i + 97) << ":" << counts[i] << "\n";
    }
}

int main() {
    char a[100] = {};
    cin >> a;
    int counts[26] = {};
    count(a, counts);

    return 0;
}
