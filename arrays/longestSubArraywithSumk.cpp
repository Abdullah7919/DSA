#include<bits/stdc++.h>
using namespace std;

int longestSubArray(int arr[], int n, int k){
    int sum=0;
    int maxLength=0;
    unordered_map<int,int> m;

    for(int i=0; i<n ;i++){
        sum+=arr[i];
        if(sum==k){
            maxLength=i+1;
        }

        // if(m.find(sum)==m.end()){
        //     m[sum]=i;
        // }

        if(m.find(sum-k)!=m.end()){
            maxLength=max(maxLength,(i-m[sum-k]));
        }else{
            m[sum]=i;
        }
    }

    return maxLength;
}

int main(){
   int sum,n;
   cin>>sum>>n;
   int arr[]={-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};

   int ans=longestSubArray(arr,n,sum);
   cout<<ans;
    return 0;
}