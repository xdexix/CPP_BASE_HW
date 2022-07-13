#pragma once
#ifndef CHECK_H
#define CHECK_H

string strChk(string ch)
{
  transform(ch.begin(), ch.end(), ch.begin(), ::toupper);
  while (ch != "RU" && ch != "EU" && ch != "US")
  {
    cin.clear();
    cin.ignore(100, '\n');
    cin.sync();
    cout << "Некорректное значение! Попробуйте еще раз (RU, EU, US): ";
    cin >> ch;
  }
  return ch;
}

short shortChk (short ch)
{
  while (cin.fail() && ch < 1 && ch > 4)
  {
    cin.clear();
    cin.ignore(100, '\n');
    cin.sync();
    cout << "Некорректное значение! Введите цифру с номером ответа (1-4): ";
    cin >> ch;
  }
return ch;
}

#endif
