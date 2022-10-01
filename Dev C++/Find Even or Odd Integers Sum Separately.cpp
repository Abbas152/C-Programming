//Once Again😤
#include <iostream>
using namespace std;
int main()
{
    int se, so, n, i;
    se=0;
    so=0; 
    cout<<"Please Enter Your Number ";
    cin>>n;
    
    for(i=1; i<=n; i++)
    
    if(i%2==0)
    {
        se=se+i; 
    } 
    else
    {
        so=so+i;
    }
    cout<<" your even sum is "<<se<<"\n";
    cout<<" your odd sum is "<<so<<"\n";
}