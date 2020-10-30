#include <iostream>
#include <ctime>
 
using namespace std;
 
int main(){
    setlocale(0, "rus");
    srand(time(NULL));
 
    int x = rand() % 101;
    int find;
 
    for (int i(0); i < 5; i++) {
        cout << "Отгадайте число: ";
        cin >> find;
        if (find == x) {
            cout << "\nВы угадали!" << endl;
            break;
        }
        else if (find < x) cout << "\nЗагаданное число больше!" << endl;
        else if (find > x) cout << "\nЗагаданное число меньше!" << endl;
 

        if (i == 4) cout << "\nУвы, Ваши попытки закончились"<< endl;
    }
    
    return 0;
}