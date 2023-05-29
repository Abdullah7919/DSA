#include<bits/stdc++.h>
using namespace std;

int searchInsertPosition(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }

    return end+1;
}

int main(){
  int  N = 4;
  int  Arr[] = {1,2,5,6};
  int k  = 3;
  int ind=searchInsertPosition(Arr,N,k);
  cout<<ind;
  return 0;
}