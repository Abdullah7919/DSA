#include<bits/stdc++.h>
using namespace std;

// vector<int> twoSum(int arr[],int n,int k){
//     vector<int> res,store;
//     int left=0;
//     int right=store.size()-1;
//     int n1=0,n2=0;
//     for(int i=0; i<n; i++){
//         store.emplace_back(arr[i]);
//     }

//     sort(store.begin(),store.end());

//     while(left<right){
//         if(store[left]+store[right]==k){
//             n1=store[left];
//             n2=store[right];
//             break;
//         }
//         else if(store[left]+store[right]>k){
//             right--;
//         }else{
//             left++;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i]==n1){
//             res.emplace_back(i);
//         }else if(arr[i]==n2){
//             res.emplace_back(i);
//         }
//     }

//     return res;


// }

vector<int> twoSum(int arr[], int n, int k){
    unordered_map<int,int> m;
    vector<int> res;
    for(int i=0; i<n; i++){
        if(m.find(k-arr[i])!=m.end()){
            res.emplace_back(i);
            res.emplace_back(m[k-arr[i]]);
            return res;
        }else{
            m[arr[i]]=i;
        }
    }

    return res;
}

// pair<int,int> twoSum(int arr[], int n, int k){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j]==k){
//                 return {i,j};
//                 break;
//             }
//         }
//     }

//     return {0,0};
// }

int main(){
    int arr[]={2,3,1,4};
    int k=4;
    int n=4;

    // pair<int,int> p=twoSum(arr,n,k);

    // cout<<p.first<<" "<<p.second;

    vector<int> res=twoSum(arr,n,k);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}