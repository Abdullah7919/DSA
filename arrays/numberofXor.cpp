#include<bits/stdc++.h>
using namespace std;

// we use here prefix xor concept:
// prefix xor xr
// y^b=xr
// y=xr^b

int subarrayyXor(vector<int>&arr,int b){
    unordered_map<int,int> m;
    int xr=0;
    int count=0;
    for(auto it:arr){
        xr^=it;
        if(xr==b){
            count++;
        }
        int y=xr^b;
        if(m.find(y)!=m.end()){
            count+=m[y];
        }

        m[xr]++;
    }


    return count;
}

int main(){
    vector<int> arr{4,2,2,6,4};
    int b=6;

    int ans=subarrayyXor(arr,b);
    cout<<ans;
    return 0;
}