#include <bits/stdc++.h>
using namespace std;

int kthElement(int arr1[], int arr2[], int m, int n, int k)
{

    if (m > n)
    {
        return kthElement(arr2, arr1, n, m, k);
    }

    int low = max(0, k - m);
    int high = min(k, n);

    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = k - cut1;

        int l1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
        int r1 = cut1 == n ? INT_MAX : arr1[cut1];
        int r2 = cut2 == m ? INT_MAX : arr2[cut2];

        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1,l2);
        }
        else if (l1 > l2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }

    return 1;
}

// int kthElement(int arr1[], int arr2[], int n, int m, int k)
// {
//     int p1 = 0, p2 = 0, count = 0, answer = 0;
//     while (p1 < n && p2 < m)
//     {
//         if(count==k){
//             break;
//         }

//         if (arr1[p1] < arr2[p2])
//         {
//             answer = arr1[p1];
//             p1++;
//         }
//         else
//         {
//             answer = arr2[p2];
//             p2++;
//         }

//         count++;
//     }

//     if (count != k)
//     {
//         if (p1 != n - 1)
//         {
//             answer = arr1[k - count];
//         }
//         else
//         {
//             answer = arr2[k - count];
//         }
//     }

//     return answer;
// }

int main()
{
    int array1[] = {2, 3, 6, 7, 9};
    int array2[] = {1, 4, 8, 10};
    int m = sizeof(array1) / sizeof(array1[0]);
    int n = sizeof(array2) / sizeof(array2[0]);
    int k = 5;
    int ans=kthElement(array1, array2, m, n, k);
    cout << "The element at the kth position in the final sorted array is "
         << ans;
    return 0;
}