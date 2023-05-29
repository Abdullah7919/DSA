#include<bits/stdc++.h>

using namespace std;

void CountWindow(int arr[],int k){
    map<int,int> m;

    for(int i=0; i<k; i++){
        m[arr[i]]++;
    }
    cout<<m.size()<<endl;

    for(int i=k; i<8; i++){
        if(m[arr[i-k]]==1){
            m.erase(arr[i-k]);
        }
        else{
            m[arr[i-k]]--;
        }
        m[arr[i]]++;
        cout<<m.size()<<endl;
    }
}

int main(){
    int arr[]={1,2,2,1,3,1,1,3};
    int k;
    cin>>k;
    CountWindow(arr,k);
    return 0;
}