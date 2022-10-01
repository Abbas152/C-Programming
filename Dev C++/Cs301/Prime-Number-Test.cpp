#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter A Number to Check Prime Number "<<endl;
    cin>>n;

    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"This is not a Prime Number"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"This is Prime";
    }
    
    return 0;
}