#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> arr,int target){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>> res;
    for(int i=0; i<n; i++){

        int target_3=target-arr[i];

        for(int j=i+1; j<n; j++){

            int target_2=target_3-arr[j];
            int front=j+1;
            int back=n-1;
            // int two_sum=arr[front]+arr[back];

            while(front<back){

                 int two_sum=arr[front]+arr[back];

                 if(two_sum<target_2) front++;

                 else if(two_sum>target_2) back--;

                 else{

                    vector<int> quad(4,0);
                    quad[0]=arr[i];
                    quad[1]=arr[j];
                    quad[2]=arr[front];
                    quad[3]=arr[back];
                    res.push_back(quad);
                 

                 while(front<back && arr[front]==quad[2]) front++;

                 while(front<back && arr[back]==quad[3]) back--;

                 }
            }

            while(j+1<n && arr[j+1]==arr[j]) j++;
        }

         while(i+1<n && arr[i+1]==arr[i]) i++;
    }

    return res;
}

// vector<vector<int>> fourSum(vector<int>& arr,int target){
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     set<vector<int>> s;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n;  j++){
//             for(int k=j+1; k<n; k++){
//                 int sum=arr[i]+arr[j]+arr[k];
//                 int x=target-sum;
//                 if(binary_search(arr.begin()+k+1,arr.end(),x)){
//                     vector<int> v;
//                     v.push_back(arr[i]);
//                     v.push_back(arr[j]);
//                     v.push_back(arr[k]);
//                     v.push_back(x);
//                     sort(v.begin(),v.end());
//                     s.insert(v);
//                 }
//             }
//         }
//     }

//     vector<vector<int>> ans(s.begin(),s.end());
//     return ans;
// }

int main(){
    vector<int> arr{4,3,3,4,4,2,1,2,1,1};
    int target=9;
    
    vector<vector<int>> ans=fourSum(arr,target);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}