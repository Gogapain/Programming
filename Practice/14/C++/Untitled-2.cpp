#include <iostream>
using namespace std;
 
int main()
{
  long long  n,p=1,count=1;
    cout<<("Введите числоу")<< "\n";
    cin>>n;
    if(n==0)cout<<0;
    else
     {
       while((p*=2)<=n)
       count++;
       cout<<count;
     }
 
    return 0;
}