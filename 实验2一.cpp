#include<iostream>
using namespace std;
int main() {
	char zifu;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	cin >> zifu;
	int a = (int)zifu;
	if (97 <= a && a <= 122)
	{
		a -= 32;
		cout << char(a);
	}
	else if (65 <= a && a <= 90)
	{
		cout << (a + 1);
	}
	return 0;
}