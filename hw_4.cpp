// ��������� 112��, ��3. � ������ ����� ���� .h, ������� ���� ���� ���������� 

#include <iostream>
#include <time.h>
#include <Windows.h>
#include "check.h"

using std::cout;
using std::cin;

// ----------------------------------------------- //
//task 1 ������ � ������ �������
// ----------------------------------------------- //

int main()
{
    setlocale(LC_ALL, "Russian");

    float s, v, a;
    cout << "������� ����� ���������� ����: ";
    cin >> v; v = floatChk(v);
    cout << "������� ������ �� 100 ����������: ";
    cin >> a; a = floatChk(a);
    s = v / a * 100;
    cout << "\n����������, ������� ����� �������� ���������� �� 1 ��������: " << s << "\n\n\n";
    system("pause");

    return 0;
}



// ----------------------------------------------- //
//task 2_1 ������� � �������
// ----------------------------------------------- //

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int sec, min, ho, day, year;
//	cout << "--- ������� ������ � �������� ��������� � �������� ---\n\n";
//	cout << "������� ���������� ������: "; cin >> sec; sec = intChk(sec);
//	cout << "������� ���������� �����: "; cin >> min; min = intChk(min);
//	cout << "������� ���������� �����: "; cin >> ho; ho = intChk(ho);
//	cout << "������� ���������� ����: "; cin >> day; day = intChk(day);
//	cout << "������� ���������� ���: "; cin >> year; year = intChk(year);
//	day = day + (year * 365);
//	ho = ho + (day * 24);
//	min = min + (ho * 60);
//	sec = sec + (min * 60);
//	cout << "\n���� ����� � ��������: " << sec << "\n\n\n";
//  system("pause");
//
//	return 0;
//}



// ----------------------------------------------- //
//task 2_2 ������� ������
// ----------------------------------------------- //

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    int sec, min, ho, day, year;
//    cout << "--- ������� ������� � �������� ��������� � ��������� ����� ---\n\n";
//    cout << "������� ����� � ��������: "; cin >> sec; sec = intChk(sec);
//    min = sec / 60;
//    ho = min / 60;
//    day = ho / 24;
//    year = day / 365;
//    sec %= 60;
//    min %= 60;
//    ho %= 24;
//    day %= 365;
//    cout << "���� �����:\n" << year << " ���, " << day << " ����, " << ho <<
//        " �����, " << min << " �����, " << sec << " ������" << "\n\n\n";
//    system("pause");
//
//    return 0;
//}



// ----------------------------------------------- //
//task 3 ��������� �����
// ----------------------------------------------- //

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    cout << "--- ��������� ����� �� -40 �� 40 (100 ����) ---\n\n";
//    srand(time(NULL));
//    for (int i = 0; i < 100; i++)
//        cout << rand() % 79 - 40 << "  ";
//    cout << "\n\n\n";
//    system("pause");
// 
//    return 0;
//}