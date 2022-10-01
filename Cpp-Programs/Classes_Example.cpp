#include <iostream>
using namespace std;

class Employee
{
private:
    int Ali, Sajjad, Zaini;

public:
    int Ubaid, Shahzaib;
    void setData(int a1, int b1, int c1);
    void print()
    {
        cout << "This is class, value of Ali " << Ali << endl;
        cout << "This is class, value of Sajjad " << Sajjad << endl;
        cout << "This is class, value of Zaini " << Zaini << endl;
        cout << "This is class, value of Ubaid " << Ubaid << endl;
        cout << "This is class, value of Shahzaib " << Shahzaib << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    Ali = a1;
    Sajjad = b1;
    Zaini = c1;
}

int main()
{
    Employee Abbas;
    Abbas.Ubaid = 4;
    Abbas.Shahzaib = 5;
    Abbas.setData(1, 2, 3);
    Abbas.print();

    return 0;
}