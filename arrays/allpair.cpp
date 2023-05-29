#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first<b.first;
}

vector<pair<int,int>> allpair(int a[], int b[],int n, int m, int k){
    unordered_set<int> s;
    vector<pair<int,int>> ans;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }

    for(int i=0; i<m; i++){
        if(s.find(k-b[i])!=s.end()){
            ans.emplace_back(k-b[i],b[i]);
        }
    }

    sort(ans.begin(),ans.end(),cmp);

    return ans;
}

int main(){
    int a[]={1, 2, 4, 5, 7};
    int b[]={5, 6, 3, 4, 8};

    vector<pair<int,int>> res=allpair(a,b,5,5,9);

    for(auto x:res){
        cout<<x.first<<" "<<x.second<<endl;
    }


    
    return 0;
}