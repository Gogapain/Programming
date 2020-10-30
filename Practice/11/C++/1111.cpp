#include <iostream>
#include <cmath>
int a,b,c;
int main()
{
    std::cout << ("Введите возводимое в степень число") << "\n";
    std::cin >> a;
    std::cout << ("Введите степень числа")<< "\n";
    std::cin >> b;
    std::cout << pow(a,b);
}