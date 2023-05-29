#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2){
    
    if(s1.size()!=s2.size()){
        return false;
    }

    map<char,int> m;
    for(int i=0; i<s1.size(); i++){
        m[s1[i]]++;
    }

    for(int i=0; i<s2.size(); i++){
        
            m[s2[i]]--;
    }

    for(int i=0; i<s1.size(); i++){
        if(m[i]!=0){
            return false;
        }
    }

    return true;
}

int main(){
    string s1="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    string s2="bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbba";
    if(anagram(s1,s2)){
        cout<<true;
    }else{
        cout<<false;
    }
    return 0;
}