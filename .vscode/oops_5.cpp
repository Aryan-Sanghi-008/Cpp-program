#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a;
    int b;

    public:
        void set_data(int v1, int v2)
        {
            a = v1;
            b = v2;
        }
        void set_data_by_sum(Complex o1, Complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print_data()
        {
            cout << "the value of the complex number is : " << a << "+" << b << "i" << endl;
        }
};

int main()
{
    Complex c1, c2, c3;
    c1.set_data(1, 2);
    c1.print_data();
    c2.set_data(3, 4);
    c2.print_data();
    c3.set_data_by_sum(c1, c2);
    c3.print_data();
    return 0;
}