#include <iostream>
#define n 100

using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {

        arr[top] = x;
        top ++;
    }
    void pop ()
    {
        if(top == -1)
        {
            cout<<"ERROR: Stack is empty!"<<endl;
        }
        top--;
    }
    int top()
    {
        if(top == -1)
        {
            cout<<"ERROR: Stack is empty!"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    int x;


    return 0;
}