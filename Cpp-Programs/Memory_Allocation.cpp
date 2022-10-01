#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    // Use of malloc <------
    // int *x;
    // int n;

    // cout<<"Enter the number of array size "<<endl;
    // cin>>n;


    // x = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the of the value no " << i << " of this array " << endl;
    //     cin >> x[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "The value at " << i << " of this array " << x[i] << endl;
    // }




    // Use of calloc <------ same just change name malloc to calloc.

    // int *x;
    // int n;

    // cout<<"Enter the number of array size "<<endl;
    // cin>>n;


    // x = (int *)calloc(n , sizeof(int));   /*<----- Here is the difference between malloc 
    // and calloc ","   <----- and in the malloc "*"<---- */


    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the of the value no " << i << " of this array " << endl;
    //     cin >> x[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "The value at " << i << " of this array " << x[i] << endl;
    // }




    // Use of realloc



    //     cout << "Enter New size of array " << endl;
    //     cin>>n;
    
    // x = (int *)realloc(x , n*sizeof(int));  
   
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the of the value no " << i << " of this array " << endl;
    //     cin >> x[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "The value at " << i << " of this array " << x[i] << endl;
    // }

    return 0;
}