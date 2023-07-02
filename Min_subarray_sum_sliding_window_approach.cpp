#include <bits/stdc++.h>
using namespace std;

int minSubarraySize(int arr[], int n, int x)
{
    int sum = 0;
    int min_size = n + 1;
    int curr = 0;
    int start = 0;
    while (curr < n)
    {
        while (sum <= x && curr < n)
        {
            sum += arr[curr];
            curr++;
        }

        while (sum > x && start < n)
        {
            if (curr - start < min_size)
            {
                min_size = curr - start;
            }
            sum -= arr[start];
            start++;
        }
    }
    return min_size;
}
int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int n = 6;
    int x = 51;
    int minLength = minSubarraySize(arr, n, x);

    if (minLength == n + 1)
    {
        cout << "No such subarray exists " << endl;
    }
    else
    {
        cout << minSubarraySize(arr, n, x) << " is the minimum subarray size (sum >x) " << endl;
    }

    return 0;
}