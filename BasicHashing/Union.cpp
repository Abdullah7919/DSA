#include<bits/stdc++.h>
using namespace std;

// if array was sorted than this methid is applicable

vector<int> uni(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0;
    vector<int> res;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(res.size()==0 || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
                i++;
            }
        }else{
            if(res.size()==0 || res.back()!=arr2[j]){
                res.push_back(arr2[j]);
                j++;
            }
        }
    }
    
        while(i<n1){
            if(res.back()!=arr1[i]){
            res.push_back(arr1[i]);
            i++;
            }
        
        }

         while(j<n2){
            if(res.back()!=arr2[j]){
            res.push_back(arr2[j]);
            j++;
            }
        
        }

        return res;
    
}

int main(){
    int arr[]={1,2,3,5};
    int arr1[]={2,3,4,6};
    unordered_set<int> s;
    for(int i=0; i<4; i++){
        s.insert(arr[i]);
        s.insert(arr1[i]);
    }
    for(auto it:s){
        cout<<it<<" ";
    }

    return 0;
}