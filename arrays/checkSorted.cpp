#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }

    return true;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    if(checkSorted(arr,8)){
        cout<<"sorted";
    }else{
        cout<<" Not Sorted";
    }
    return 0;
}