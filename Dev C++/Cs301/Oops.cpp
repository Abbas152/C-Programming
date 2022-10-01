#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void setName(string s){
        name=s;
    }
    void getName(){
        cout<<name<<endl;
    }

    void printInfo()
    {
        cout<< "\n";                       
        cout << "Name = \n"<<name<<endl;
        cout << "Age = \n"<<age<<endl;
        cout << "Gender = \n"<<gender<<endl;
        cout<< "\n"; 
    }
};

int main()
{

    student arr[3];

    // Function Setter Getter

    // string s;
    // cout<<"Enter Name: ";
    // cin>>s;
    // arr[0].setName(s);
    // arr[0].getName();

    for (int i = 0; i < 3; i++)
    {
        string s;
        cout << "Name = ";
        cin >> arr[i].name;
        // cin >> s;           //Function Setter
        // arr[i].setName(s);  //Function Setter
        cout << "Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    return 0;
}