#include<bits/stdc++.h>
using namespace std;

bool rotation(string s1, string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    string temp=s1+s1;
    if(temp.find(s2)!=string::npos){
        return true;
    }

    return false;
}

int main(){
    string s1="geeksforgeeks";
    string s2="forgeeksgeeks";
    if(rotation(s1,s2)){
        cout<<true;
    }else{
        cout<<false;
    }
    return 0;
}