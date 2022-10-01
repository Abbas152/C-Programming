
    #include <iostream>
    
    using namespace std;
 
  int main ( )
{
 double amount,discount,netpayables;
 amount = 0;
 netpayables=0;
 discount = 0 ;
 
cout << "Please enter the amount of the bill ";
cin >> amount;
 

 if ( amount > 5000 )
 {
 
 discount = amount * (15.0/100);
 netpayables = amount - discount;
 cout << "The discount at the rate 15 % is Rupees " << discount << endl;
 cout << "The payable amount is Rupees"<<netpayables;
 }
 else
 {
 
 discount = amount * (10.0 / 100);
 netpayables = amount - discount;
 cout << "The discount at the rate 10 % is Rupees " << discount << endl ;
 cout << "The payable amount is Rupees " <<netpayables;
 }

}
