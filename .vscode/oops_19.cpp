/*
for a protected member :
                            Public derivation   Private derivation  Protected derivation
        1. Private members      Not inherited   Not inherited       Not inherited
        1. Protected members    Protected       Private             Protected
        1. Public members       Public          Private             Protected
*/
#include <bits/stdc++.h>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
class Derived : protected Base
{

};
int main()
{
    Base b;
    //cout << b.a << endl; // not executed because they are in protected mode
    Derived der;
    //cout << d.a << endl; // not executed because they are in protected mode
    return 0;
}