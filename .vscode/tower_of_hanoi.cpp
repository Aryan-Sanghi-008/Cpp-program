#include <iostream>
using namespace std;
void towerofhanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerofhanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << helper << endl;
    towerofhanoi(n - 1, helper, dest, src);
}
int main()
{
    towerofhanoi(4, 'A', 'C', 'B');
    return 0;
}