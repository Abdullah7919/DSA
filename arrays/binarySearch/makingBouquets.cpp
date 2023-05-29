#include <bits/stdc++.h>
using namespace std;

bool bouquets(vector<int> &bloomDay, int m, int k, int mid)
{
    int size = bloomDay.size();
    int flowers = 0;
    int bouquets = 0;
    for (int i = 0; i < size; i++)
    {
        if (bloomDay[i] <= mid)
        {
            flowers++;
        }
        else
        {
            flowers = 0;
        }

        if (flowers >= k)
        {
            bouquets++;
            flowers = 0;
        }

        if (bouquets >= m)
        {
            return true;
        }
    }

    return false;
}

int solve(int M, int K, vector<int> &bloomDay)
{
    int left = *min_element(bloomDay.begin(), bloomDay.end());
    int right = *max_element(bloomDay.begin(), bloomDay.end());
    int result = -1;
    if (bloomDay.size() < M * K)
    {
        return -1;
    }

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (bouquets(bloomDay, M, K, mid))
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}

int main()
{
    vector<int> bloomDay={5, 5, 5, 5, 10, 5, 5};
    int m=2;
    int k=3;
    int ans=solve(m,k,bloomDay);
    cout<<ans;
    return 0;
}