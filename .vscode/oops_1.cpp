#include<bits/stdc++.h>
using namespace std;
class employee
{
    private :
        int a,b,c;
    public :
        int d,e;
        void set_data(int a, int b, int c);
        void get_data()
        {
            cout << "value of a :" << a << endl;
            cout << "value of b :" << b << endl;
            cout << "value of c :" << c << endl;
            cout << "value of d :" << d << endl;
            cout << "value of e :" << e << endl;
        }
};
void employee :: set_data(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee Aryan;
    Aryan.d = 4;
    Aryan.e = 5;
    Aryan.set_data(1,2,3);
    Aryan.get_data();
    return 0;
}