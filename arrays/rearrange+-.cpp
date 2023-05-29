#include<bits/stdc++.h>
using namespace std;

void reArrange(int arr[], int n){
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            pos.emplace_back(arr[i]);

        }else{
            neg.emplace_back(arr[i]);
        }
    }

    int i=0;
    int j=0;
    int k=0;
    while(i<pos.size() && j<neg.size()){
        if(k%2==0){
            arr[k]=pos[i];
            i++;
            k++;
        }else{
            arr[k]=neg[j];
            j++;
            k++;
        }
    }

    if(i<pos.size()){
        while(i<pos.size()){
            arr[k]=pos[i];
            i++;
            k++;
        }
    }

    if(j<neg.size()){
        while(j<neg.size()){
            arr[k]=neg[j];
            j++;
            k++;
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n;  i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n=9;
    reArrange(arr,9);
    print(arr,n);
    return 0;
}