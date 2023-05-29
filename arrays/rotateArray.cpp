#include<bits/stdc++.h>
using namespace std;


// right rotation upto d

void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void rotateArray(int arr[], int n, int k){
    int d=k%n;
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
    reverse(arr,0,n-1);
}

// for left rotation
// void rotateArray(int arr[], int n, int k){
//     int d=k%n;
//     reverse(arr,0,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,0,n-1);
// }

//  left rotate upto k

// void rotateArray(int arr[],int n,int k){
//     int a[n];
//     int j=0;
//     for(int i=k; i<n; i++){
//         a[j]=arr[i];
//         j++;
//     }
    
    
//     for(int i=0; i<k; i++){
//         a[j]=arr[i];
//         j++;
//     }
    
//     for(int i=0; i<n; i++){
//         arr[i]=a[i];
//     }


// }

// Rotation of Array by one position

// void rotateArray(int arr[], int n){
//     int temp=arr[0];
//     for(int i=1; i<n; i++){
//         arr[i-1]=arr[i];
//     }

//     arr[n-1]=temp;
// }

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7};

    int k=3;

    rotateArray(arr,7,k);
    cout<<"PRint"<<endl;
    printArray(arr,7);
 
    
    return 0;
}