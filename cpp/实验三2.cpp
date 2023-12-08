#include<iostream>
using namespace std;
bool is_prime(int num) {
	int i = 1,x=0,y;
	for (i;i < num;i++) {
		if ((num % i) == 0)
			x += 1;
		if (x == 1)
			y = 1;
		else
			y = 0;
	}
		return y;
}
int main() {
	int a = 0;
	for (int i=2;;i++) {
		if ((is_prime(i)) == 1) {
			a ++;
			cout << i << "\t";
		}
		if (a % 10 == 0) {
			cout << endl;
		}
		if (a == 200)
			break;
	}


	return 0;
}