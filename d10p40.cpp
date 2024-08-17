#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,maxi=0; cin>>n;
    for(int i =1;i<=n;i++)
    {
        cin>>m;
        if (m>maxi)
            maxi=m;
    }
    cout<<maxi;
}
