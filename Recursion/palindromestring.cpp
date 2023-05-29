#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s, int l, int r){
    if(l>=r/2){
        return true;
    }
    if(s[l]!=s[r-l-1]){
        return false;
    }
    
    return ispalindrome(s,l+1,r);

}

int main(){
    string s;
    getline(cin,s);
    int l=0;
    int r=s.size();
    if(ispalindrome(s,l,r)){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome";
    }
    return 0;
}