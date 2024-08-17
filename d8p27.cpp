//Char

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,z; char y;
    cin>>x>>y>>z;
    if (y=='+')
        cout<<x+z;
    else if (y =='-')
        cout<<x-z;
    else if  (y =='*')
        cout<<x*z;
    else if (y =='/')
        cout<<x/z;
}