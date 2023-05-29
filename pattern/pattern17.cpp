#include<iostream>
using namespace std;

int main(){
    char ch='A';
    char chh='A';
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            ch='A';
        for(int j=n-i; j>=0; j--){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        
        for(int j=1; j<=i; j++){
            cout<<chh;
            chh--;
        }cout<<endl;
        chh='A'+i;
    }
    return 0;
}