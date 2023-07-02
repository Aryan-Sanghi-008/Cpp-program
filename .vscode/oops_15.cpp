#include <bits/stdc++.h>
using namespace std;
// destructor

class num
{
    static int count;

    public:
        num()
        {
            count++;
            cout << "This is the time when constructor is called for object number " << count << endl;
        }
        ~num()
        {
            cout << "This is the time when destructor is called for object number " << count << endl;
            count--;
        }
};
int num :: count; // declaration of static variable
int main()
{
    cout << "Entering the main function" << endl;
    cout << "Creating an object n1" << endl;
    num n1;
    {
        cout << "Entering the block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting the constructor" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}