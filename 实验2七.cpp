#include<iostream>
#include<string>
using namespace std;
int main() {
	int i = 0, j;
	for (i;i < 5; i++) {
		for (j = 0;j <= i;j++) {
			cout << "*";
		}
		cout << "\n";
	
	}
	return 0;
}