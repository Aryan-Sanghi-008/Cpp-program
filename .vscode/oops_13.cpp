#include <bits/stdc++.h>
using namespace std;
class BankDeposit
{
    int PrincipalAmount;
    int years;
    float interestrate;
    float returnvalue;

    public:
        BankDeposit(){} //blank constructor to write objects like bd1, bd2, etc.
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    PrincipalAmount = p;
    years = y;
    interestrate = r;
    returnvalue = PrincipalAmount;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    PrincipalAmount = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = PrincipalAmount;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void BankDeposit ::show()
{
    cout << "The principle amount was Rs " << PrincipalAmount << "." << endl
         << "The return value in " << years << "years will be " << returnvalue << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    int R;
    float r;

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}