#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,3,4,5,6};
    int arr1[]={3,3,5,4};
    int count=0;
    set<int> s;
    for(int i=0; i<7; i++){
        s.insert(arr[i]);
    }
    
    for(auto x:arr1){
        if((s.find(x))!=s.end()){
            count++;
            cout<<x<<" ";
            s.erase(s.find(x));
        }
    }
    // cout<<*(s.find(4))<<" ";
    // cout<<count;
    
    

    return 0;
}