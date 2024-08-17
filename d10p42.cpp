

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m=0,p;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin>>p;
        if (p==1)
            m++;
        else 
            continue;
    }
    if(m>0)
        cout<<"HARD";
    else
        cout<<"EASY";
}
