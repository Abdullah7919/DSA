#include<bits/stdc++.h>
using namespace std;



// Reverse pair are: arr[i]>2*arr[j] & i<j

// using Merge Sort

int merge(vector<int>&arr,int left,int mid,int right){
    int total=0;
    int j=mid+1;
    for(int i=left; i<=mid; i++){
        while(j<=right && arr[i]>2*arr[j]){
            j++;
        }

        total+=(j-(mid+1));
    }

    vector<int> temp;
    int low=left, high=mid+1;
    while(low<=mid && high<=right){
        if(arr[low]<=arr[high]){
            temp.push_back(arr[low++]);
        }else{
            temp.push_back(arr[high++]);
        }
    } 

    if(low>mid){
        while(high<=right){
            temp.push_back(arr[high++]);
        }
    }
    else{
            while(low<=mid){
                temp.push_back(arr[low++]);
            }
        }

    for(int i=left; i<=right; i++){
        arr[i]=temp[i-left];
    }

    return total;

}


int mergeSort(vector<int> &arr,int left,int right){
    if(left>=right) {
        return 0;
    }else{
    int mid=(left+right)/2;
    int count=mergeSort(arr,left,mid);
    count+=mergeSort(arr,mid+1,right);
    count+=merge(arr,left,mid,right);
    return count;
    }
}

// pair<int ,int> reversePair(int arr[], int n){

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]>2*arr[j]){
//                 return {arr[i],arr[j]};
//             }
//         }
//     }

//     return {0,0};
// }

int main(){
    // int arr[]={1,3,2,3,1};
    // int n=5;
    // pair<int,int> ans=reversePair(arr,n);
    // cout<<ans.first<<" "<<ans.second;
    vector<int> arr{3, 2, 4, 5, 1, 20};
    int ans= mergeSort(arr,0,arr.size()-1);
    cout<<ans;
    return 0;
}