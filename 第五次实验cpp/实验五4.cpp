#include<iostream>
using namespace std;
class Student {
public:Student(int a, int b) { number = a; score = b; };
int number; int score;
};
void max(Student *p,Student S[]) {

	Student m = S[0];

	for (int i=1; i < 5; i++) {
		m=(m.score > S[i].score) ? m : S[i];
		
	}
	p = &m;
	cout << p->number << endl;

}
int main() {
	Student S1[5] = { Student(1,100),Student(2,98) ,Student(3,140) ,Student(4,1) ,Student(5,80) };
	Student * p = S1;
	max(p, S1);
	return 0;
}