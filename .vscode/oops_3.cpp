#include <bits/stdc++.h>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};
void Shop ::setPrice()
{
    cout << "Enter the id of the item " << counter + 1 << " : " << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item " << counter + 1 << " : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item of id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}