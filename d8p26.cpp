//Char

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;cin>>n;
    if (islower(n))
        cout<<char(toupper(n));
    else
        cout<<char(tolower(n));
}