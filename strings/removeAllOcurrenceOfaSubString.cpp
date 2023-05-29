#include<bits/stdc++.h>
using namespace std;

string removeAll(string s, string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s="daabcbaabcbc";
    string part="abc";
    string ans=removeAll(s,part);
    cout<<ans;

    return 0;
}