#include<bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    int salary;
    public :
        void getId()
        {
            cout << "Enter the id of the employee :" << endl;
            cin >> id;
        }
        void getsal()
        {
            cout << "Enter the salary of the employee :" << endl;
            cin >> salary;
        }
        void printId()
        {
            cout << "The salary of the employee whose employee id is " << id << " is : " << salary << endl;
        }
};
int main()
{
    employee fb[4];
    for(int i = 0; i < 4; i++)
    {
        fb[i].getId();
        fb[i].getsal();
        fb[i].printId();
        cout << endl;
    }
    return 0;
}