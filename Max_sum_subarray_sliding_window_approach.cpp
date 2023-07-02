#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k, int x)
{
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum <= x)
    {
        ans = max(ans, sum);
    }

    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        if (sum <= x)
        {
            ans = max(ans, sum);
        }
    }

    return ans;
}

int main()
{
    int k = 3;
    int n = 6;
    int x = 20;
    int arr[] = {7, 5, 4, 6, 8, 9};
    cout << maxSum(arr, n, k, x) << " is the max subarray sum in array (<x)" << endl;

    return 0;
}