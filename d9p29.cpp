//Coordinates of a Point
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x>0)
    {
        if(y>0)
            cout<<"Q1";
        else if(y<0)
            cout<<"Q4";
        else
            cout<<"Eixo X";
    }
        
    else if(x<0)
    {
        if(y>0)
            cout<<"Q2";
        else if(y<0)
            cout<<"Q3";
        else
            cout<<"Eixo X";
    }
        
    else //x==0 is handled no need of {else if(x==0)}
    {
        if(y==0)
            cout<<"Origem";
        else
            cout<<"Eixo Y";
    }
}