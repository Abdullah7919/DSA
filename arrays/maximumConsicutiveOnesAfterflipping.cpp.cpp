#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n, int m)
{
    int zero = 0;
    int start = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }

        while (zero > m)
        {
            if (arr[start] == 0)
            {
                zero--;
            }

            start++;
        }

        maxi = max(maxi, i - start + 1);
    }
    return maxi;
}

int main()
{
    int m = 2;
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int);

    int result = maximum(arr, size, m);

    cout << result;

    return 0;
}