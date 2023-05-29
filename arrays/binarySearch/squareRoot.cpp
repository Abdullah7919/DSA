#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    if(n==0 || n==1){
        return n;
    }

    int l=1, r=n/2, ans;
    while(l<=r){
        int mid=(l+r)/2;
        int sqr=mid*mid;
        if(sqr==n){
            return mid;
        }

        if(sqr<=n){
            l=mid+1;
            ans=mid;
        }else{
            r=mid-1;
        }
    }

    return ans;
}

// int squareRoot(int n){
//     if(n==0 || n==1){
//         return n;
//     }

//     int i=1, result=1;
//     while(result<=n){
//         i++;
//         result=i*i;
//     }

//     return i-1;
// }

int main(){
    int x;
    cin>>x;
    int ans=squareRoot(x);
    cout<<ans;
    return 0;
}