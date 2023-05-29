#include <bits/stdc++.h>
using namespace std;

bool allocation(int arr[],int N,int M, int mid){
    int pages=0;
    int student=1;
    for(int i=0; i<N; i++){
        if(arr[i]>mid){
            return false;
        }

        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }else{
            pages=arr[i];
            student++;
        }
    }

    if(student<=M){
        return true;
    }

    return false;
}

int pagesSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int minimumPages(int arr[], int N, int M)
{
    int low = *min_element(arr, arr + N);
    int high = pagesSum(arr, N);
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (allocation(arr, N, M, mid))
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}

int main()
{
    int arr[]={12,34,67,90};
    int N=4;
    int M=2;
    int ans=minimumPages(arr,N,M);
    cout<<ans;

    return 0;
}