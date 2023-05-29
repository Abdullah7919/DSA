#include<bits/stdc++.h>
using namespace std;

// Uinque three sum 

vector<vector<int>> threeSum(int arr[],int n){
    vector<vector<int>> res;
    sort(arr,arr+n);
    // vector<int> temp;
    for(int i=0; i<n-2; i++){
        if(i==0 || (i>0 && arr[i]!=arr[i-1])){
            int lo=i+1, hi=n-1, sum=0-arr[i];
            while(lo<hi){
                if(arr[lo]+arr[hi]==sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[lo]);
                    temp.push_back(arr[hi]);
                    res.push_back(temp);
                    // temp.clear();

                    while(lo<hi && arr[lo]==arr[lo+1]) lo++;
                    while(lo<hi && arr[hi]==arr[hi-1]) hi--;

                    lo++;
                    hi--;
                }

                else if(arr[lo]+arr[hi]<sum){
                    lo++;
                }else{
                    hi--;
                }
            }
        }
    }

    return res;
}

// vector<vector<int>> threeSum(int arr[],int n){
//     vector<vector<int>> res;
//     vector<int> ans;
//     for(int i=0; i<n-2; i++){
//         for(int j=i+1; j<n; j++){
//             ans.clear();
//             if(arr[i]+arr[j]+arr[j+1]==0){
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 ans.push_back(arr[j+1]);
//             }
//             if(ans.size()!=0){
//                  res.push_back(ans);
//              }
//         }
        
//     }

//     return res;
// }

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<vector<int>> ans=threeSum(arr,n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}