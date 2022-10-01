#include <iostream>
using namespace std;

int main()
{
	
int counter,number,MaxMultiplier;

cout<<"Please Enter the number for which you want a table";
cin>>number;

cout<<"Please Enter the Multiplier Up to which you want a table";
cin>>MaxMultiplier;

for(counter=1; counter <= MaxMultiplier; counter = counter+1)
{
	cout<<number<<" x " << counter <<" = "<< number * counter <<"\n"; 
}
}