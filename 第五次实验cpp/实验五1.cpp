#include<iostream>
using namespace std;
class Time{
public:
	  void input() { cin >> hour >> minute >> sec; }
	  void output() { cout << hour<<":" << minute <<":" << sec; }
private:
		int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	t1.input();
	t1.output();
	return 0;
}