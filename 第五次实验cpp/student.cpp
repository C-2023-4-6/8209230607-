#include <iostream>
using namespace std;
#include"student.h  "        
void Student::display()        
{
    cout << "num£º" << num <<endl;
    cout << "name£º" << name <<endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int a, const char b[20], char c) {
   num = a;
    for (int i = 0; i < 20; i++) { name[i] = b[i]; }
    sex = c;

}