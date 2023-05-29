#include<bits/stdc++.h>
using namespace std;

int timeFnc(int mid,int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i]/mid + (arr[i]%mid!=0);
    }
    return sum;
}

int kokoEating(int piles[],int n,int h){
    int start=1;
    int end=*max_element(piles,piles+n);
    int ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        int time=timeFnc(mid,piles,n);
        if(time<=h){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }

    return ans;
}

int main(){
    int piles[]={3,6,7,11};
    int h=8;
    int n=4;
    int result=kokoEating(piles,n,h);
    cout<<result;
    return 0;
}