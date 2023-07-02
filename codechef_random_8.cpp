#include <bits/stdc++.h>
using namespace std;

// best optimal - (sliding window, two pointer), TC : O(n), SC : O(n)

void get_max()
{
    long long n, b;
    cin >> n >> b;

    vector<long long> v(n, 0);
    for (auto &i : v)
    {
        cin >> i;
    }

    long long l = 0, sum = 0;
    while (l < min(b, n))
    {
        sum += v[l]; // taking all left, one by one
        l++;
    }
    l--;

    long long temp = sum, r = n - 1;
    while (l >= 0)
    {
        temp -= v[l];         // removing each left
        temp += v[r];         // adding each right
        sum = max(sum, temp); // taking max after each iteration
        l--, r--;
    }

    cout << sum << endl;
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // calling function
    get_max();
    return 0;
}