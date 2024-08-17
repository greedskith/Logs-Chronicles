#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age = ";
    cin>>age;
    if(age<=17)
    {
        cout<<"child";
    }
    else if (age>17 && age<65)
    {
        cout<<"adult";
    }
    else
    {
        cout<<"senior citizen";
    }

}