#include <bits/stdc++.h>
using namespace std;
class Shopitem
{
    int id; 
    float price;
    public :
        void setdata(int a, float b)
        {
            id = a;
            price = b;
        }
        void getdata()
        {
            cout << "Code of this item is : " << id << endl;
            cout << "Price of this item is : " << price << endl;
        }
};
int main ()
{
    int size = 3;

    /*
    general store item
    veggies item
    hardware item
    */

    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptrNext = ptr;

    int p;
    float q;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setdata();
        ptr->setdata(p, q);
        ptr++;
    }
    for(int i = 0; i < size; i++)
    {
        //(*ptrNext).getdata();
        ptrNext->getdata();
        ptrNext++;
    }

    return 0;
}