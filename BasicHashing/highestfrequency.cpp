#include<bits/stdc++.h>
using namespace std;

void highestLowestfrquency(int arr[],int size){
    map<int,int> m;
    for(int i=0; i<size; i++){
        m[arr[i]]++;
    }
    int highest=INT16_MIN;
    int lowest=INT16_MAX;
    for(auto it:m){
        if(it.second>highest){
            highest=it.second;
        }
        if(it.second<lowest){
            lowest=it.second;
        }
    }
    cout<<highest<<endl;
    cout<<lowest<<endl;
}

int main(){
    int arr[]={10,5,10,15,10,5};
    int size=sizeof(arr)/sizeof(int);
    highestLowestfrquency(arr,size);
    return 0;
}