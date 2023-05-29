#include<bits/stdc++.h>
using namespace std;

int floor1(vector<int>&arr,int n,int k){
    int index=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
    for(int i=0; i<n; i++){
        if(index==i && arr[index]==k){
            return i;
        }
        if(index==i && arr[index]!=k){
            return i-1;
        }
    }

    return n-1;
}

int main(){
    vector<int> arr={1,2,8,10,11,12,19};
    int n=7;
    int k=0;
    int res=floor1(arr,n,k);
    cout<<res;

    return 0;
}