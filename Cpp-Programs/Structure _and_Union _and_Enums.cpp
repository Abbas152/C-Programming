#include <iostream>
using namespace std;

// typedef struct employee  //<------Structure Start
// {
//     char favspell;
//     int age;
//     float salary;
// } ep;

// union employee           //<------Union Start
// {
//     char favspell;
//     int age;
//     float salary;
// };

int main()
{
    // Structure <-----

    // ep abbas;
    // abbas.favspell = 'A';
    // abbas.age = 23;
    // abbas.salary = 80000000;
    // cout<<"The Favourite Spell of Employee Abbas is: "<<abbas.favspell<<endl;
    // cout<<"The age of Employee Abbas is: "<<abbas.age<<endl;
    // cout<<"The salary of Employee Abbas is: "<<abbas.salary<<endl;

    // Union <-----
    /* A union is a user-defined type in which all members share the same memory location.
    This definition means that at any given time,
    a union can contain no more than one object from its list of members.*/

    // union employee abbas;
    // abbas.favspell = 'A';
    // // abbas.age = 23;
    // // abbas.salary = 8000000;
    // cout<<"The Favourit Spell of Abbas is: "<<abbas.favspell;

    // Enum <-----
    /*In C++ programming, enum or enumeration is a data type consisting of
      named values like elements, members, etc., that represent integral constants.
      It provides a way to define and group integral constants.*/

    enum Meal{breakfast, lunch, dinner};
        
    Meal m1 = lunch;
    cout << m1;

    return 0;
}