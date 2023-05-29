#include<bits/stdc++.h>
using namespace std;

void subsequenceofsumk(int ind,vector<int> &ds, int arr[], int k,int sum,int size){
    if(ind==size){
        if(sum==k){
            for(auto it : ds){
                cout<<it<<" ";
            }cout<<endl;
        }

        return;
    }

    ds.push_back(arr[ind]);
    sum+=arr[ind];
    subsequenceofsumk(ind+1,ds,arr,k,sum,size);
    sum-=arr[ind];
    ds.pop_back();
    subsequenceofsumk(ind+1,ds,arr,k,sum,size);
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

    vector<int> ds;
    cout<<"subsequence of sum="<<k<<endl;
    subsequenceofsumk(0,ds,arr,k,sum,size);

    return 0;
}