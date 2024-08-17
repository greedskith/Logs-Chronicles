//better with max and min functions


#include <iostream>

using namespace std;

int main() {
    long long x, y, z, mini, maxi;
    cin >> x >> y >> z;

    // Using ternary operator for concise comparison
    mini = min(x, min(y, z));
    maxi = max(x, max(y, z));

    cout << mini << " " << maxi << endl;
    return 0;
}

//method2
// #include <iostream>
// using namespace std;

// int main()
// {
//     long double x, y, z, mini, maxi;
//     cin >> x >> y >> z;

//     // for minimum
//     if (x <= y && x <= z) // Changed < to <=
//         mini = x;
//     else if (y <= x && y <= z) // Changed < to <=
//         mini = y;
//     else
//         mini = z;

//     // for maximum
//     if (x >= y && x >= z) // Changed > to >=
//         maxi = x;
//     else if (y >= x && y >= z) // Changed > to >=
//         maxi = y;
//     else
//         maxi = z;

//     cout << mini << " " << maxi;
// }
