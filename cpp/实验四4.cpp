#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0;i < size1;i++)
		list3[i] = list1[i];
	for (int i = size1;i < size1+size2;i++)
		list3[i] = list1[i-size1];
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list3[j] > list3[j + 1])
			{
				swap(list3[j], list3[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main() {
	int list1[80] = {};
	int list2[80] = {};
	int list3[160] = {};
	int a, b;
	cout << "list1的数字个数：";
	cin >> a;
	for (int i = 0;i < a;i++)
		cin >> list1[i];
	cout << "list2的数字个数：";
	cin >> b;
	for (int i = 0;i < b;i++)
		cin >> list2[i];
	merge(list1, a, list2, b,list3);
	return 0;
}