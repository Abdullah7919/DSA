#include<bits/stdc++.h>
using namespace std;

int searchInRotatedAndSorted(int arr[],int n, int k){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k){
            return mid;
        }

        if(arr[start]<=arr[mid]){
            if(k>=arr[start] && k<=arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(k>=arr[mid] && k<arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }

    return -1;
}

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=0;
    int ans=searchInRotatedAndSorted(arr,n,k);
    cout<<"Index of Element"<<" "<<ans;
    return 0;
}