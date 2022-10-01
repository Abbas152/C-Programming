#include <iostream>
using namespace std;

int factorial(int n)
{
    {
        if (n<=1)
        {
            return 1;
        }
    }
    return  n *factorial(n-1);
}

int main()
{
    int a;
    cout<<"Enter your Number which you want Factorail "<<endl;
    cin>>a;
    cout<<"Your Number is "<<a<<" and your Number Factorail is "<<factorial(a)<<endl;



    return 0;
}