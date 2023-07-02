#include <bits/stdc++.h>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k)
{
    int elements = 1;
    int pos  = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] - pos >= mid)
        {
            pos = arr[i];
            elements ++;
            if(elements == k)
            {
                return true;
            }
        }
    }
    return false;
}

int largestMinDistance(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int left = 1;
    int right = arr[n - 1];

    int result = -1;

    while (left < right)
    {
        int mid = (left + right) / 2;
        if (isFeasible(mid, arr, n, k))
        {
            result = max(result, mid);
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return result;
}

int main()
{
    int arr[] = {1,2,8,4,9};
    int n = 5;
    int k = 3;

    cout << "largest minimum distance is : " << largestMinDistance(arr, n, k) << endl;

    return 0;
}