//Pattern
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;

    //print the upper part of z
    for(int i = 0;i<n;i++)
        cout<<"*";
    cout<<endl;

    //middle part
    //loop to keep reducing the number of spaces
    //need loop for spaces then print *  
    


    for(int i =1 ; i<= (n-2); i++)
    {
        int no_space = (n-1)-i;
        for (int j =1;j<= no_space;j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    //print the lower part of z
    for(int i = 0;i<n;i++)
        cout<<"*";
    cout<<endl;
    
}