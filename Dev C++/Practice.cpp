#include <iostream>
using namespace std;
int main()
{
int sum, i, j;
sum = 0;
i = 1;
j = 1;
 cout<<"My name is Ghullam Abbas Ali \n\n";
 cout<<"My Student ID is BC210202706 \n\n";
 sum=7+0+6;
 cout<<"The sum of last 3 digit is=\n\n"<<sum<<"\n\n";
 
 if (sum%2==0)
 {
 	cout<<"Sum is an even value \n\n";
 	cout<<"+++++++++++++\n\n";
 	while(i<=sum)
 	{
 		cout<<"Iteration:"<<i<<"\n";
 		cout<<"My Student ID is BC210202706\n";
 		i++;
	 }
}
  else
 {
 	cout<<"Sum is an odd value\n\n";
 	cout<<"+++++++++++++\n\n";
 	while(j<=sum)
 	{
 		cout<<"Iteration:"<<j<<"\n";
 		cout<<"My Name is Ghullam Abbas Ali\n";
 		j++;
	}
	}
    
    return 0;

}