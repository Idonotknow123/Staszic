#include <iostream>
#include <iomanip>

using namespace std;

double x, y, z;

int main()
{
    cin >> x;

y = (x * x) * 3.1415926535;

z = 2 * x * 3.1415926535;
    cout << setprecision (3) << fixed << y << '\n' ;
    cout << setprecision (3) << fixed << z << '\n' ;
    return 0;
}