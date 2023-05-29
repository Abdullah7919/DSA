#include<bits/stdc++.h>
using namespace std;


int subsequenceofsumk(int ind, int arr[], int k,int sum,int size){
    if(ind==size){
        if(sum==k){
            return 1;
        }

        return 0;
    }

    
    sum+=arr[ind];
    int l=subsequenceofsumk(ind+1,arr,k,sum,size);
    sum-=arr[ind];
    int r= subsequenceofsumk(ind+1,arr,k,sum,size);

    return l+r;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int sum=0;
    int k=2;

   cout<<"Number of subsequence whose sum="<<k<<endl;
   cout<<subsequenceofsumk(0,arr,k,sum,size);
    return 0;
}