#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right){
    int i=left;
    int j=mid;
    int k=left;
    int inv_count=0;
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
            inv_count=inv_count+(mid-i);
        }
    }

    if(i>mid-1){
         while(j<=right){
         temp[k++]=arr[j++];
    }
    }else{
           while(i<=mid-1){
           temp[k++]=arr[i++];
    }

    }

    for(int i=left; i<=right; i++){
        arr[i]=temp[i];
    }

    return inv_count;
}


int mergeSort(int arr[],int temp[],int left,int right){
    int inv_count=0;
    while(left<right){
        int mid=(left+right)/2;
        inv_count+=mergeSort(arr,temp,left,mid);
        inv_count+=mergeSort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);
        return inv_count;
    }
    return 0;
}

// int countInversion(int arr[],int n){
//     int count=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int main(){
    int a[]={5,4,3,2,1};
    int n=5;
    int temp[n];

    int ans=mergeSort(a,temp,0,n-1);
    cout<<ans;
    return 0;
}