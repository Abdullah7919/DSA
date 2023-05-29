#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; int x=n;
    int digit=0;
    int ans=0;
    while(n!=0){
        digit=n%10;
        ans=ans*10 +digit;
        n=n/10;
    }
    if(ans==x){
        cout<<"palindrome";
    }else{
        cout<<"Not a palindrome";
    }
    return 0;
}