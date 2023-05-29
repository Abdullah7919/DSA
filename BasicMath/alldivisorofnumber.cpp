#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  Here we use the concept that quotient of the divison of one of the divisor is another divisor:

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i != n/i){
                cout<< n/i <<" ";
            }
        }
    }
    return 0;
}