#include<iostream>
using namespace std;
void lijun(int* list,int a) {
	bool c = true;
	do {
		c = false;
		for (int i = 0;i < (a-1);i++) {
			if (list[i] > list[i + 1])
				swap(list[i], list[i + 1]);
			         c = true;
		}

	} while (c);
	for (int i = 0;i < a;i++)
		cout << list[i]<<"\t";
}
int main() {
	int a;
	cin >> a;
	int *list = new int[a];
	for (int i = 0;i < a;i++)
		cin >> list[i];

	lijun(list, a);


	delete []list;
	return 0;
}