#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int k=n-i; k>1; k--){
            cout<<"  ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }cout<<endl;
    }

     for(int i=1; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }
        for(int k=1; k<=i; k++){
            cout<<"  ";
        }
        for(int j=n-i; j>0; j--){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}