#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int found = 0;
    int search_value;
    cout << "Enter Number to Search ";
    cin >> search_value;
    for (int i = 0; i <= sizeof(a); i++)
    {
        if (search_value == a[i])
        {
            cout<<"value is found "<<search_value;
            found++;
            break;
        }
        if(found == 0)
        {
             cout<<"value is not found...";
             break;
        }
    }
}