//it works... fk you maths


#include <bits/stdc++.h>

using namespace std;

int main() {
    float x; cin>>x;
    if(x==int(x))
        cout<<"int "<<floor(x);
    else
        cout<<"float "<<floor(x)<<" "<<x-int(x);  // x = int(x)+frac(x)
}
