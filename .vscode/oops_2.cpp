#include <bits/stdc++.h>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void check_binary();
    void ones_compliment();
    void display_binary();
};
void binary ::read()
{
    cout << "Enter a binary number :" << endl;
    cin >> s;
}
void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
}
void binary :: display_binary() {
    cout << "Display binary number :" << endl;
    for(int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.check_binary();
    b.display_binary();
    b.ones_compliment();
    b.display_binary();
    return 0;
}