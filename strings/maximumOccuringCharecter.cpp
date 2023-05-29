#include<bits/stdc++.h>
using namespace std;

char maxiCharacter(string s){
    map<char,int> m;
    int maxi=INT_MIN;
    char ans;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }

    for(auto ch:m){
        if(ch.second>maxi){
            ans=ch.first;
            maxi=ch.second;
        }
    }

    return ans;
}

int main(){
    string s="abdullah";
    char ans=maxiCharacter(s);
    cout<<ans;
    return 0;
}