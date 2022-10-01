//Write a program that takes a four digits integer 
//from user and shows the digits on the screen separately 
//i.e. if user enters 7531, it displays 1, 3, 5, 7 separately
#include <iostream>
using namespace std;
int main()
{
	int number,digit;
	
	cout<<"Please Enter the four digits ";
	cin>>number;
	
	digit=number%10;
	cout<<digit<<",";
	
	number=number/10;
	digit=number%10;
	cout<<digit<<",";
	
	number=number/10;
	digit=number%10;
	cout<<digit<<",";

	number=number/10;
	digit=number%10;
	cout<<digit<<",";
	
	
}