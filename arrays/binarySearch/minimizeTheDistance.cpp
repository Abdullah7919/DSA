#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &stations, int k, double mid)
{
    double stationToAdd = 0;
    for (int i = 0; i < stations.size()-1; i++)
    {
        stationToAdd += (floor)((stations[i + 1] - stations[i]) / mid);
    }

    return stationToAdd <= k;
}

double findSmallestMaxDist(vector<int> &stations, int K)
{
    double left = 0;
    int n = stations.size();
    double right = stations[n - 1] - stations[0];

    while ((right - left) > 1e-3)
    {
        double mid = (left + right) / 2.0;

        if (possible(stations, K, mid))
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    return right;
}

int main()
{
    vector<int> stations={3,6,12,19,33,44,67,72,89,95};
    int k=2;
    double ans=findSmallestMaxDist(stations,k);
    cout<<ans;
    return 0;
}