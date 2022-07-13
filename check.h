#pragma once
#ifndef CHECK_H
#define CHECK_H

float floatChk(float ch) 
{
	while (std::cin.fail()) 
	{ 
		std::cin.clear(); 
		std::cin.ignore(100, '\n');
		std::cin.sync();
		std::cout << "Некорректное число! Попробуйте еще раз: ";
		std::cin >> ch; 
	}
	return ch;
}

int intChk(int ch)
{
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cin.sync();
		std::cout << "Некорректное число! Попробуйте еще раз: ";
		std::cin >> ch;
	}
	return ch;
}

#endif