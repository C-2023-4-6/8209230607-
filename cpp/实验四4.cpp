#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0; 
    int j = 0;  
    int k = 0;  
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k] = list1[i];
            i++;
        }
        else {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        list3[k] = list1[i];
        i++;
        k++;
    }
    while (j < size2) {
        list3[k] = list2[j];
        j++;
        k++;
    }
}
int main() {
    const int MAX_SIZE = 80;
    int size1, size2;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];

    cout << "请输入数组1的大小和元素：" << endl;
    cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }
    cout << "请输入数组2的大小和元素：" << endl;
    cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);
    cout << "合并后的数组为：" << endl;
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;
    return 0;
}
