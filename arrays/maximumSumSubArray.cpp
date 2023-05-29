#include<bits/stdc++.h>
using namespace std;

// Kadan's algo-: 

int maxSumSubArray(int arr[],int n, vector<int> &ds){
    int current_sum=0;
    int max_sum=INT16_MIN;
    int j=0;
    for(int i=0; i<n; i++){
        current_sum+=arr[i];
        if(current_sum>max_sum){
            ds.clear();
            ds.push_back(j);
            ds.push_back(i);
            max_sum=current_sum;
        }
        if(current_sum<0){
            j=i+1;
            current_sum=0;
        }
    }
    return max_sum;
}

// int maximumSumSubArray(int arr[],int n, vector<int> &subarray){
//     int max_sum=INT16_MIN;
//     int i;
//     int j;
//     for(i=0; i<n; i++){
//         int sum=0;
//         for(j=i; j<n; j++){
//              sum+=arr[j];
//             if(sum>max_sum){
//                 subarray.clear();
//                 max_sum=sum;
//                 subarray.push_back(i);
//                 subarray.push_back(j);
//             }
//         }
//     }

//     return max_sum;
// }

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> ds;
   int ans= maxSumSubArray(arr,9,ds);
    cout<<ans<<endl;;
    for(int i=ds[0]; i<=ds[1]; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}