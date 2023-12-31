#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int low, int high, int n)
{
    int mid = (low + (high - low)) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
    {
        return mid;
    }

    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return findPeakElement(arr, low, mid - 1, n);
    }

    else
    {
        return findPeakElement(arr, mid + 1, high, n);
    }
}

int main()
{
    int n = 6;
    int arr[] = {0, 6, 8, 5, 7, 9};

    cout << "Index of peak element in array : " << findPeakElement(arr, 0, 5, 6) << endl;

    return 0;
}