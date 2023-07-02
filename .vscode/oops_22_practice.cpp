#include <bits/stdc++.h>
using namespace std;
class Calculator
{
    protected :
        int a,b;
    public :
        void set_calc_data(int op1, int op2)
        {
            a = op1;
            b = op2;
        }
        void get_calc_data()
            {
                cout << "The additions of two operands are : " << a + b << endl;
                cout << "The subtraction of two operands are : " << a - b << endl;
                cout << "The multiplication of two operands are : " << a * b << endl;
                cout << "The division of two operands are : " << a / b << endl;
            }
};
class Scientific_calculator
{
    protected :
        int a,b;
    public :
        void set_scientific_calc_data(int op1, int op2)
        {
            a = op1;
            b = op2;
        }
        void get_scientific_calc_data()
            {
                cout << "The exponential of a to b is : " << pow(a,b) << endl;
                cout << "The square root of two operands are : " << sqrt(a) << " and " << sqrt(b) << endl;
                cout << "The logarithm of a to the base b is : " << log(a)/log(b) << endl;
                cout << "The Sine of two operands are : " << sin(a) << " and " << sin(b) << endl;
            }
};
class Hybrid_calculator : public Calculator, public Scientific_calculator
{

};
int main ()
{
    Hybrid_calculator Hybrid;
    Hybrid.set_calc_data(8, 4);
    Hybrid.get_calc_data();
    Hybrid.set_scientific_calc_data(9, 3);
    Hybrid.get_scientific_calc_data();

    return 0;
}