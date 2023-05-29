#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascal(int row){
    vector<vector<int>> r(row);
    for(int i=0; i<row; i++){
    r[i].resize(i+1);
    r[i][0]=r[i][i]=1;
    for(int j=1; j<i; j++){
        r[i][j]=r[i-1][j-1]+r[i-1][j];
    }

    }

    return r;
}

int main(){
    int row=5;
    vector<vector<int>> ans=pascal(row);
    for(int i=0; i<row; i++){
        for(int k=row-i; k>0; k--){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}