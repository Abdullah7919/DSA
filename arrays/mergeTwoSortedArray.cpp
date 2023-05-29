#include<bits/stdc++.h>
using namespace std;

//  gap method 

void merge(int arr1[],int arr2[],int n, int m){
    int gap=ceil((float)(n+m)/2);
   
    while(gap>0){
         int i=0;
         int j=gap;
         while(j<(n+m)){
            if(j<n && arr1[i]>arr1[j]){
                swap(arr1[i],arr1[j]);
            }else if(j>=0 && i<n && arr1[i]>arr2[j-n]){
                swap(arr1[i],arr2[j-n]);
            }else if(j>=0 && i>=n && arr2[i-n]>arr2[j-n]){
                swap(arr2[i-n],arr2[j-n]);
            }

            j++;
            i++;
         }

         if(gap==1){
            gap=0;
         }else{
            gap=ceil((float)gap/2);
         }
    }
}

// void merge(int A[],int B[],int n, int m){
    
//     int i,k;
//     for(i=0; i<n; i++){
        
//         if(A[i]>B[0]){
//             int temp=A[i];
//             A[i]=B[0];
//             B[0]=temp;
//         }
//         int first=B[0];
//         for(k=1; k<m && B[k]<first; k++){
//                 B[k-1]=B[k]; 
//         }

//         B[k-1]=first;
//     }

// }

// O(n*n)

// void merge(int A[],int B[],int n,int m){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(A[i]>B[j]){
//                 swap(A[i],B[j]);
//             }
//         }
//     }

//     sort(A,A+n);
//     sort(B,B+m);
// }

int main(){
    int arr1[]={1,4,8,10};
    int  arr2[]={2,3,9};
    int n=4;
    int m=3;
    merge(arr1,arr2,n,m);
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;

    for(int j=0; j<m; j++){
        cout<<arr2[j]<<" ";
    }
    return 0;
}