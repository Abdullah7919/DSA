#include<bits/stdc++.h>
using namespace std;

int stock(int arr[],int n){
    int maxProfit=0;
    int minPrice=INT16_MAX;
    for(int i=0; i<n; i++){
        if(minPrice>arr[i]){
            minPrice=arr[i];
        }
        if(arr[i]-minPrice>maxProfit){
            maxProfit=arr[i]-minPrice;
        }
    }

    return maxProfit;
}

// int stock(int arr[], int n){
//     int profit=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//            if(arr[j]>arr[i]){
//             profit=max(arr[j]-arr[i],profit);
//            }
//         }
//     }

//     return profit;

// }

int main(){
    int arr[]={7,1,5,3,6,4};
    int ans=stock(arr,6);
    cout<<ans;
    return 0;
}