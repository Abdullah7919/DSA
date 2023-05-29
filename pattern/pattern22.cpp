#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=n; j>i; j--){
            cout<<j;
        }
        for(int k=1; k<=(i*2-1); k++){
         
            cout<<i;
        }
        for(int j=i+1; j<=n; j++){
            cout<<j;
        }cout<<endl;
    }

    for(int i=1; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<j;
        }
        for(int j=1; j<=(i*2-1); j++){
            cout<<i+1;
        }
        for(int j=i+1; j<=n; j++){
            cout<<j;
        }cout<<endl;
    }
    return 0;
}