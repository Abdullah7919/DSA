#include<bits/stdc++.h>
using namespace std;

void zeros(int arr[], int n){


  int k = 0;
  while (k < n) {
    if (arr[k] == 0) {

      break;
    } else {
      k = k + 1;
    }
  }


  //finding zeros and immediate non-zero elements and swapping them

  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (arr[j] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;

    }

    j++;

  }
}

// void zeros(int arr[], int n){

//     int temp[n];
//     int k=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]!=0){
//             temp[k]=arr[i];
//             k++;
//         }
//     }

//     while(k<n){
//         temp[k]=0;
//         k++;
//     }
//     for(int i=0; i<n; i++){
//         arr[i]=temp[i];
//     }
// }

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,0,2,3,0,4,0,1};

    zeros(arr,8);
    printArray(arr,8);

    return 0;
}