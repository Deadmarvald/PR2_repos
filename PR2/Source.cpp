//LAB_02.cpp
//��������� ����
// ����������� ������ �2.
//˳��� ��������. 
// ������ 13

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; //������� �������� �1
	double b; //������� ������� �2
	double z1; //��������� ���������� 1
	double z2; //��������� ���������� 2

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	z1 = (sin(a) + cos((2 * b) - a)) / (cos(a) - sin((2 * b) - a));
	z2 = (1 + 2 * sin(b) * cos(b)) / (cos(b) * cos(b) - sin(b) * sin(b));

	cout << endl;
	cout << "z1 = " << z1 << endl; //��������� ���������� ���������� 1 
	cout << "z2 = " << z2 << endl; //��������� ���������� ���������� 2

	cin.get();
	return 0;
}