#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int l,int mid, int h){
    int invCount=0;
    int i=l;
    int j=mid;
    int k=l;
    int temp[100];
    while((i<=mid-1) && (j<=h)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
            invCount+=(mid-i);
        }
    }

    if(i>mid-1){
        while(j<=h){
            temp[k++]=arr[j++];
        }
    }else{
        while(i<=mid-1){
            temp[k++]=arr[i++];
        }
    }

    for(int i=l; i<=h; i++){
        arr[i]=temp[i];
    }
    return invCount;
}

int mergeSort(int arr[],int l, int h){
    int invCount=0;
    while(l<h){
        int mid=(l+h)/2;
        invCount+=mergeSort(arr,l,mid);
        invCount+=mergeSort(arr,mid+1,h);
        invCount+=merge(arr,l,mid+1,h);
        return invCount;
    }

    return 0;
   
}

int main(){
    int N = 5;
    int array[] = {1,2,3,4,5};
    int ans =mergeSort(array,0,N-1);
    cout<<ans;
    return 0;
}