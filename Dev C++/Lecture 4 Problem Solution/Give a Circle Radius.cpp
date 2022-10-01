//Write a program that takes radius of a circle from the user and calculates the diameter,
//circumference and area of the circle and display the result.
//diameter = 2 r
//circumference = 2 pi r
// area = pi r*r 
//pi value is = (3.14)
#include <iostream>
using namespace std;
int main()
{
	float radius,diameter,circumference,area;
	
	cout<<"Please Enter the Radius of a Circle ";
	cin>>radius;
	
	cout<<endl;
	
	diameter = 2*radius;
	cout<<"Diameter is = "<<diameter<<'\n';
	
	area = 3.14*(radius*radius);
	cout<<"Area is = "<<area<<'\n';
	
	circumference = 2*3.14*radius;
	cout<<"Circumference is = "<<circumference<<'\n';
	
	
}