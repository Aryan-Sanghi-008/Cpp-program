#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int

void heapify(vector<int> &a, int n, int i)
{
    int max_idx = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l < n && a[l] > a[max_idx])
    {
        max_idx = l;
    }

    if(r < n && a[r] > a[max_idx])
    {
        max_idx = r;
    }

    if(max_idx != i)
    {
        swap(a[i], a[max_idx]);

        heapify(a, n, max_idx);
    }
}

void heap_sort(vector<int> &a)
{
    int n = a.size();

    for(int i = n/2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for(int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{	
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    heap_sort(a);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}