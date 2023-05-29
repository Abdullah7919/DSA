#include<bits/stdc++.h>
using namespace std;

// for GFG

int kthMissingGFG(int arr[],int n, int k){
    int num=arr[0];
    int i=0;
    if(k==0){
        return -1;
    }
    while(i<n && k>0){
        if(arr[i]==num){
            i++;
        }else{
            k--;
        }

        num++;
    }

    while(k--){
        num++;
    }

    if(num-1>arr[n-1]){
        return -1;
    }

    return num-1;
}

// for LeetCode 

int kthMissingLeet(int arr[],int n, int k){
    int low=0;
    int high=n-1;
    while(low<=high){

        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);

        if(missing<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return low+k;
}

int main(){
    int arr[]={1,3,4,5,7};
    int n=5;
    int k=2;
    int ans=kthMissingGFG(arr,n,k);
    int ans1=kthMissingLeet(arr,n,k);
    cout<<ans<<endl;
    cout<<ans1;
    return 0;
}