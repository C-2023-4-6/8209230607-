#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	int b=0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
    for (int i = 0; i <= (len2 - len1); i++) { 
        for (int j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
                b = -1;
                break;
            }
            b = i;  
        }
        if (b != -1) {  
            return b;
        }
    }
    return -1;
}
int main() {
	char s1[100] = {};
	cin >> s1;
	char s2[100] = {};
	cin >> s2;
	cout<<indexof(s1, s2);

	return 0;
}