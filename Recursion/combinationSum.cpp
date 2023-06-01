#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){

        if(ind==arr.size()){
            if(target==0){
                sort(ds.begin(),ds.end());
                ans.push_back(ds);
            }

            return;
        }

        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findCombination(ind ,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }

        findCombination(ind+1,target,arr,ans,ds);
}

vector<vector<int>> combinationSum(vector<int> &arr,int target){
        vector<vector<int>> ans;
        vector<int> ds;

        findCombination(0,target,arr,ans,ds);

        return ans;
}

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
    vector<int> arr={7,2,6,5};
    int target=16;
    vector<vector<int>> ans=combinationSum(arr,target);
    print(ans);
    return 0;
}