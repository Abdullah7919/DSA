#include<bits/stdc++.h>
using namespace std;

int mini(int arr[],int n){
    int left=0;
    int right=n-1;
    int res=INT_MAX;
    while(left<=right){
        int mid=(left+right)/2;
        // if(arr[left]<arr[right]){
        //     res=min(res,arr[left]);
        //     break;
        // }
        if(arr[mid]>=arr[left]){
            res=min(res,arr[left]);
            left=mid+1;
        }else{
            res=min(res,arr[mid]);
            right=mid-1;
        }
    }

    return res;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0,11,12};
    int n=13;
    int ans=mini(arr,n);
    cout<<ans;
    return 0;
}