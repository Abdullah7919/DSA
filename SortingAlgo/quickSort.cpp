#include<bits/stdc++.h>
using namespace std;

// taking pivot as last element

int partition(int arr[], int l, int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<h; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[h]);
    return i+1;
}

// taking pivot as a first element

// int partition(int arr[],int l, int h){
//     int pivot=arr[l];
//     int start=l;
//     int end=h;
//     while(start<end){
//     while(arr[start]<=pivot){
//         start++;
//     }
//     while(arr[end]>pivot){
//         end--;
//     }

//     if(start<end){
//     swap(arr[start],arr[end]);

//     }
    
//     }

//     swap(arr[l],arr[end]);
    

//     return end;
// }

void quickSort(int arr[], int l, int h){
    if(l<h){
        int pivot=partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={3,6,2,5,1,4};

    quickSort(arr,0,5);
    
    printArray(arr,6);

    return 0;
}