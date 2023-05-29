#include<bits/stdc++.h>
using namespace std;

void heapyfy(int arr[], int n, int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }

    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapyfy(arr,n,largest);
    }
    
}

void buildHeap(int arr[], int n){
    for(int i=n/2-1; i>=0; i--){
        heapyfy(arr,n,i);
    }
     
}

// void insert(int arr[],int n,int value){
//     n=n+1;
//     arr[n]=value;
//     int i=n;
//     while(i>1){
//         int parent=i/2;
//         if(arr[parent]<arr[i]){
//             swap(arr[parent],arr[i]);
//             i=parent;
//         }
//         else{
//             return;
//         }
//     }
// }

void heapShort(int arr[], int n){

    buildHeap(arr,n);

    for(int i=n-1; i>0; i--){
        swap(arr[0],arr[i]);
        heapyfy(arr,i,0);

    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // buildHeap(arr,n);

    heapShort(arr,n);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}