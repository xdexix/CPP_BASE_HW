#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <cmath>


int main()

//task 1

//{
//	int a, b, c;
//	double d, x1, x2;
//
//	setlocale(LC_ALL, "russian");
//
//	a = 117;
//	b = 91;
//	c = -54;
//
//	std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n\n";
//
//	std::cout << "a + b = " << a + b << "\n";
//	std::cout << "a + c = " << a + c << "\n";
//	std::cout << "a - b = " << a - b << "\n";
//	std::cout << "a - c = " << a - c << "\n";
//	std::cout << "a * b = " << a * b << "\n";
//	std::cout << "a * c = " << a * c << "\n";
//	std::cout << "a / b = " << a / (float)b << "\n";
//	std::cout << "a / c = " << a / (float)c << "\n";
//	std::cout << "// ** - ���������� � �������\n";
//	std::cout << "a ** b = " << pow (a, b) << "\n";
//	std::cout << "// ���������� ������ ����������� ��������� a*x**2 + b*x + c" << "\n";
//	d = pow(b, 2) - (4 * a * c);
//	x1 = ((float)-b + sqrt(d)) / (2 * a);
//	x2 = ((float)-b - sqrt(d)) / (2 * a);
//	std::cout << "D = " << d << ", x1 = " << x1 << ", x2 = " << x2 << "\n";
//	return 0;
//}

//task 2

{
	int sum, term;
	float per, m1, m;

	setlocale(LC_ALL, "russian");

	std::cout << "������� ����� �������: ";
	std::cin >> sum;
	std::cout << "������� ���� ������� (� �������): ";
	std::cin >> term;
	std::cout << "������� ���������� ������: ";
	std::cin >> per;

	m1 = sum / term * (per / 100); // �������� �� �����
	m = sum / term + m1; // �� �����
	std::cout << "\n�� ��������� �� ����� �����: " << m;
	std::cout << "\n�� ��������� �� ����� ���������: " << m1;
	std::cout << "\n�� ��������� ����� �� ��� �����: " << m * term;
	std::cout << "\n�� ����������� ����� �� ��� �����: " << m1 * term << "\n";

	return 0;
}