#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n;
    int ans=0;
    // int digit=0;
    int count=0;
    while(x!=0){
        count++;
        x=x/10;
    }
    // cout<<count<<endl;
    x=n;
    while(x!=0){
      int digit=x % 10;
        ans=ans+pow(digit,count);
        x=x/10;
    }
    // cout<<ans;
    if(ans==n){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not a Armstrong Number";
    }
    return 0;
}