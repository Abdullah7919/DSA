#include<bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>> &matrix){
    int rows=matrix.size();
    int cols=matrix[0].size();
    vector<int> row(rows,-1);
    vector<int> col(cols,-1);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(row[i]==0 || col[j]==0){
                matrix[i][j]=0;
            }
        }
    }
}

void print(vector<vector<int>> &matrix){
    int rows=matrix.size();
    int cols=matrix[0].size();

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZero(matrix);
    print(matrix);
    
    return 0;
}