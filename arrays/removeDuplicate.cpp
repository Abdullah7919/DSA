#include<bits/stdc++.h>
using namespace std;

// int removeDuplicate(int arr[], int n){

//     set<int> s;
//     int i=0, j=0;
//     for( i=0; i<n; i++){
//         s.insert(arr[i]);
//     }
//     int k=0;
//     for(auto x:s){
//         arr[j++]=x;
//         k++;
//     }

//     return k;
// }

// Intuition: We can think of using two pointers ‘i’ and ‘j’, we move ‘j’ till we don’t get a number arr[j] which is different from arr[i]. As we got a unique number we will increase the i pointer and update its value by arr[j]. 

int removeDuplicate(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,1,1,2,2,3,3,4,4};
    int n=9;
    int k=removeDuplicate(arr,n);
    printArray(arr,k);

  
    return 0;
}