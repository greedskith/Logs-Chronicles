#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    char s,r;
    cin>>x>>s>>y>>r>>z;
    if (s == '+')
        if (x+y==z)
            cout<<"Yes";
        else
            cout<<x+y;
    else if (s == '-')
        if (x-y==z)
            cout<<"Yes";
        else
            cout<<x-y;
    else if (s == '*')
        if (x*y==z)
            cout<<"Yes";
        else
            cout<<x*y;
}