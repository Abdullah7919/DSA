#include<bits/stdc++.h>
using namespace std;

pair<int,int> floorCeil(int arr[],int n, int x){
    int floor=-1;
    int ceil=-1;
    int fdist=INT_MAX;
    int cdist=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>=x && cdist>(arr[i]-x)){
            ceil=arr[i];
            cdist=arr[i]-x;
        }
        if(arr[i]<=x && fdist>(x-arr[i])){
            floor=arr[i];
            fdist=x-arr[i];
        }
    }

    return {floor,ceil};
}

int main(){
    int arr[]={5, 6, 8, 9, 6, 5, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    pair<int,int> ans=floorCeil(arr,n,k);

    cout<<ans.first<<" "<<ans.second;
    return 0;
}