#include<bits/stdc++.h>
using namespace std;

// we can also solve it using inbuilt next_permutation function

void nextPermutation(vector<int> &arr,int n){
    int k=0;
    int l=0;
    for(k=n-2; k>=0; k--){
        if(arr[k]<arr[k+1]){
            break;
        }
    }

    if(k<0){
        reverse(arr.begin(),arr.end());
    }else{
        for(l=n-1; l>0; l--){
            if(arr[l]>arr[k]){
                break;
            }
        }

        swap(arr[l],arr[k]);
        reverse(arr.begin()+k+1,arr.end());
    }
}

void print(vector<int>&arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    vector<int> arr={1,3,5,4,2};

    int n=arr.size();

    nextPermutation(arr,n);
    print(arr,n);
    
    return 0;
}