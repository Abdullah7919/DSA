#include<bits/stdc++.h>
using namespace std;

int missingAndRepeating(int arr[], int n){
    int xor1=0;
    int setbit;
    int x=0, y=0;
    xor1=arr[0];
    for(int i=1; i<n; i++){
        xor1=xor1^arr[i];
    }

    for(int i=1; i<=n; i++){
        xor1=xor1^i;
    }

    setbit=xor1 &~(xor1-1);
    for(int i=0; i<n; i++){
        if(arr[i]&setbit){
            x=x^arr[i];
        }else{
            y=y^arr[i];
        }
    }

    for(int i=1; i<=n; i++){
        if(i&setbit){
            x=x^i;
        }else{
            y=y^i;
        }
    }

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            count++;
    }

    if(count==0){
        return x;
    }else{
        return y;
    }

}
}

int main(){

    int arr[]={4,3,6,2,1,1};
     
    int ans=missingAndRepeating(arr,6);

    cout<<ans;
    
    return 0;
}