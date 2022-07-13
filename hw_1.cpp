#include <iostream>
#include <string>

int main()
{
    std::string t = "";
    const int count = 7;
    std::string a[count] = { "Красный", "Оранжевый", "Желтый", "Зеленый", "Голубой", "Синий", "Фиолетовый" };
    setlocale(LC_ALL, "russian");
    for (int i = 0; i < 7; i++) {
        std::cout << a[i] << "\n";
        t += "\t";
        std::cout << t;
    }
    std::cout << "\n\n\n";
    std::cout << "\"\To be or not to be?..\"\ \n\t--Shakespeare";
}