#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    system("clear");
    cin>>a>>b;
    if (a-b==1 ||a-b==-1)
        cout<<"YES";
    else if(a-b==0)
    {
        if(a==b && !(a == 0 && b == 0))
            cout<<"YES";
        else if (a == 0 && b == 0)
            cout<<"NO";

    }
    else
        cout<<"NO";
}
  