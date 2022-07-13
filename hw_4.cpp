// Степанова 112БВ, дз№3. В архиве лежит файл .h, который тоже надо подключить 

#include <iostream>
#include <time.h>
#include <Windows.h>
#include "check.h"

using std::cout;
using std::cin;

// ----------------------------------------------- //
//task 1 машина и расход топлива
// ----------------------------------------------- //

int main()
{
    setlocale(LC_ALL, "Russian");

    float s, v, a;
    cout << "Введите объем топливного бака: ";
    cin >> v; v = floatChk(v);
    cout << "Введите расход на 100 километров: ";
    cin >> a; a = floatChk(a);
    s = v / a * 100;
    cout << "\nРасстояние, которое может проехать автомобиль на 1 заправке: " << s << "\n\n\n";
    system("pause");

    return 0;
}



// ----------------------------------------------- //
//task 2_1 перевод в секунды
// ----------------------------------------------- //

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int sec, min, ho, day, year;
//	cout << "--- Введите данные и получите результат в секундах ---\n\n";
//	cout << "Введите количество секунд: "; cin >> sec; sec = intChk(sec);
//	cout << "Введите количество минут: "; cin >> min; min = intChk(min);
//	cout << "Введите количество часов: "; cin >> ho; ho = intChk(ho);
//	cout << "Введите количество дней: "; cin >> day; day = intChk(day);
//	cout << "Введите количество лет: "; cin >> year; year = intChk(year);
//	day = day + (year * 365);
//	ho = ho + (day * 24);
//	min = min + (ho * 60);
//	sec = sec + (min * 60);
//	cout << "\nВаше время в секундах: " << sec << "\n\n\n";
//  system("pause");
//
//	return 0;
//}



// ----------------------------------------------- //
//task 2_2 перевод секунд
// ----------------------------------------------- //

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    int sec, min, ho, day, year;
//    cout << "--- Введите секунды и получите результат в остальных мерах ---\n\n";
//    cout << "введите время в секундах: "; cin >> sec; sec = intChk(sec);
//    min = sec / 60;
//    ho = min / 60;
//    day = ho / 24;
//    year = day / 365;
//    sec %= 60;
//    min %= 60;
//    ho %= 24;
//    day %= 365;
//    cout << "ваше время:\n" << year << " лет, " << day << " дней, " << ho <<
//        " часов, " << min << " минут, " << sec << " секунд" << "\n\n\n";
//    system("pause");
//
//    return 0;
//}



// ----------------------------------------------- //
//task 3 рандомные числа
// ----------------------------------------------- //

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    cout << "--- Случайные числа от -40 до 40 (100 штук) ---\n\n";
//    srand(time(NULL));
//    for (int i = 0; i < 100; i++)
//        cout << rand() % 79 - 40 << "  ";
//    cout << "\n\n\n";
//    system("pause");
// 
//    return 0;
//}