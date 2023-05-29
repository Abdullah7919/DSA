#include<bits/stdc++.h>
using namespace std;

int maxiProduct(int arr[],int n){
    int prod1=arr[0],prod2=arr[0],result=arr[0];
    for(int i=1; i<n; i++){
        int temp=max({arr[i],prod1*arr[i],prod2*arr[i]});
        // prod2=min({arr[i],prod1*arr[i], prod2*arr[i]});
        prod1=temp;
        result=max(prod1,result);
    }

    return result;
}

// int maxiProduct(int arr[],int n){
//     int current_prod=arr[0];
//     int maximum_prod=arr[0];
//     for(int i=1; i<n; i++){
//         current_prod*=arr[i];
//         if(current_prod>maximum_prod){
//             maximum_prod=current_prod;
//         }
//         else{
//             if(current_prod==0){
//                 current_prod=1;
//             }
//         }
//     }
//     return maximum_prod;
// }

int main(){

    int arr[]={1,2,3,4,5,0};
    int n=6;
    int ans=maxiProduct(arr,n);
    cout<<ans;

    
    return 0;
}