#include<iostream>
using namespace std;
int lijun1(int a, int b) {
	int i = a + b;
	for (i;;i--) {
		if ((a % i) == (b % i) == 0)
			break;
	}
	return i;
}
int lijun2(int a, int b) {
	int i = 0;
	for (i;;i++) {
		if ((i%a) == (i%b) == 0)
			break;
	}
	return i;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << "���Լ����" << lijun1(m, n);
	cout << "��С��������" << lijun2(m, n);


	return 0;
}
