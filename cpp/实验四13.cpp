#include <iostream>
using namespace std;

void lijun(int* arr, int size) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}
int main() {
    int size;
    cout << "请输入数组大小：";
    cin >> size;
    int* arr = new int[size];
    cout << "请输入数组元素：" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    lijun(arr, size);
    cout << "排序后的数组内容：" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << "\t"; 
    }
    cout << endl;
    delete[] arr;
    return 0;
}
