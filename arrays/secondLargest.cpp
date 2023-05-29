#include<bits/stdc++.h>
using namespace std;


void secondSmallest(int arr[], int n){
    int smallest=INT16_MAX;
    int secondSmallest=INT16_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest=arr[i];
        }
    }
    cout<<"second smallest="<<secondSmallest<<endl;
    cout<<"Smallest="<<smallest<<endl;
}

void secondLargest(int arr[],int n){

    int largest=INT16_MIN;
    int secondLargest=INT16_MIN;

    // this loop find the largest

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    // this loop is find the second largest 

    for(int i=0; i<n; i++){
    
        if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }

    cout<<"Largest="<<largest<<endl;
    cout<<"second largest="<<secondLargest<<endl;
}

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     }
//     }

// void sec(int arr[],int n){
//     int lar=INT16_MIN;
//     int slar1=INT16_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>lar){
//             slar1=lar;
//             lar=arr[i];
//         }

//         if(arr[i]>slar1 && arr[i]!=lar){
//             slar1=arr[i];
//         }
//     }

//     cout<<slar1;
// }

int main(){

    int arr[6]={5,3,2,1,6,4};

    secondLargest(arr,6);

    secondSmallest(arr,6);

    // sec(arr,6);

    // printArray(arr,6);

    
    return 0;
}