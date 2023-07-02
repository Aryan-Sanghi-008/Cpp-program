#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << "Quadratic Equation :- \n"
         << a << "x^2"
         << " + " << b << "x"
         << " + " << c << " = 0" << endl;
    float x = 0, y = 0;
    if (pow(b, 2) - (4 * a * c) < 0)
    {
        cout << "Roots are imaginary" << endl;
    }
    else if (pow(b, 2) - (4 * a * c) == 0)
    {
        x = (-b / (2 * a));
        y = x;
        cout << "Roots are equal and are " << x << " and " << y << " respectively " << endl;
    }
    else
    {
        int d = sqrt(pow(b, 2) - (4 * a * c));
        x = (-b + d) / (2 * a);
        y = (-b - d) / (2 * a);
        cout << "Roots are distinct and are " << x << " and " << y << " respectively " << endl;
    }
    return 0;
}