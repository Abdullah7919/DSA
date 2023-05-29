#include<bits/stdc++.h>
using namespace std;

int main(){
    int largest=INT_MIN;

    int arr[5]={3,4,9,5,1};
    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<largest<<endl;
    

    return 0;
}