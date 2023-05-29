#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingSubInterval(vector<vector<int>>&arr){
    vector<vector<int>> mergeInterval;
    sort(arr.begin(),arr.end());
    vector<int> tempInterveal;
    if(arr.size()==0){
        return mergeInterval;
    }
    tempInterveal=arr[0];
    for(auto it:arr){
        if(it[0]<=tempInterveal[1]){
            tempInterveal[1]=max(it[1],tempInterveal[1]);
        }else{
            mergeInterval.emplace_back(tempInterveal);
            tempInterveal=it;
        }
    }

    mergeInterval.push_back(tempInterveal);
    return mergeInterval;
}

int main(){

    vector<vector<int>> arr{{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};

    vector<vector<int>> ans=mergeOverlappingSubInterval(arr);

    for(auto it:ans){
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    
    return 0;
}