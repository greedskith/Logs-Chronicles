#include <iostream>
using namespace std;
int main()
{
    int x,y,z;      //int variables declared
    cout<<"values of x,y and z = "<<endl;       //get ready to enter numbers
    cin>>x>>y>>z;       //variables are filled with numbers
    if (x>y && x>z)
        cout<<"x is the largest "<<x;
    else if(y>x && y>z)
        cout<<"y is the largest "<<y;
    else
        cout<<"z is the largest "<<z;
}