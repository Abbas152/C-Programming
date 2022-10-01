#include <iostream>
using namespace std;

float moneyRecieved(int currentmoney, float interest=1.04) // <---- Default Arguments
{
    return currentmoney*interest;
}

// int strlen(const char *p)
// {
//   This is a Constant Arguments
// }

int main()
{
    int money;
    cout<<"Please Enter your Money in Number form: "<<endl;
    cin>>money;

    cout<<"If You have "<<money<<" Rs then you will recieve "<<moneyRecieved(money)<<" After 1 Year. "<<endl;
    cout<<"For VIPs: If You have "<<money<<" Rs then you will recieve "<<moneyRecieved(money, 1.1)<<" After 1 Year. "<<endl;

    return 0;
}
