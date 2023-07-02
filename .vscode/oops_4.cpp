#include <bits/stdc++.h>
using namespace std;
//static variable : declare outside the class (at line 17 of this code)
class Employee
{
    int id;
    static int count;

public:
    void setdata();
    void getdata();
    static void getcount()
    {
        cout << "The value of count is : " << count << endl;
    }
};
int Employee ::count;
void Employee ::getdata()
{
    cout << "Enter Id : " << endl;
    cin >> id;
    count++;
}
void Employee ::setdata()
{
    cout << "The id of the employee is : " << id << " and the employee number is : " << count << endl;
}
int main()
{
    Employee Aryan, Harsh, Jitu;
    Aryan.getdata();
    Aryan.setdata();
    Employee :: getcount();

    Harsh.getdata();
    Harsh.setdata();
    Employee :: getcount();

    Jitu.getdata();
    Jitu.setdata();
    Employee :: getcount();

    return 0;
}