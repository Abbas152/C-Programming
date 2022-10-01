#include <iostream>
using namespace std;

int main()
{
    int num, max, counter;
    cout << "Please Enter the Number of Table " << endl;
    cin >> num;

    cout << "Please Enter the Max Number of Table " << endl;
    cin >> max;

    for (counter = 1; counter <= max; counter++)
    {
        cout << num << " x " << counter << " = "<<num * counter<<endl;
    }
}