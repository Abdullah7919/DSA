#include<bits/stdc++.h>
using namespace std;

// void sort(int arr[], int n){
//     multiset<int> ms;
//     for(int i=0; i<n; i++){
//         ms.insert(arr[i]);
//     }

//     for(auto x:ms){
//         cout<<x<<" ";
//     }
// }

void sort(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++,low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={2,0,2,1,1,0};
    sort(arr,6);
    printArray(arr,6);
    return 0;
}