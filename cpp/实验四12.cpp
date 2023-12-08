#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int a = strlen(hexString);
	int b[100] = {};
	int c=0;
	for (int i = 0;i < a;i++) {
		if (hexString[i] == 'A')
			b[i] = 10;
		if (hexString[i] == 'B')
			b[i] = 11;
		if (hexString[i] == 'C')
			b[i] = 12;
		if (hexString[i] == 'D')
			b[i] = 13;
		if (hexString[i] == 'E')
			b[i] = 14;
		if (hexString[i] == 'F')
			b[i] = 15;
	}
	for (int i = 0;i < a;i++) {
		int d = 1;
		for (int j = 0;j < i;j++) {
			d *= 16;
		}
		c += b[i] * d;
	}

	return 0;
}
int main() {
	char s [100] = {};
	cin >> s;
	parseHex(s);



	return 0;
}