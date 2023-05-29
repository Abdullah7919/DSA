#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(int arr1[], int arr2[],int n, int m){
    vector<int> v;

    unordered_set<int> s;

    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }

    for(int i=0; i<m; i++){
        if(*(s.find(arr1[i]))==arr2[i]){
            v.push_back(arr2[i]);
            s.erase(arr1[i]);
        }
    }

    return v;
}

// vector<int> intersection(int arr1[], int arr2[],int n, int m){
//     vector<int> v;
//     int i=0, j=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             i++;
//         }else if(arr2[j]<arr1[i]){
//             j++;
//         }else{
//             v.push_back(arr1[i]);
//             i++;
//             j++;
    
//         }

        
//     }

//     return v;
// }

int main(){
    int arr1[]={2,3,4,6};
    int arr2[]={2,4,6,7};
    vector<int> v=intersection(arr1,arr2,4,4);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
       return 0;
}