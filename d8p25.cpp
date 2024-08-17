//capital or small or digit

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;cin>>n;
    //cout<<int(n);
    if (int(n)>=48 && int(n)<=57)
        cout<<"IS DIGIT";
    else if(int(n)>=97 && int(n)<=122)
        cout<<"ALPHA\nIS SMALL";
    else if(int(n)>=65 && int(n)<=90)
        cout<<"ALPHA\nIS CAPITAL";
}
// more efficient
// #include <iostream>
// #include <cctype> // For std::isdigit and std::isalpha
// using namespace std;

// int main() {
//     char n;
//     cin >> n;

//     if (isdigit(n)) {
//         cout << "IS DIGIT";
//     } else if (isalpha(n)) {
//         cout << "ALPHA\n";
//         if (islower(n)) {
//             cout << "IS SMALL";
//         } else {
//             cout << "IS CAPITAL";
//         }
//     }
// }