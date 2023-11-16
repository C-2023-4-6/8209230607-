#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "请输入华式温度:";
	cin >> a;
	b = (a - 32)*5/9;
	cout << fixed << setprecision(2)<<"摄氏温度：" << b << endl;
	return 0;
}
