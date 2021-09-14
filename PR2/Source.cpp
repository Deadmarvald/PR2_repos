//LAB_02.cpp
//Вольвенко Іван
// Лабораторна робота №2.
//Лінійні програми. 
// Варіант 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; //вхідний параметр №1
	double b; //вхідний парметр №2
	double z1; //результат обчислення 1
	double z2; //результат обчислення 2

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	z1 = (sin(a) + cos((2 * b) - a)) / (cos(a) - sin((2 * b) - a));
	z2 = (1 + 2 * sin(b) * cos(b)) / (cos(b) * cos(b) - sin(b) * sin(b));

	cout << endl;
	cout << "z1 = " << z1 << endl; //виведення результату обчислення 1 
	cout << "z2 = " << z2 << endl; //виведення результату обчислення 2

	cin.get();
	return 0;
}