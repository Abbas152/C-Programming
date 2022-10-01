/* A sample program with the Date class. Set methods are given to set the day, month 
and year.The date is also diplayed on the screen using member function. */ 
#include <iostream>
using namespace std;

// defining the Date class 
class Date
{ 

 // interface of the class 
 public: 
 void display(); // to display the date on the screen 
 void setDay(int i); // setting the day 
 void setMonth(int i); // setting the month 
 void setYear(int i); // setting the year 


 // hidden part of the class 
 private: 
 int day, month, year; 

}; 

// The display function of the class date 
void Date::display() 
{ 
cout << "The date is " << day << "-" << month << "-" << year << endl; 
} 
// setting the value of the day 
void Date::setDay(int i) 
{ 
day = i; 
} 
// setting the value of the month 
void Date::setMonth(int i) 
{ 
month = i; 
} 
// setting the value of the year 
void Date::setYear(int i) 
{ 
 year = i; 
} 

/* Main program. We will take two date objects, set day, month, year and display the 
date.*/

int main() 
{ 
 Date date1,date2; // taking objects of Date class 
 
 // setting the values and displaying 
 date1.setDay(1); 
 date1.setMonth(1); 
 date1.setYear(2000); 
 date1.display(); 
 
 // setting the values and displaying 
 date1.setDay(10); 
 date1.setMonth(12); 
 date1.setYear(2002); 
 date1.display(); 
}