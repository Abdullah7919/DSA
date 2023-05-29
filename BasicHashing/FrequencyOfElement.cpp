#include<bits/stdc++.h>
using namespace std;

// take o(n*n)

// void frequency(int arr[],int size){
//     vector<bool> v(size,false);
//     for(int i=0; i<size; i++){

//         if(v[i]==true){
//             continue;
//         }
//         int count=1;
//         for(int j=i+1; j<size; j++){
//             if(arr[i]==arr[j]){
//                 v[j]=true;
//                 count++;
//             }
//         }
//         cout<< arr[i] <<" "<< count <<endl;
//     }
// }

// modify of frequency count using map take o(n)

void frequency(int arr[],int size){
 
    map<int,int> m;
    for(int i=0; i<size; i++){
        m[arr[i]]++;
    }
    
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

}

int main(){
    
    int arr[]={10,5,10,15,10,5};
    int size=sizeof(arr)/sizeof(int);
    
    
    frequency(arr,size);
    return 0;
}