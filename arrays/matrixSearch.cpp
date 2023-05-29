#include<bits/stdc++.h>
using namespace std;

// when 1st element of row is greater than last element of previous row:

// bool search(vector<vector<int>> &matrix, int target){
//     int n=matrix.size();
//     int m=matrix[0].size();
//     int l=0;
//     int h=(n*m)-1;
//     while(l<=h){
//         int mid=(l+(h-l)/2);
//         if(matrix[mid/m][mid%m]==target){
//             return true;
//         }
//         if(matrix[mid/m][mid%m]>target){
//             h=mid-1;
//         }else{
//             l=mid+1;
//         }
//     }

//     return false;
// }

// Applicabe to every type of Matrix search:

bool search1(vector<vector<int>>&matrix,int target){
    int m=matrix[0].size();
    int n=matrix.size();
    int i=0;
    int j=m-1;
    while(i<n && j>=0){
        if(matrix[i][j]==target){
            return true;
        }
        if(matrix[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    return false;

}

// Brute force:

// bool search1(vector<vector<int>>&matrix,int target){
//     int n=matrix.size();
//     int m=matrix[0].size();
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(matrix[i][j]==target){
//                 return true;
//             }
//         }
//     }

//     return false;
// }

int main(){

    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    int target = 23;

    bool result=search1(matrix,target);

    if(result==true){
        cout<<"found";
    }else{
        cout<<"not found";
    }

    
    return 0;
}