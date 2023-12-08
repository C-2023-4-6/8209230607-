#include<iostream>
#include<iomanip>
using namespace std;

double celsius_to_fah(double cel) {
	double a;
	a = cel * (1.8) + 32;
	return a;
}
double fahrenheit_to_cels(double fah) {
	double a;
	a = (fah - 32) / (1.8);
	return a;
}
int main() {
	cout << "Celsius" << "\t" << "Fahrenheit" << "|" << "Fahrenheit" << "\t" << "Celsius" << "\n";
	double a = 40.0, b = 120.0;
	for (int i = 1;i <= 10;i++) {
		cout << a << "\t" << celsius_to_fah(a) << "\t" << "|" << b << "\t" <<fixed<<setprecision(2)<< fahrenheit_to_cels(b) << "\n";
		a += 1;
		b -= 10;
	}
	return 0;
}