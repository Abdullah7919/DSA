#include<iostream>
using namespace std;

int main(){
    char  ch='A';
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        ch='A';
        for(int j=n-i; j>0; j--){
            cout<<ch;
            ch++;
        }cout<<endl;
    }
    return 0;
}