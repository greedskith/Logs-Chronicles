//Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
//even numbers


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=1; i<=n;i++)
    {
        if (i%2==0)
            cout<<i<<"\n";
        else if (i==1)
            cout<<-1;
    }    
}