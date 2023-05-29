#include<bits/stdc++.h>
using namespace std;

// Recursive insertionSort

void insertionSort(int arr[], int n,int i){
    if(i>=n){
        return;
    }
    
    int temp=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    
    insertionSort(arr,n,i+1);
}

// void insertionSort(int arr[], int n){
//     for(int i=1; i<n; i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }

//         arr[j+1]=temp;
//     }
// }

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={3,4,6,1,7,2};

    insertionSort(arr,6,1);

    print(arr,6);

    return 0;
}