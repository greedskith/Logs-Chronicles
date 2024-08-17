#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);       //solving the input and output structure....lol.
    cin.tie(NULL);
    int n,x,y;
    cin>>n;     
    for(int j=1;j<=n;j++)       //loop for 1 to n
    {
        cin>>x>>y;              //takes input of x and y
        int s = 0;
        for(int i=min(x,y)+1;i<=max(x,y)-1;i++)   //new loop (x+1 to y-1) updates sum of odd integers in between (x,y)
        {
            if(i%2!=0)
                s=s+i;
        }
        cout<<s<<'\n';                //prints out sum
    }
}