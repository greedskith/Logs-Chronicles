#include <iostream>  //bring in the input and output functions
using namespace std; //so that dont have to write std:: prefix on every standard functions, useful!
int main()   //meat
{
    float a,b;   //defining float variables
    cin>>a>>b;  //taking 2 inputs float
    cout<<"addition "<<(a+b)<<endl;     //next line using endl
    cout<<"multiplication "<<a*b<<"\n";     //next line using \n (both are escape sequence)
    cout<<"quotient "<<(float)a/b;      //explicitly determinig type of output as float
}