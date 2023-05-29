#include<bits/stdc++.h>
using namespace std;

int singleElement(int arr[],int n){
    int start=0;
    int end=n-1;
    if(end==0){
        return arr[0];
    }
    else if(arr[0]!=arr[1]){
        return arr[0];
    }
    else if(arr[end]!=arr[end-1]){
        return arr[end];
    }
    while(start<=end){
        int mid =(start+end)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
        if((mid%2)==0 && arr[mid]==arr[mid+1] || (mid%2)==1 && arr[mid]==arr[mid-1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,1,2,3,3,4,4,8,8};
    int n=9;
    int ans=singleElement(arr,n);
    cout<<ans;
    return 0;
}