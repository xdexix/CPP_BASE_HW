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
//	std::cout << "// ** - возведение в степень\n";
//	std::cout << "a ** b = " << pow (a, b) << "\n";
//	std::cout << "// нахождение корней квадратного уравнени€ a*x**2 + b*x + c" << "\n";
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

	std::cout << "¬ведите сумму кредита: ";
	std::cin >> sum;
	std::cout << "¬ведите срок кредита (в мес€цах): ";
	std::cin >> term;
	std::cout << "¬ведите процентную ставку: ";
	std::cin >> per;

	m1 = sum / term * (per / 100); // проценты за мес€ц
	m = sum / term + m1; // за мес€ц
	std::cout << "\n¬ы заплатите за мес€ц всего: " << m;
	std::cout << "\n¬ы заплатите за мес€ц процентов: " << m1;
	std::cout << "\n¬ы заплатите всего за все врем€: " << m * term;
	std::cout << "\n¬ы переплатите всего за все врем€: " << m1 * term << "\n";

	return 0;
}