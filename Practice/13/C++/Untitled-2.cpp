#include <iostream>
using namespace std;
int main () {
setlocale (0, "");
int n, m;
cout << "Введите числоу: ";
cin >> n;
if (n % 2 == 0 && n / 2 != 0 )
cout << "Составное числоу \n";
else
    cout << "  Простое числоу \n" << endl;
}