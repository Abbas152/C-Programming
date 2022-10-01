# include <iostream>
using namespace std;
int main()

{ 
 //declare & initializ
int tryNum = 0 ; 
 char c ; 
 // do-while construct, prompt the user to guess a number and compares it 
 do 
{ 
 cout << "Please enter a character between a-z for guessing:";
 cin >> c ; 
//check the entered character for equality 
if ( c == 'z') 
{ 
 cout << "Congratulations, Your guess is correct";
} 
else 
{
 tryNum = tryNum + 1; 
} 
}

while ( tryNum <= 5 && c!='z');

{
	cout<<"Sorry Your Answer is Wrong.";
}
}