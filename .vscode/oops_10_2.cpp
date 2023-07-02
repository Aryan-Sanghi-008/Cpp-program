#include <bits/stdc++.h>
using namespace std;
class Point 
{
    int x,y;
    public :
        float pow1, pow2,pow3;
        Point(int a, int b)
        {
            x = a;
            y = b;
        }
        void display_num()
        {
            cout << "The cartesian coordinates are : (" << x << "," << y <<")" << endl;
        }
};

int main ()
{
    Point a(4, 6);
    a.display_num();

    Point b(5, 7);
    b.display_num();

    return 0;
}