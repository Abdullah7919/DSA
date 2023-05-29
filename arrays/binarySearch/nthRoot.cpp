#include <bits/stdc++.h>
using namespace std;

double multiply(double number, int n)
{
    double ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= number;
    }

    return ans;
}

double nthRoot(int n, int m){
    double low=1;
    double high=m;
    double eps=1e-6;

    while((high-low)>eps){
        double mid=(high+low)/2;
        if(multiply(mid,n)<m){
            low=mid;
        }else{
            high=mid;
        }
    }

    return low;
}

// int nthRoot(int n, int m)
// {
//     int low = 1;
//     int ans;
//     int high = m / n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         int nthR = multiply(mid, n);
//         if(nthR==m){
//             return mid;
//         }
//         if (nthR <= m)
//         {
//             low = mid + 1;
//             ans = mid;
//         }
//         else
//         {
//             high = mid-1;
//         }
//     }

//     return ans;
// }


int main()
{
    int n, m;
    cin >> n >> m;
    double ans = nthRoot(n, m);
    cout << ans;
    return 0;
}