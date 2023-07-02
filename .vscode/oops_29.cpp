#include <bits/stdc++.h>
using namespace std;
/*syntax for initialization list in constructor:
constructor (arguement - list) : initialization - section
{
    assignment + other code;
} 
gives value to the arguements of a constructor
*/
class test
{
    int a, b;
    public :
        //test(int i, int j) : a(i), b(i+j)
        //test(int i, int j) : a(i), b(2*j)
        //test(int i, int j) : a(i), b(a+j)
        //test(int i, int j) : b(j), a(i + b) ---> red flag, cause a will be initialized first, else will give garbage value
        test(int i, int j) : a(i), b(j)
        {
            cout << "constructor executed" << endl;
            cout << "value of a is :" << a << endl;
            cout << "value of b is :" << b << endl;
        }
};
int main ()
{
    test a(4, 6);
    return 0;
}