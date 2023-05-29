#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[],int n){
    int l=0;
    int r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]<arr[mid+1]){
            l=mid+1;
        }else{
            r=mid;
        }
    }

    return l;
}

    // int peakElement(int arr[], int n)
    // {
        
    //  int start=0;
    //  int end=n-1;
    //  while(start<end){
    //      int mid=(start+end)/2;
    //      if(mid==0){
    //          return arr[0]>=arr[1]?  1:1;
    //      }
         
    //      if(mid==n-1){
    //          return arr[n-1]>=arr[n-2]?1:0;
    //      }
         
    //      if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
    //          return 1;
    //      }
    //      if(arr[mid]<arr[mid-1]){
    //          end=mid-1;
    //      }else{
             
    //          start=mid+1;
    //      }
    //  }
     
    //  return 1;
     
    // }

int main(){
    int arr[]={3,5,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=peakElement(arr,n);
    cout<<"Index at which then Element is present"<<" "<<ans;
    return 0;
}