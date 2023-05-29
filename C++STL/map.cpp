#include<bits/stdc++.h>
using namespace std;

int main(){
     int N,P;
        cin>>P;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
         map<int,int> m;
        for(int i=1; i<=P; i++){
            m[i]=0;
        }
        for(int i=0; i<N; i++){
            m[arr[i]]++;
        }

        for(auto it:m){
            cout<<it.second<<" ";
        }
    return 0;
}