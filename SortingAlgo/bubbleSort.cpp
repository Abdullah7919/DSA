#include<bits/stdc++.h>
using namespace std;

// Recursive bubbleSort

void bubbleSort(int arr[], int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}

// void bubbleSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j+1]<arr[j]){
//                 swap(arr[j+1],arr[j]);
//             }
//         }
//     }
// }

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={4,2,5,1,3};

    bubbleSort(arr,5);

    printArray(arr,5);

    return 0;
}