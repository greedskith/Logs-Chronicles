#include <iostream>
using namespace std;
int main()
{
    int x , y ; char f ;
    cin >> x >> f >> y ;
    if (f == '>' && x > y || f == '<' && x < y || f == '=' && x == y  )
        cout << "Right";
    else 
        cout << "Wrong";
}
/*  EFFICIENT ONE USING ?: TRINARY OPERATOR AND SKIPPING IF-ELSE

#include <iostream>

using namespace std;

int main() {
    int x, y;
    char f;
    cin >> x >> f >> y;
    cout << (f == '>' && x > y || f == '<' && x < y || f == '=' && x == y ? "Right" : "Wrong");
    return 0;
}

*/