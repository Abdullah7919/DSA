#include<bits/stdc++.h>
using namespace std;

void insertionSortRecursive(int arr[], int n){

    if(n<=1){
        return;
    }

    insertionSortRecursive(arr,n-1);

    int last=arr[n-1];
    int j=n-2;

    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }

    arr[j+1]=last;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={4,2,5,1,3};

    insertionSortRecursive(arr,5);

    printArray(arr,5);

    return 0;
}