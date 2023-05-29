#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l, int mid, int r){
    int i=l;
    int j=mid+1;
    int k=l;
    int b[100];
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
        }else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k]=arr[j];
            j++; 
            k++;
        }
    }else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }

    for(int k=l; k<=r; k++){
        arr[k]=b[k];
    }
}

void mergeSort(int arr[],int l, int r){
    
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[8]={3,5,2,7,4,1,8,9};
    mergeSort(arr,0,7);
    print(arr,8);


    return 0;
}