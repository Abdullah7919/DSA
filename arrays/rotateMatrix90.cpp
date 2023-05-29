#include<bits/stdc++.h>
using namespace std;

// Rotate 90 deg anticlockwise

vector<vector<int>> rotateanti(vector<vector<int>> &matrix){
    int n=matrix.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }

    int ind=n-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            int temp=matrix[j][i];
            matrix[j][i]=matrix[ind][i];
            matrix[ind][i]=temp;
            ind--;
        }
        ind=n-1;
    }

    return matrix;
}

// Rotate 90 deg clockwise
  
vector<vector<int>> rotate(vector<vector<int>> &matrix){
    int n=matrix.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    return matrix;
}

// vector<vector<int>> rotate(vector<vector<int>> &matrix){
//     int n=matrix.size();
//     vector<vector<int>> rotate(n,vector<int>(n,0));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             rotate[j][n-i-1]=matrix[i][j];
//         }
//     }

//     return rotate;
// }

void print(vector<vector<int>> &matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> res=rotate(matrix);
    // vector<vector<int>> res=rotateanti(matrix);
    print(res);

    return 0;
}