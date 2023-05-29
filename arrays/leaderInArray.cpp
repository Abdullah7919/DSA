#include<bits/stdc++.h>
using namespace std;

vector<int> leader(int arr[],int n){
    int max=arr[n-1];
    vector<int> ans;
    ans.push_back(max);
    for(int i=n-2; i>=0; i--){
        if(arr[i]>max){
            max=arr[i];
            ans.push_back(max);
        }
    }

    reverse(ans.begin(),ans.end());

    return ans;

}

void print(vector<int> &res){
    for(auto x:res){
        cout<<x<<" ";
    }
}

int main(){

    int arr[]={10, 22, 12, 3, 0, 6};
    int n=6;
    vector<int> result=leader(arr,n);
    print(result);
    
    return 0;
}