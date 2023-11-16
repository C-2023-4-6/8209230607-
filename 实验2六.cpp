#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int i = 1, j = a*b,c,d;
	for (i;i<=a&&i<=b;i++) {
		if ((a % i) == 0&&(b % i)==0) {
		 c = i;
		}
	}
	for (j;j >= a && j >= b;j--) {
		if ((j % a) ==0&& (j % b)==0) {
			d = j;
		}
		
	}
	cout << "最大公约数为：" << c;
	cout << "最小公倍数为：" << d;
	system("pause");
	return 0;
}
