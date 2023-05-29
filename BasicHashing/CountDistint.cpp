#include<bits/stdc++.h>
using namespace std;

// count distinct element:

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    int count=0;
    for(auto it:s){
        count++;
    }
    cout<<count;

    return 0;
}