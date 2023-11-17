#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    int a = 0,b=0,c=0,d=0;
    cout << "请输入一行字符：" << endl;
    cin >> str;
    int i = 0;
    while ((str[i] = getchar()) != '\n') {
        if ((str[i] >= 97 && str[i] <=122)||(str[i]>=65&&str[i]<=90)){
            a++;
        }
        else if (str[i] == 32 ){
           b++;
        }
        else if (str[i]>=48&&str[i]<=57){
           c++;
        }
        else {
            d++;
        }
    }
    cout << "英文字母：" << a << endl;
    cout << "空格：" << b<< endl;
    cout << "数字：" << c << endl;
    cout << "其它：" << d<< endl;
    return 0;
}
