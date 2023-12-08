#include<iostream>
using namespace std;
int main() {
	int lijun[10] = {};
	for (int i = 0;i <= 9;i++)
		cin >> lijun[i];
	int a[10] = {};
	int b = 0;
	for (int i = 0;i <= 9;i++) {
		bool x = 0;
		for (int j = i - 1;j >= 0;j--) {
			if (lijun[j] == lijun[i])
				x = 1;
			break;
		}
			if(!x){
				a[b] = lijun[i];
			b += 1;
		      }
	    
    }
	for (int i = 0;i < b;i++) {
		cout << a[i] << "\t";
	}
	return 0;
}