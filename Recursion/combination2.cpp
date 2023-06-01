#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> 


void print(vector<vector<int>> ans){

    for(int i=0; i<ans.size(); i++){
        cout<<"(";
        for(auto it:ans[i]){
            cout<<it<<" ";
        }
        cout<<")";

        cout<<endl;
    }
}

int main(){
    vector<int> arr={1,1,1,2,2};
    int target=8;
    vector<vector<int>> ans=combinationSum(arr,target);
    print(ans);
    return 0;
}