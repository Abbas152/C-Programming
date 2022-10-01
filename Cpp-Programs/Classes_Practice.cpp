#include <iostream>
using namespace std;

class Y;

class X
{
private:
    int Data;
    friend void AddNum(X , Y);

public:
    void setValue(int a)
    {
        Data = a;
    }
    // int getData(int)
    // {
    //     cout << "The value of Data is " << data;
    // }
};

class Y
{
private:
    int Sata;
    friend void AddNum(X , Y);

public:
    void setNum(int b)
    {
        Sata = b;
    }
    // int getGata(int)
    // {
    //     cout << "The value of Data is " << Sata;
    // }
};

void AddNum(X o1, Y o2)
{
    cout<<"The Classes Sum is: "<<o1.Data + o2.Sata <<endl;
}

int main()
{
    X c1;
    c1.setValue(3);
    // c1.getGata();
    
    Y c2;
    c2.setNum(5);
    // c2.getGata();

    AddNum(c1,c2);

    return 0;
}