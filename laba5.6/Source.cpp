// Lab_05_6.cpp
// < Сорочак Станіслав >
// Лабораторна робота № 5.6
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

double f(double a); // прототип

int main()
{
	double x, y;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	double c = (f(3) + f(x + 1.0) + 1) / (1 - f(y + 1) * f(y + 1));

	cout << "c = " << c << endl;

	return 0;
}

double f(const double a) // визначення
{
	return (pow(a, 2) + 1) / (pow(sin(a + 1), 2));
}
