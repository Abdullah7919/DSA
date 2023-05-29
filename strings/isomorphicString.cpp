#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string s1, string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    int n=s1.size();
    char m[128]={};

    for(int i=0; i<n; i++){
        char ch=s1[i];
        if(!m[ch]){
            for(auto c:m){
                if(c==s2[i]){
                    return false;
                }
            }

            m[ch]=s2[i];
        }

        else if(m[ch]!=s2[i]){
            return false;
        }
    }

    return true;
}

int main(){
    string s1="aab";
    string s2="xyz";

    if(isomorphic(s1,s2)){
        cout<<true;
    }else{
        cout<<false;
    }

    return 0;
}