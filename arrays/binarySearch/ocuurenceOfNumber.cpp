#include<bits/stdc++.h>
using namespace std;

int occurrence(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int last=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x){
            last=mid;
            start=mid+1;
        }
        if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    int count=0;
    int k;
    for(int i=last; i>=0; i--){
        if(arr[i]==x){
            count++;
            k=i;
        }
    }

    return count;
}

int main(){
    int arr[]={2, 2 , 3 , 3 , 3 , 3 , 4};
    int n=7;
    int k=3;
    int ans=occurrence(arr,n,k);
    cout<<ans;
    return 0;
}