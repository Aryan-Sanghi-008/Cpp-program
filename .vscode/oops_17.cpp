#include <bits/stdc++.h>
using namespace std;
//inheritance
class Employee
{
    public:
        int id;
        int salary;
        Employee (int empid)
        {
            id = empid;
            salary = 20000;
        }

        Employee()
        {

        }
};
//syntax for derived class
/* {{derived class - name}} : {{visibility mode}} {{base class name}}
{
   class methods, members, etc....
}
*/
//default visibility mode - private
//if visibility mode = public = inherited derived class members become public from public members of base class
//if visibility mode = private = inherited derived class members become private from public members of base class
//private members are never inherited

class Programmer : public Employee
{
    public:
        int languagecode;
        Programmer (int enpId)
        {
            id = enpId;
            languagecode = 9;
        }
        void getdata()
        {
            cout << "Aryan's id : " << id << endl;
            cout << "Aryan's languagecode : " << languagecode << endl;
        }
};
int main ()
{
    Employee Aryan(1) , Himanshu(2);
    cout << "Aryan's salary : " << Aryan.salary << endl;
    cout << "Himanshu's salary : " << Himanshu.salary << endl;
    Programmer AS(10); 
    AS.getdata();
    return 0;
}