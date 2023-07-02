#include <bits/stdc++.h>
using namespace std;

// 1
double power(double n, int p)
{
    double ans = 1.00;
    for (int i = 0; i < p; i++)
    {
        ans *= n;
    }

    return ans;
}

// 2, 3, 4, 5
double calc(double val1, char op, double val2)
{
    double ans = 0;
    switch (op)
    {
    case '+':
        ans = val1 + val2;
        break;

    case '-':
        ans = val1 - val2;
        break;

    case '*':
        ans = val1 * val2;
        break;

    case '/':
        ans = val1 / val2;
        break;

    default:
        cout << "Invalid operator" << endl;
        break;
    }

    return ans;
}

// 6
class Dummy
{
    int a, b, c;

public:
    Dummy()
    {
        a = 0, b = 0, c = 0;
    }

    Dummy(int x, int y)
    {
        x = a, y = b;
    }
    Dummy(int x)
    {
        x = 2 * a;
    }
};

// 7

class DB;

class DM
{
    int dmet;
    int m, cm;

public:
    DM(int val)
    {
        dmet = val;
        m = val / 100;
        cm = val % 100;
    }

    void display()
    {
        cout << "the distance is : " << m << "meters and " << cm << "centimeters" << endl;
    }
    friend int sum(DM, DB);
};

class DB
{
    int df;
    int f, inches;

public:
    DB(int val)
    {
        df = val;
        f = val / 12;
        inches = val % 12;
    }

    void display()
    {
        cout << "The distance is : " << f << "feet and " << inches << "inches" << endl;
    }

    friend int sum(DM, DB);
};

int sum(DM obj1, DB obj2)
{
    int add = obj1.dmet + obj2.df;
    return add;
}

// 8

class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int a, int b)
    {
        real = a;
        imag = b;
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    Complex operator-(const Complex &obj)
    {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
    Complex operator*(const Complex &obj)
    {
        Complex temp;
        temp.real = (real * obj.real) + (imag * (obj.imag) * -1);
        temp.imag = (real * obj.imag) + (imag * obj.real);
        return temp;
    }
    Complex operator/(const Complex &obj)
    {
        Complex temp;
        temp.real = ((real * obj.real) + (imag * (obj.imag))) / ((obj.real * obj.real) + (obj.imag * obj.imag));
        temp.imag = ((real * (obj.imag) * -1) + (imag * (obj.real))) / ((obj.real * obj.real) + (obj.imag * obj.imag));
        return temp;
    }
    void display()
    {
        if (imag < 0)
        {
            cout << "Complex Number : " << real << imag << "i" <<  endl;
        }
        else
        {
            cout << "Complex Number : " << real << "+" << imag << "i" << endl;
        }
    }
};

// 9

class Strings
{
    string s;

public:
    Strings()
    {

    }
    Strings(string t)
    {
        s = t;
    }

    Strings operator+(Strings &obj)
    {
        string temp;
        temp = s + obj.s;
        return temp;
    }
    Strings operator==(Strings &obj)
    {
        string temp;
        if (s == obj.s)
        {
            temp = "YES";
        }
        else
        {
            temp = "NO";
        }

        return temp;
    }

    void display()
    {
        cout << "Resultant string is : " << s << endl;
    }
};

// 10

class rational
{
    int a, b;

public:
    rational()
    {
        a = 1;
        b = 1;
    }
    rational(int num, int deno)
    {
        a = num;
        b = deno;
    }

    rational operator+(rational r2)
    {
        rational temp;
        if (b == r2.b)
        {
            temp.a = a + r2.a;
            temp.b = b;
        }
        else
        {
            temp.a = (((a) * (r2.b)) + ((r2.a) * (b)));
            temp.b = (b * r2.b);
        }

        return temp;
    }

    rational operator-(rational r2)
    {
        rational temp;
        if (b == r2.b)
        {
            temp.a = a - r2.a;
            temp.b = b;
        }
        else
        {
            temp.a = (((a) * (r2.b)) - ((r2.a) * (b)));
            temp.b = (b * r2.b);
        }

        return temp;
    }

    void display()
    {
        cout << "Numerator : " << a << endl;
        cout << "Denominator : " << b << endl;
    }
};

// 11
class Employee
{
public:
    string name;
    int salary;
};

class Manager : public Employee
{
public:
    string department;

    void getData()
    {
        cin >> name >> department >> salary;
    }
    virtual void toString()
    {
        cout << name << " " << department << " " << salary << endl;
    }
};

class Executive : public Manager
{
public:
    Executive()
    {
        getData();
    }
    void toString()
    {
        cout << "Employee's Position : "
             << "Executive"
             << " ";
        cout << "Employee's name : " << name << endl;
        cout << "Employee's Department : " << department << endl;
        cout << "Employee's Salary " << salary << endl;
    }
};

// 12 - 

class tollBooth
{
private:
    unsigned int car;
    double money_Collected;

public:
    tollBooth()
    {
        car = 0;
        money_Collected = 0;
    }

    void payingCar()
    {
        car++;
        money_Collected += 0.50;
    }

    void nopayCar()
    {
        car++;
    }

    void Display()
    {
        cout << car << endl;
        cout << money_Collected << endl;
    }
};

// 13 - stack ops

vector<int> v;
const int maxn = 100;
class Mystack
{
private:
    int rear;

public:
    Mystack()
    {
        rear = -1;
    }

    void push(int val)
    {
        if (rear == maxn)
        {
            cout << "Stack already full" << endl;
        }
        else
        {
            v.push_back(val);
            rear++;
        }
    }

    bool isEmpty()
    {
        if (rear == -1)
        {
            return true;
        }

        return false;
    }

    bool isFull()
    {
        if (rear == maxn)
        {
            return true;
        }

        return false;
    }

    void pop()
    {
        if (rear == -1)
        {
            cout << "Stack already empty" << endl;
        }
        else
        {
            v.pop_back();
            rear--;
        }
    }

    int top()
    {
        return v[v.size() - 1];
    }
};

//14 - exception handling


int main()
{
    return 0;
}