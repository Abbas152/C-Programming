#include <iostream>
using namespace std;

// *******************************************
// Single Inheritance
// *******************************************

class A
{
public:
    void Afunc()
    {
        cout << "Inherite From Class A " << endl;
    }
};
// ******************************************************************
class B : public A // B is a Child and A is a Parent Class.
{
public:
    void Bfunc()
    {
        cout << "Inherite From Class B " << endl;
    }
};

// *******************************************
// Multiple Inheritance
// *******************************************

class C // Class C is a Parent
{
public:
    void Cfunc()
    {
        cout << "Inherite From Class C " << endl;
    }
};
// ******************************************************************

class D // Class D is a Parent
{
public:
    void Dfunc()
    {
        cout << "Inherite From Class D " << endl;
    }
};
// ******************************************************************

class E : public C, public D // E is a Child and C, D is a Parent Class.
{
public:
    void Efunc()
    {
        cout << "Inherite From Class E " << endl;
    }
};

// *******************************************
// Multi-level Inheritance
// *******************************************

class F // Class F is a Parent
{
public:
    void Ffunc()
    {
        cout << "Inherite Through Class G From Class F " << endl;
    }
};
// ******************************************************************

class G : public F // Class G is a Parent
{
public:
    void Gfunc()
    {
        cout << "Inherite From Class G " << endl;
    }
};
// ******************************************************************

class H : public G // H is a Child and G is a Parent Class.
{
public:
    void Hfunc()
    {
        cout << "\nMulti-Level Inheritance \n";
        cout << "Inherite From Class H " << endl;
    }
};

int main()
{
    B b; // B is a Class and 'b' is a Object of Class B
    cout << "\nSingle Inheritance \n";
    b.Bfunc();
    b.Afunc();

    E e; // E is a Class and 'e' is a Object of Class E
    cout << "\nMultiple Inheritance \n";

    e.Efunc();
    e.Cfunc();
    e.Dfunc();

    H h; // H is a Class and 'h' is a Object of Class H
    h.Hfunc();
    h.Gfunc();
    h.Ffunc();
}