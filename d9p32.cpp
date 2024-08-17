//interval

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x,y,z;
    cin>>x>>y>>z;
    if (x>=y&&y>=z)
        cout<<z<<"\n"<<y<<"\n"<<x<<"\n\n"<<x<<"\n"<<y<<"\n"<<z;
    else if(x>=z&&z>=y) 
        cout<<y<<"\n"<<z<<"\n"<<x<<"\n\n"<<x<<"\n"<<y<<"\n"<<z;
    else if(y>=x&& x>=z)
        cout<<z<<"\n"<<x<<"\n"<<y<<"\n\n"<<x<<"\n"<<y<<"\n"<<z;
    else if(y>=z&& z>=x)
        cout<<x<<"\n"<<z<<"\n"<<y<<"\n\n"<<x<<"\n"<<y<<"\n"<<z;
    else if(z>=y&& y>=x)
        cout<<x<<"\n"<<y<<"\n"<<z<<"\n\n"<<x<<"\n"<<y<<"\n"<<z;
    else if(z>=x&& x>=y)
        cout<<y<<"\n"<<x<<"\n"<<z<<"\n\n"<<x<<"\n"<<y<<"\n"<<z;
}