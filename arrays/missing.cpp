#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int N){
     int sum=(N*(N+1))/2;
    
    int sum1=0;
    for(int i=0; i<N-1; i++){
        sum1+=arr[i];
    }
    
    return sum-sum1;
}

// int missingAndRepeatingNumber(int arr[],int n){

//     int s=(n*(n+1))/2;
//     int p=(n*(n+1)*(2*n+1))/6;

//     int missing=0, repeating=0;

//     for(int i=0; i<n; i++){
//         s-=arr[i];
//         p-=arr[i]*arr[i];
//     }

//     missing=(s+(p/s))/2;
//     repeating=missing-s;

//     return repeating;

// }

// void missingNumber(int A[], int N)
// {
//     vector<int> v(N,0);
//     for(int j=0; j<N; j++){
//             v[A[j]]=1;    
//         }

//     for(int i=1; i<=N; i++){
//         if(v[i]==0){
//             cout<<i;
//             break;
//         }
//     }
// }

int main(){

    int arr[]={1,3,4};

    int n=4;

   int ans= missingNumber(arr,n);

    // int ans=missingAndRepeatingNumber(arr,n);

    cout<<ans;

    
    
    return 0;
}