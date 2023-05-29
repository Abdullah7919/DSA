#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair<int,int> p={1,3};

    // pair<int,pair<int,int>> pr={1, {4,5} };

    // cout<<p.first<<endl;
    // cout<<p.second;
    // cout<<pr.second.first;

    int n;
    cin>>n;
    pair<int,int> arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);

    // cout<<arr[0].first;

    for(int i=0; i<n; i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }

    for(int i=0; i<size; i++){
        cout<<"first:"<<arr[i].first<<" "<<"second:"<<arr[i].second<<endl;
        
    }
    return 0;
}