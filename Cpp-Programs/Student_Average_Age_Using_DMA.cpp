#include <iostream>
using namespace std;

int main()
{
    int NumStd, TotalAge, i, *iptr, *sptr;

    cout << "How many Students in Class = ";
    cin >> NumStd;

    iptr = (int *)malloc(NumStd * sizeof(int));
    i=1;
    TotalAge = 0;
    sptr=iptr;
    for (i = 1; i <= NumStd; i++)
    {
        cout << "Enter the age of Student " << i << " = ";
        cin >> *sptr;
        TotalAge = TotalAge + *sptr;
        sptr++;
    }

    cout << "The Average Age of Students are "<<TotalAge/NumStd<<endl; 



    //Reallocation Memory

    cout << "Enter New Number of Student " << endl;
        cin>>NumStd;
    
    iptr = (int *)realloc(iptr , NumStd*sizeof(int));  
    sptr=iptr;

   for (i = 1; i <= NumStd; i++)
    {
        cout << "Enter the age of Student " << i << " = ";
        cin >> *sptr;
        TotalAge = TotalAge + *sptr;
        sptr++;
    }

    cout << "The Average Age of Students are "<<TotalAge/NumStd<<endl;
    
    return 0;
}