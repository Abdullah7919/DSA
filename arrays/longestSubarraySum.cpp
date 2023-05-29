#include<bits/stdc++.h>
using namespace std;

int longestSubAraySum(int arr[],int n){
    map<int,int> m;
    int sum=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }else{
            if(m.find(sum)!=m.end()){
                maxi=max(maxi,i-m[sum]);
            }else{
                m[sum]=i;
            }
        }
    }
    return maxi;
}

int main(){

    int arr[]={9, -3, 3, -1, 6, -5};
    int n=6;

    int ans=longestSubAraySum(arr,n);
    cout<<ans;
    
    return 0;
}