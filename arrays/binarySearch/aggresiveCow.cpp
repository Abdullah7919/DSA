#include <bits/stdc++.h>
using namespace std;

bool possible(int arr[],int n, int k,int mid){
    int count=1;
    int lastPlaced=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-lastPlaced>=mid){
            lastPlaced=arr[i];
            count++;
        }
    }
    if(count>=k){
        return true;
    }

    return false;
}

int maxDistance(int arr[], int n, int k)
{
    int left = 1;
    int right = arr[n - 1] - arr[0];
    int result=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(possible(arr,n,k,mid)){
            result=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return result;
}

int main()
{
    int n = 5, cows = 3;
    int a[] = {1, 2, 8, 4, 9};
    sort(a, a + n);
    int ans=maxDistance(a,n,cows);
    cout<<ans;
    return 0;
}