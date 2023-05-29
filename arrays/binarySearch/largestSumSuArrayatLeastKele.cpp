#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[],int n,int k){
    int sum=0;
    int result=0;
    int maxSum[n];
    int currentMax=arr[0];
    maxSum[0]=arr[0];
    for(int i=1; i<n; i++){
        currentMax=max(arr[i],currentMax);
        maxSum[i]=currentMax;
    }

    for(int i=0; i<k; i++){
        sum+=arr[i];
    }

    result=sum;
    for(int j=k; j<n; j++){
        sum=sum+arr[j]-arr[j-k];

        result=max(result,sum); // here we check adding next element and removing previous element

        result=max(result,sum+maxSum[j-k]); // Here we check sum of all the element of array till j
    }

    return result;
    
}

int main(){
    int arr[]={-4, -2, 1, -3};
    int n=4;
    int k=2;
    int ans=subArraySum(arr,n,k);
    cout<<ans;
    return 0;
}