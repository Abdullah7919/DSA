#include<bits/stdc++.h>
using namespace std;

int  maxConsicitiveOnes(int arr[], int n){

    int count=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }else{
            count=0;
        }

        maxi=max(maxi,count);
    }

    return maxi;
}

int main(){

    int arr[]={1,0,0,1,1,1,0,0,1,1,1,1};
    int size=sizeof(arr)/sizeof(int);

    int result=maxConsicitiveOnes(arr,size);

    cout<<result;
    
    return 0;
}