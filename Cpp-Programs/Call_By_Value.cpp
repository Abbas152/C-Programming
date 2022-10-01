#include <iostream>
using namespace std;

void  sum(int);  // Prototype Function

int main()
{
    int i=10;
    cout<<"In main(), the value of i is: "<<i<<endl;
    sum(i);  // Call By Value
    cout<<"Back in main(), the value of i is: "<<i<<endl;



    return 0;
}
void sum(int i)
{
    i *=5;
    cout<<"In sum(), the value of i is: "<<i<<endl;
}