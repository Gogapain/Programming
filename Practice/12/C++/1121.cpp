#include <iostream>
using namespace std;
long double fact(int N)
{
    if(N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1);
}
int main() {
    std::cout<<"Введите числоу"<<endl;
    int x;
    std::cin>>x;
    std::cout<<"Получите числоу"<<x<<" : "<<fact(x)<<endl;
    return 0;
}