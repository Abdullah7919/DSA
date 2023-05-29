#include <bits/stdc++.h>
using namespace std;

// Majority Element >N/3 times

int majority(int arr[], int n)
{
    int count = 0;
    int element = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
        }
        if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count1++;
        }
    }

    if (count1 > n / 3)
    {
        return element;
    }
    else
    {
        return -1;
    }
}

// Time complexity is O(NlogN):

void mjElement(int arr[], int n)
{
    int maxl = 0;
    int count = 1;
    int element = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > maxl)
        {
            maxl = count;
            element = arr[i];
        }
    }

    // cout<<element;
    if (maxl > n / 2)
    {
        cout << element;
    }
    else
    {
        cout << "-1";
    }
}

// Moore`s voting Algorithm: O(N)

int majorityElement(int a[], int size)
{

    int count = 0;
    int element = 0;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            element = a[i];
        }
        if (a[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int ct = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == element)
        {
            ct++;
        }
    }

    if (ct > size / 2)
    {
        return element;
    }
    else
    {
        return -1;
    }
}

// O(N) S(N)

// int majority(int arr[], int n){
//     map<int,int> m;
// int ans=0;
//     for(int i=0; i<n; i++){
//         m[arr[i]]++;
//     }
//     for(auto x:m){
//         if(x.second>n/2){
//             ans=x.first;
//         }
//     }
// return ans;
// }

int main()
{
    // int arr[]={17, 19, 9, 5, 3, 6, 17, 7, 18, 16, 18, 11 ,3 ,15, 2};
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int res = majority(arr, 7);
    cout << res;

    // mjElement(arr,7);

    return 0;
}