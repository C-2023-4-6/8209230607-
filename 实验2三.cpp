#include<iostream>
using namespace std;
int main() {
	double x, y, z;
	cin >> x >> y >> z;
if ((x + y) > z && (x - y) < z)
 {
		cout << "三角形的周长为：" << x + y + z << endl;
		if (x == y || x == z || y ==z) {
			cout << "是等腰三角形" << endl;
		}
		else {
			cout << "不是等腰三角形" << endl;
		}
	}

return 0;
}