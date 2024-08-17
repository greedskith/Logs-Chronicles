//Age in Days
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;cin>>d;
    cout<<d/365<<" years\n"
        <<(d%365)/30<<" months\n"
        <<(d%365)%30<<" days\n";
}