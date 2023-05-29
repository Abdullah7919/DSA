#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector<int> &ds,int arr[],int n){
    if(ind==n){
        for(auto it: ds){
            cout<< it <<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }cout<<endl;

        return;
    }

    // printF(ind+1,ds,arr,n);

    ds.push_back(arr[ind]);

    printF(ind+1,ds,arr,n);
    
    ds.pop_back();
    
    printF(ind+1,ds,arr,n);
}

int main(){
    int n;
    cout<<"number of element you want to insert"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ds;
    cout<<"subsequence of array"<<endl;
    printF(0,ds,arr,n);

    return 0;
}