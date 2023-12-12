#include <iostream>
using namespace std;

int main() {
    int lijun[10] = {};
    for (int i = 0; i <= 9; i++) {
        cin >> lijun[i];
    }
    
    for (int i = 0; i < 10; i++) {
        bool isDuplicate = false;
        for (int j = i - 1; j >= 0; j--) {
            if (lijun[j] == lijun[i]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << lijun[i] << "\t";
        }
    }
    
    return 0;
}
