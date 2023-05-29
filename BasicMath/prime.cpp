#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(n!=1 && isprime(n)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}