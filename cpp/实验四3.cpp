#include<iostream>
using namespace std;
int main() {
	bool lijun[100] = {};
	for (int i = 0;i <= 99;i++)
		lijun[i] = 0;
	for (int i=1;i <= 100;i++) {
		for (int j = i; j <= 100;j += i)
			lijun[j] = !lijun[j];
	}
	for (int i = 0;i <= 99;i++)
		cout << lijun[i] << "\t";
	return 0;
}