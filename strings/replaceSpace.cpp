#include<bits/stdc++.h>
using namespace std;

// replace space and push at that place @40

string replaceSpace(string s){
    string temp="";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
           s[i]='@';
           s[i+1]='4';
           s[i+2]='0';
        }else{
            temp.push_back(s[i]);
        }
    }

    return temp;
}

int main(){
    string s="my name abdullah";
    string ans=replaceSpace(s);
    cout<<ans;
    return 0;
}