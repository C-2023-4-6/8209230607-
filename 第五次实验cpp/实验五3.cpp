#include<iostream>
using namespace std;
class cuboid {
public:void input() { cin >> length >> weight >> height; };
	  void calculate() { 
		  int v;
		  v = length * weight * height;
		  cout << "�����������Ϊ��" << v << endl;
	  }
private:int length; int weight; int height;
};
int main() {
	cuboid c1;
	c1.input();
	c1.calculate();
	return 0;
}