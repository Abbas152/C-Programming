
    #include <iostream>
    using namespace std;
    
     int main()
{
     int age1, age2, age3, age4, age5;
     int TotalAge, AverageAge; 
     

     
     cout << "Please enter the age of student 1:"; 
     cin >> age1;
     
     cout << "Please enter the age of student 2:";
     cin >> age2;
     
     cout << "Please enter the age of student 3:";
     cin >> age3;
     
     cout << "Please enter the age of student 4:";
     cin >> age4;
     
     cout << "Please enter the age of student 5:";
     cin >> age5;
     TotalAge=age1+age2+age3+age4+age5;
     
     AverageAge = TotalAge / 10;
     
     cout<<"The Average Age of the Class:"
     <<AverageAge;

 
 }
