#include<iostream>
using namespace std;

int main(){
    char ch='A';
    int n;
    cin>>n;
   for(int i=0; i<n; i++){
    ch='A'+n-i-1;
    for(int j=0; j<=i; j++){
        cout<<ch<<" ";
        ch++;
    }cout<<endl;
   }
    return 0;
}