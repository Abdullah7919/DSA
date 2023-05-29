#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// sub array with the given sum

 void subArray(int arr[], int sum,int n){
        int current=0;
        int start=0;
        int end=-1;
        // int maxLength=0;
        map<int,int> m;
        for(int i=0; i<n; i++){
            current+=arr[i];
            if(current-sum==0){
                start=0;
                end=i;
                break;
            }
            
            if(m.find(current-sum)!=m.end()){
                start=m[current-sum]+1;
                end=i;
                break;
            }
            m[current]=i;
        }
        if(end==-1){
            cout<<"not found";
        }else{
            cout<<"Index-> start="<<start<<" "<<"end="<<end;
        }
    }

int main(){
   int sum;
   cin>>sum;
   int n;
   int arr[]={-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
   n=sizeof(arr)/sizeof(arr[0]);
   subArray(arr,sum,n);

   return 0;
}