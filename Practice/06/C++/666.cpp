
#include <iostream>
#include <math.h>

using namespace std;
int a, b, c, d;
float x1, x2;
int main() {
    std::cout << ("������� ���������� a") << "\n";
    std::cin >> a;
    std::cout << ("������� ���������� b") << "\n";
    std::cin >> b;
    std::cout << ("������� ���������� c") << "\n";
    std::cin >> c;
    d = (b * b) - (4 * (a * c));
    if (d < 0) {
        std::cout << ("��� ������");
    }
    else if (d = 0) {
        x1 = ((-b) + (sqrt(d)) / (2 * a));
        std::cout << ("���� ������") << "\n";
        std::cout << (x1);
    }
    else {
        x1 = ((-b) + (sqrt(d)) / (2 * a));
        x2 = ((-b) - (sqrt(d)) / (2 * a));
        std::cout << (x1);
        std::cout << (x2);
    }

}