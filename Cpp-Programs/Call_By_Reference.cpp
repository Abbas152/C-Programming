#include <iostream>
using namespace std;

void swapPointer(int *a, int *b) // Swapping Numbers Using Pointer
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cout << "Please Enter a Number 1 " << endl;
    cin >> x;

    cout << "Please Enter a Number 2 " << endl;
    cin >> y;

    cout << "Your Entered Number 1 is: " << x <<"\n"<< "Your Entered Number 2 is: " << y << endl;

    swapPointer(&x, &y); // Call by Referance &
    cout << "Your Swapped Number 1 is: " << x <<"\n"<< "Your Swapped Number 2 is: " << y << endl;

    return 0;
}