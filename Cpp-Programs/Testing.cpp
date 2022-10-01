#include <iostream>
using namespace std;

class X
{
private:
    int a, b;

public:
    X();
    void printNum()
    {
        cout<<"The value of a "<<a<<" and b is "<<b<<endl;
    }
};

X::X()
{
    a = 5;
    b = 6;
}

int main()
{
    X c1, c2;
    c1.printNum();
    c2.printNum();

        return 0;
}