#include<bits/stdc++.h>
using namespace std;

vector<int> firstAndLastOccurance(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int last=-1;
    int first=0;
    vector<int> ans;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k){
            last=mid;
            start=mid+1;
        }
        if(arr[mid]>k){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    int ind =last;
    while(ind>=0){
        if(arr[ind]==k){
            first=ind;
        }
        ind--;
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

// void first(int arr[],int n, int x){
//     int first=0,last;
//     for(int i=0; i<n; i++){
//         if(arr[i]==x){
//             first=i;
//             break;
//         }
//     }

//      for(int i=0; i<n; i++){
//         if(arr[i]==x){
//             last=i;
//         }
//     }

//     cout<<first<<" "<<last<<endl;
// }

int main(){
    int a[]={3, 4, 13,13,13,20,40};
    int n=7;
    int k=13;
    vector<int> res=firstAndLastOccurance(a,n,k);  
    cout<<res[0]<<" "<<res[1];
     return 0;
}