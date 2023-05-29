#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  GCD using Euclidean's theorm:

int gcd(int a, int b){
    if(b==0){
        return a;
    }

    return gcd(b, a%b);
}

//  GCD of Array

int gcdofArray(int arr[], int n){
    int result = arr[0];
    for(int i=1; i<n; i++){
        result =gcd(arr[i],result);

        if(result==1){
            return 1;
        }
    }

    return result;
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }

    // int result=gcd(a,b);

    cout<<"The GCD of"<<"  ("<<a<<","<<b<< ")  "<<"is : "<<ans<<endl;

    // cout<<result;


    // LCM of two number:
    // LCM(a,b)=(a*b)/GCD(a,b):

    int lcm=0;
    lcm=(a/ans)*b;

    cout<<"LCM of two number is:"<<lcm;

    return 0;
}


