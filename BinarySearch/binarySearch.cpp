#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[],int n,int k){
    int start=0;
    int end=n;
    int mid,loc=-1;
    while(start<=n-1){
        mid=(start+end)/2;

        if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        if(arr[mid]==k){
            loc=mid;
            break;
        }
    }

    if(loc==-1){
        cout<<"Element is not found";

    }else{
        cout<<"Element"<<" "<<k<<" "<<"present at index"<<" "<<loc;
    }
}

int main(){
    int arr[]= {2,3,7,10,13,14,17};
    int k = 14;
    int n=6;

    binarySearch(arr,n,k);

    return 0;
}