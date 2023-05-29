#include<bits/stdc++.h>
using namespace std;

bool days(int arr[],int n,int d, int mid){
    int sum=0;
    int day=1;
    for(int i=0; i<n; i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }else{
            sum=arr[i];
            day++;
        }
    }

    if(day<=d){
        return true;
    }

    return false;
}

int sum(int arr[],int n){

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    return sum;
}

int minimumCapacity(int arr[],int n,int D){
    int left=*max_element(arr,arr+n);
    int right=sum(arr,n);
    int result=-1;
    while(left<=right){
        int mid=(left+right)/2;

        if(days(arr,n,D,mid)){
            result=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }

    return result;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int D=2;
    int ans=minimumCapacity(arr,n,D);
    cout<<ans;
    return 0;
}