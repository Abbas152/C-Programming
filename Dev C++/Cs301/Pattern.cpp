#include <iostream>
using namespace std;
int main(){
    // char ascii = 98;
    // cout<<ascii;



// **************************************
//               Rectangle                
// **************************************
    int row, col;
    cout<<"Enter Rows Number "<<endl;
    cin>>row;
    cout<<"Enter Column Number "<<endl;
    cin>>col;
for (int i = 1; i <= row; i++)
{
    for (int j = 1; j <= col; j++)
    { 
        cout<<"* ";
    }
        cout<<endl;
}


// **************************************
//              Hollow Rectangle                
// **************************************
//     int row, col;
//     cout<<"Enter Rows Number "<<endl;
//     cin>>row;
//     cout<<"Enter Column Number "<<endl;
//     cin>>col;
// for (int i = 1; i <= row; i++)
// {
//     for (int j = 1; j <= col; j++)
//     { 
//         if (i==1 || i==row || j==1 || j==col)             
//         {
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }

    return 0;
}
