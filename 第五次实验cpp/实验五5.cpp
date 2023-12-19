#include<iostream>
using namespace std;
class Point {
public:Point() { x = 60; y = 80; };
	int x; int y;
	void setPoint(int i, int j) { x += i; y += j; };
	void display() { cout << "(" << x << "," << y << ")" << endl; };
};
int main() {
	Point P1;
	int a, b;
	cin >> a>>b;
	P1.setPoint(a,b);
	P1.display();


	return 0;
}