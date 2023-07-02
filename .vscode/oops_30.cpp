#include <bits/stdc++.h>
using namespace std;

int main()
{
    // new operator (creates dynamic memory)

    // float *p = new float(40.56);
    // char *p = new char('a');
    // int *p = new int(40);
    // cout << "The value of a is : " << *p << endl;
    // delete p; //(frees the memory of p)
    // cout << "The value of a is : " << *p << endl;

    int *arr = new int[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> *(arr + i);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr; // frees the memory of arr array

    for (int i = 0; i < 6; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}