//Two numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b;
    c = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(c)<<"\n"
        <<"ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<"\n"
        <<"round "<<a<<" / "<<b<<" = "<<round(c);
}